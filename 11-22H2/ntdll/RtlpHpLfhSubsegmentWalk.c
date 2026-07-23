/*
 * XREFs of RtlpHpLfhSubsegmentWalk @ 0x18008B5F4
 * Callers:
 *     RtlpHpSegWalk @ 0x180063CE0 (RtlpHpSegWalk.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x18008B880 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentWalk(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        _DWORD *a6,
        __int64 a7)
{
  int v8; // ebx
  unsigned int v9; // r9d
  unsigned int v10; // edx
  __int64 v11; // r13
  __int64 v12; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 i; // r9
  _QWORD *v15; // rsi
  __int64 j; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rbp
  char v21; // cl
  unsigned int v22; // esi
  unsigned int v23; // edx
  __int64 v24; // r14
  __int16 *v25; // rcx
  unsigned int v26; // eax
  _DWORD *v27; // r9
  int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // r8d
  unsigned int v31; // eax
  char v32; // cl
  unsigned __int64 v33; // rdx
  int v34; // r8d
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // [rsp+20h] [rbp-58h]
  unsigned __int64 v38; // [rsp+28h] [rbp-50h]
  unsigned int v39; // [rsp+90h] [rbp+18h]

  v8 = qword_180184E48 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v9 = *(unsigned __int16 *)(a2 + 34) + *(unsigned __int8 *)(a2 + 39);
  if ( a3 == a2 )
  {
    v10 = 0;
  }
  else
  {
    v29 = *(_QWORD *)(a1
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v8 + 15) >> 4]
                    + 128);
    v30 = a3 - HIWORD(v8) - a2;
    v31 = *(_DWORD *)(v29 + 72);
    v32 = *(_BYTE *)(v29 + 76);
    if ( v31 )
    {
      v33 = (v30 * (unsigned __int64)v31) >> v32;
      v34 = v30 - v33 * (unsigned __int16)v8;
    }
    else
    {
      LODWORD(v33) = v30 >> v32;
      v34 = ((1 << v32) - 1) & v30;
    }
    if ( v34 )
      return 0LL;
    v10 = v33 + 1;
    if ( v10 >= v9 )
      return 0LL;
  }
  v38 = 2 * v9;
  v11 = 2 * v10;
  while ( 2 )
  {
    v12 = a2 + 48;
    v13 = v38 - 1;
    for ( i = (unsigned int)v11 & (unsigned __int64)-(__int64)((unsigned int)v11 < v38); ; i = 0LL )
    {
      if ( v13 - i == -1LL )
        goto LABEL_11;
      v15 = (_QWORD *)(v12 + 8 * (i >> 6));
      for ( j = ~*v15 | ((1LL << (i & 0x3F)) - 1); j == -1; j = ~*v15 )
      {
        if ( (unsigned __int64)++v15 > v12 + 8 * (v13 >> 6) )
          goto LABEL_11;
      }
      _BitScanForward64(&v17, ~j);
      v18 = v17 + (((__int64)v15 - v12) >> 3 << 6);
      if ( v18 > v13 )
      {
LABEL_11:
        LODWORD(v18) = -1;
        goto LABEL_12;
      }
      if ( v18 != -1LL )
        break;
LABEL_12:
      if ( !i )
        break;
      v35 = v11 + 1;
      if ( v11 + 1 > v38 )
        v35 = v38;
      v13 = v35 - 1;
    }
    if ( (_DWORD)v18 == -1 || (unsigned int)v18 < (unsigned int)v11 )
      return 0LL;
    v21 = *(_BYTE *)(a2 + 44);
    v22 = (unsigned int)v18 >> 1;
    v23 = HIWORD(v8) + v22 * (unsigned __int16)v8;
    v24 = v23 >> v21;
    v19 = a2 + v23;
    v39 = (((unsigned __int16)v8 + v23 - 1) >> v21) + 1;
    v37 = a2 + *(unsigned __int16 *)(a2 + 46);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (unsigned int)v24 < v39 )
    {
      v25 = (__int16 *)(v37 + 2 * v24);
      while ( *v25 >= 0 )
      {
        LODWORD(v24) = v24 + 1;
        ++v25;
        if ( (unsigned int)v24 >= v39 )
          goto LABEL_23;
      }
      LODWORD(v24) = -1;
    }
LABEL_23:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (_DWORD)v24 == -1 )
    {
      v11 = (unsigned int)(v11 + 2);
      continue;
    }
    break;
  }
  v26 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v19, v22, a7);
  v28 = 0;
  *a5 = v26;
  if ( *v27 )
  {
    v36 = v26 + v19 + 16;
    if ( (a4 & 0x10000000) == 0 )
      v36 = v26 + v19;
    if ( ((v36 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16 > v19 + (unsigned __int64)(unsigned __int16)v8 )
      v28 = 1;
  }
  if ( v26 > (unsigned __int64)(unsigned __int16)v8 || v28 )
  {
    *v27 = 0;
    *a5 = (unsigned __int16)v8;
    *a6 = 0;
  }
  else
  {
    *a6 = (unsigned __int16)v8 - v26;
  }
  return v19;
}
