/*
 * XREFs of DeregisterKernelIdleDomains @ 0x1C002FC88
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0032C70 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0002270 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     memset @ 0x1C000BE00 (memset.c)
 *     DeregisterIdleDomain @ 0x1C002FB74 (DeregisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1C003475C (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall DeregisterKernelIdleDomains(__int64 a1)
{
  unsigned __int32 *v2; // rdx
  unsigned int v3; // edi
  unsigned __int32 v4; // ecx
  unsigned __int32 v5; // eax
  unsigned __int32 *v6; // rdi
  __int64 v7; // rsi
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int v10; // edx
  __int64 v11; // rax
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
    v4 = 0;
    v13.m256i_i32[0] = 0;
    if ( *v2 )
    {
      v5 = 0;
      do
      {
        v6 = &v2[8 * v5];
        v7 = *((_QWORD *)v6 + 2);
        if ( v7 )
        {
          KeInitializeAffinityEx2(v15, 32LL);
          KeCopyAffinityEx2(v15, v7 + 48);
          if ( DeregisterIdleDomain(a1, (_QWORD *)v6 + 1) )
            KeOrAffinityEx2(v15, v14, v14);
          v4 = v13.m256i_i32[0];
        }
        v2 = *(unsigned __int32 **)(a1 + 728);
        v13.m256i_i32[0] = ++v4;
        v5 = v4;
      }
      while ( v4 < *v2 );
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
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 712) + 56LL);
    v11 = 0LL;
    for ( v13.m256i_i32[0] = 0; (unsigned int)v11 < v10; v13.m256i_i32[0] = v11 )
    {
      *(_QWORD *)(88 * v11 + *(_QWORD *)(a1 + 712) + 136) = 0LL;
      v11 = (unsigned int)(v13.m256i_i32[0] + 1);
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
