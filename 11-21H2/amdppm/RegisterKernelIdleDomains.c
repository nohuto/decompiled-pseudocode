/*
 * XREFs of RegisterKernelIdleDomains @ 0x1C0032A2C
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0032C70 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0002270 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     memset @ 0x1C000BE00 (memset.c)
 *     RegisterIdleDomain @ 0x1C0032374 (RegisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1C003475C (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleDomains(_QWORD *a1)
{
  unsigned int *v2; // rdi
  unsigned int *Pool2; // rax
  unsigned int *v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int32 v7; // ecx
  unsigned __int32 v8; // r10d
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r11
  unsigned int *v14; // rcx
  _DWORD *v15; // rax
  unsigned int v16; // edx
  __int32 v17; // edx
  unsigned int v18; // r8d
  unsigned int *v19; // rax
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  __m256i v23; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v24[272]; // [rsp+48h] [rbp-C0h] BYREF

  memset(&v23.m256i_u64[1], 0, 24);
  memset(v24, 0, 0x108uLL);
  v2 = (unsigned int *)a1[66];
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 32 * *v2 + 8, 1919119952LL);
  v4 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  a1[91] = Pool2;
  *Pool2 = *v2;
  v6 = 0LL;
  for ( v23.m256i_i32[0] = 0; (unsigned int)v6 < *v2; v23.m256i_i32[0] = v6 )
  {
    *(_QWORD *)&v4[8 * (unsigned int)v6 + 2] = &v2[4 * v6 + 1 + (unsigned int)v6];
    v6 = (unsigned int)(v23.m256i_i32[0] + 1);
  }
  v7 = 0;
  v8 = *(_DWORD *)(a1[89] + 56LL);
  v23.m256i_i32[0] = 0;
  if ( v8 )
  {
    v9 = 0LL;
    do
    {
      v10 = a1[89];
      v11 = 0;
      v12 = 88 * v9;
      if ( *v2 )
      {
        v13 = *(_QWORD *)(v12 + v10 + 64);
        do
        {
          v14 = &v4[8 * v11 + 2];
          if ( *(_QWORD *)v14 == v13 )
            *(_QWORD *)(v12 + v10 + 136) = v14;
          ++v11;
        }
        while ( v11 < *v2 );
        v7 = v23.m256i_i32[0];
      }
      v23.m256i_i32[0] = ++v7;
      v9 = v7;
    }
    while ( v7 < v8 );
  }
  if ( !a1[67] )
    return 0;
  KeInitializeAffinityEx2(v24, 32LL);
  v15 = (_DWORD *)a1[67];
  v16 = 0;
  v23.m256i_i32[0] = 0;
  if ( *v15 )
  {
    while ( 1 )
    {
      if ( !RegisterIdleDomain((__int64)a1, v16) )
        goto LABEL_20;
      v17 = v23.m256i_i32[0];
      v18 = *(_DWORD *)(a1[67] + 24 * (v23.m256i_u32[0] + 1LL));
      if ( v18 < *v4 )
        break;
LABEL_21:
      v19 = (unsigned int *)a1[67];
      v16 = v17 + 1;
      v23.m256i_i32[0] = v16;
      if ( v16 >= *v19 )
        goto LABEL_22;
    }
    KeOrAffinityEx2(*(_QWORD *)(32LL * v18 + a1[91] + 16) + 48LL, v24, v24);
LABEL_20:
    v17 = v23.m256i_i32[0];
    goto LABEL_21;
  }
LABEL_22:
  v5 = 0;
  KeInitializeEnumerationContext(&v23.m256i_u64[1], v24);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v23, &v23.m256i_u64[1]) )
  {
    DevExtFromIndex = GetDevExtFromIndex(v23.m256i_u32[0]);
    updated = UpdateKernelIdleDomains(DevExtFromIndex);
    if ( updated < 0 )
      v5 = updated;
  }
  return v5;
}
