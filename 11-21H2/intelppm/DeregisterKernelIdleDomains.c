/*
 * XREFs of DeregisterKernelIdleDomains @ 0x1C002C8CC
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C002BD10 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     GetDevExtFromIndex @ 0x1C00071B0 (GetDevExtFromIndex.c)
 *     DeregisterIdleDomain @ 0x1C003D350 (DeregisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1C003F6A4 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall DeregisterKernelIdleDomains(__int64 a1)
{
  unsigned __int32 *v2; // rdx
  unsigned int v3; // edi
  unsigned __int32 v5; // ecx
  unsigned __int32 v6; // eax
  unsigned __int32 *v7; // rdi
  __int64 v8; // rsi
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
  __m256i v13; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v14[272]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v15[272]; // [rsp+158h] [rbp+50h] BYREF

  memset(v15, 0, 0x108uLL);
  memset(&v13.m256i_u64[1], 0, 24);
  memset(v14, 0, 0x108uLL);
  KeInitializeAffinityEx2(v14, 32LL);
  v2 = *(unsigned __int32 **)(a1 + 728);
  if ( v2 )
  {
    v5 = 0;
    v13.m256i_i32[0] = 0;
    if ( *v2 )
    {
      v6 = 0;
      do
      {
        v7 = &v2[8 * v6];
        v8 = *((_QWORD *)v7 + 2);
        if ( v8 )
        {
          KeInitializeAffinityEx2(v15, 32LL);
          KeCopyAffinityEx2(v15, v8 + 48);
          if ( (unsigned __int8)DeregisterIdleDomain(a1, v7 + 2) )
            KeOrAffinityEx2(v15, v14, v14);
          v5 = v13.m256i_i32[0];
        }
        v2 = *(unsigned __int32 **)(a1 + 728);
        v13.m256i_i32[0] = ++v5;
        v6 = v5;
      }
      while ( v5 < *v2 );
    }
    v3 = 0;
    KeInitializeEnumerationContext(&v13.m256i_u64[1], v14);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v13.m256i_u64[1]) )
    {
      DevExtFromIndex = GetDevExtFromIndex(v13.m256i_u32[0]);
      updated = UpdateKernelIdleDomains(DevExtFromIndex);
      if ( updated < 0 )
        v3 = updated;
    }
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 712) + 56LL);
    v12 = 0LL;
    for ( v13.m256i_i32[0] = 0; (unsigned int)v12 < v11; v13.m256i_i32[0] = v12 )
    {
      *(_QWORD *)(88 * v12 + *(_QWORD *)(a1 + 712) + 136) = 0LL;
      v12 = (unsigned int)(v13.m256i_i32[0] + 1);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 728), (ULONG)1919119952);
    *(_QWORD *)(a1 + 728) = 0LL;
  }
  else
  {
    return 0;
  }
  return v3;
}
