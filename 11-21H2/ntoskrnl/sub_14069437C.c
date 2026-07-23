/*
 * XREFs of sub_14069437C @ 0x14069437C
 * Callers:
 *     sub_1406942E8 @ 0x1406942E8 (sub_1406942E8.c)
 * Callees:
 *     sub_14021BB70 @ 0x14021BB70 (sub_14021BB70.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_14069437C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  int v7; // edx
  __int64 v8; // r8
  ULONG_PTR v9; // rdi
  int v10; // ecx
  __int64 v11; // r8
  _QWORD *v12; // rsi
  _QWORD *v13; // rbx
  _QWORD *v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int v18; // edx
  __int64 v19; // r8
  _BYTE v20[24]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]

  v4 = a3;
  v5 = a2;
  _BitScanReverse((unsigned int *)&a2, a3);
  *(_QWORD *)&v20[16] = &v20[8];
  *(_QWORD *)&v20[8] = &v20[8];
  v8 = *(&xmmword_140CF5E78 + (unsigned int)(v7 - 4) + 1);
  if ( v8 )
    v9 = v8 + 8 * ((v4 ^ (unsigned int)(1 << a2)) + 4 * (v4 ^ (unsigned int)(1 << a2)) + 1);
  else
    v9 = 0LL;
  _BitScanReverse((unsigned int *)&v10, v4);
  v11 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v10 - 4));
  if ( v11 )
  {
    v12 = (_QWORD *)(v11 + 8 * ((v4 ^ (unsigned int)(1 << v10)) + 2 * (v4 ^ (unsigned int)(1 << v10)) + 1));
    if ( v12 )
      goto LABEL_5;
  }
  *(_QWORD *)v20 = a4;
  *(_OWORD *)&v20[8] = 0LL;
  v21 = *(_OWORD *)v20;
  v22 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v20[8], *(__m128d *)&v20[8]);
  result = sub_14021BB70(v5, v4, (__int64)&v21);
  if ( (int)result >= 0 )
  {
    _BitScanReverse((unsigned int *)&v18, v4);
    v19 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v18 - 4));
    if ( v19 )
      v12 = (_QWORD *)(v19 + 8 * ((v4 ^ (unsigned int)(1 << v18)) + 2 * (v4 ^ (unsigned int)(1 << v18)) + 1));
    else
      v12 = 0LL;
    v12[2] = v12 + 1;
    v12[1] = v12 + 1;
LABEL_5:
    v13 = v12 + 1;
    if ( (_QWORD *)*v13 == v13 )
    {
      if ( a4 )
      {
        ExAcquirePushLockExclusiveEx(v9, 0LL);
        v14 = *(_QWORD **)(v9 + 32);
        if ( *v14 == v9 + 24 )
        {
          *v13 = v9 + 24;
          v12[2] = v14;
          *v14 = v13;
          *(_QWORD *)(v9 + 32) = v13;
LABEL_9:
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v9);
          sub_1402AFC00(v9);
          goto LABEL_12;
        }
        goto LABEL_16;
      }
    }
    else if ( !a4 )
    {
      ExAcquirePushLockExclusiveEx(v9, 0LL);
      *v12 = 0LL;
      v16 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) == v13 )
      {
        v17 = (_QWORD *)v12[2];
        if ( (_QWORD *)*v17 == v13 )
        {
          *v17 = v16;
          *(_QWORD *)(v16 + 8) = v17;
          v12[2] = v12 + 1;
          *v13 = v13;
          goto LABEL_9;
        }
      }
LABEL_16:
      __fastfail(3u);
    }
LABEL_12:
    result = 0LL;
    *v12 = a4;
    *(_DWORD *)(v5 + 32) |= 1u;
  }
  return result;
}
