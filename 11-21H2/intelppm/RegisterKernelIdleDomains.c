/*
 * XREFs of RegisterKernelIdleDomains @ 0x1C002C298
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C002BD10 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     memset @ 0x1C0003A00 (memset.c)
 *     GetDevExtFromIndex @ 0x1C00071B0 (GetDevExtFromIndex.c)
 *     RegisterIdleDomain @ 0x1C003E000 (RegisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1C003F6A4 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleDomains(_QWORD *a1)
{
  unsigned int *v2; // rdi
  unsigned int *Pool2; // rax
  unsigned int *v4; // rsi
  __int64 v5; // rax
  unsigned __int32 v6; // ecx
  unsigned __int32 v7; // r10d
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r11
  unsigned int *v13; // rcx
  unsigned int v14; // ebx
  _DWORD *v16; // rax
  __int32 v17; // edx
  unsigned int v18; // r8d
  _DWORD *v19; // rax
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  __m256i v22; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v23[272]; // [rsp+48h] [rbp-C0h] BYREF

  memset(&v22.m256i_u64[1], 0, 24);
  memset(v23, 0, 0x108uLL);
  v2 = (unsigned int *)a1[66];
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 32 * *v2 + 8, 1919119952LL);
  v4 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  a1[91] = Pool2;
  *Pool2 = *v2;
  v5 = 0LL;
  for ( v22.m256i_i32[0] = 0; (unsigned int)v5 < *v2; v22.m256i_i32[0] = v5 )
  {
    *(_QWORD *)&v4[8 * (unsigned int)v5 + 2] = &v2[4 * v5 + 1 + (unsigned int)v5];
    v5 = (unsigned int)(v22.m256i_i32[0] + 1);
  }
  v6 = 0;
  v7 = *(_DWORD *)(a1[89] + 56LL);
  v22.m256i_i32[0] = 0;
  if ( v7 )
  {
    v8 = 0LL;
    do
    {
      v9 = a1[89];
      v10 = 0;
      v11 = 88 * v8;
      if ( *v2 )
      {
        v12 = *(_QWORD *)(v11 + v9 + 64);
        do
        {
          v13 = &v4[8 * v10 + 2];
          if ( *(_QWORD *)v13 == v12 )
            *(_QWORD *)(v11 + v9 + 136) = v13;
          ++v10;
        }
        while ( v10 < *v2 );
        v6 = v22.m256i_i32[0];
      }
      v22.m256i_i32[0] = ++v6;
      v8 = v6;
    }
    while ( v6 < v7 );
  }
  if ( !a1[67] )
    return 0;
  KeInitializeAffinityEx2(v23, 32LL);
  v16 = (_DWORD *)a1[67];
  v22.m256i_i32[0] = 0;
  if ( *v16 )
  {
    while ( 1 )
    {
      if ( !(unsigned __int8)RegisterIdleDomain(a1) )
        goto LABEL_21;
      v17 = v22.m256i_i32[0];
      v18 = *(_DWORD *)(a1[67] + 24 * (v22.m256i_u32[0] + 1LL));
      if ( v18 < *v4 )
        break;
LABEL_22:
      v19 = (_DWORD *)a1[67];
      v22.m256i_i32[0] = v17 + 1;
      if ( (unsigned int)(v17 + 1) >= *v19 )
        goto LABEL_23;
    }
    KeOrAffinityEx2(*(_QWORD *)(32LL * v18 + a1[91] + 16) + 48LL, v23, v23);
LABEL_21:
    v17 = v22.m256i_i32[0];
    goto LABEL_22;
  }
LABEL_23:
  v14 = 0;
  KeInitializeEnumerationContext(&v22.m256i_u64[1], v23);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v22, &v22.m256i_u64[1]) )
  {
    DevExtFromIndex = GetDevExtFromIndex(v22.m256i_u32[0]);
    updated = UpdateKernelIdleDomains(DevExtFromIndex);
    if ( updated < 0 )
      v14 = updated;
  }
  return v14;
}
