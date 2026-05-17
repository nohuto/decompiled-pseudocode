/*
 * XREFs of RtlpHpLargeReAlloc @ 0x18011FE14
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18002DBE0 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpFreeVA @ 0x180021224 (RtlpHpFreeVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpHeapLogRangeRelease @ 0x180114FF4 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpReallocMove @ 0x18011FA24 (RtlpHpReallocMove.c)
 */

unsigned __int64 __fastcall RtlpHpLargeReAlloc(__int64 *a1, unsigned __int64 a2, const void *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 v11; // rcx
  int v12; // r10d
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int8 *v19; // rdx
  __int64 v20; // rcx
  __int128 v21; // xmm0
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // r15
  bool v26; // zf
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  volatile signed __int64 *v30; // rdx
  __int64 v32; // [rsp+20h] [rbp-40h]
  unsigned __int64 v33; // [rsp+20h] [rbp-40h]
  unsigned __int64 v34; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-28h]
  __int128 v37; // [rsp+40h] [rbp-20h] BYREF
  __int128 v38; // [rsp+50h] [rbp-10h] BYREF
  int v39; // [rsp+A8h] [rbp+48h]
  int v40; // [rsp+B8h] [rbp+58h]

  v39 = a2;
  v4 = *(_QWORD *)(a4 + 32);
  v8 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v9 = (v4 + 4095) >> 12;
  v36 = v9 << 12;
  if ( v9 << 12 < v4 )
    return 0LL;
  if ( v9 > v8 || (v11 = *a1, BYTE1(*a1) >= 2u) && (v11 & 6) == 0 || (*((_DWORD *)a1 + 5) & 0x4000000) != 0 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return RtlpHpReallocMove(a1, a3, a4, a2);
    return 0LL;
  }
  v12 = a2 & 1;
  v40 = v12;
  if ( (a2 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 8), a2, (unsigned __int64)a3, a4);
    v12 = v40;
  }
  v13 = a1[9];
  if ( (a1[10] & 1) != 0 )
  {
    if ( v13 )
      v13 ^= (unsigned __int64)(a1 + 9);
    else
      v13 = 0LL;
  }
  while ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( (unsigned __int64)a3 >= v14 )
    {
      if ( (unsigned __int64)a3 <= v14 )
        break;
      v15 = *(_QWORD *)(v13 + 8);
    }
    else
    {
      v15 = *(_QWORD *)v13;
    }
    if ( (a1[10] & 1) != 0 && v15 )
      v13 ^= v15;
    else
      v13 = v15;
  }
  if ( v13 )
  {
    v16 = 1LL << (((unsigned __int8)*(_QWORD *)(v13 + 32) >> 2) & 0x3F);
    v17 = ((*(_QWORD *)(v13 + 32) >> 12) + ((*(_QWORD *)(v13 + 32) >> 1) & 1LL)) << 12;
    v32 = v16 - ((v16 - 1) & (v16 + v17 - 1)) + v17 - 1;
    *(_QWORD *)(v13 + 32) = (v9 << 12) | *(_QWORD *)(v13 + 32) & 0xFFFLL;
    *(_WORD *)(v13 + 24) = ((_WORD)v9 << 12) - *(_WORD *)(a4 + 24);
    if ( !v12 )
      RtlReleaseSRWLockExclusive(a1 + 8);
    if ( *(_DWORD *)(a4 + 16) )
    {
      v18 = (__int64)a3 + *(_QWORD *)a4 + 16;
      if ( (v39 & 0x10000000) == 0 )
        v18 = (__int64)a3 + *(_QWORD *)a4;
      v19 = (unsigned __int8 *)((v18 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v20 = (__int64)a3 + *(_QWORD *)(a4 + 24) + 16;
      if ( (v39 & 0x10000000) == 0 )
        v20 = (__int64)a3 + *(_QWORD *)(a4 + 24);
      memmove((void *)((v20 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v19, 16 * (v19[3] + 1LL));
    }
    if ( v9 < v8 )
    {
      v21 = *(_OWORD *)a1;
      v35 = (unsigned __int64)a3 + 4096 * (v9 + ((*(_DWORD *)(v13 + 32) >> 1) & 1));
      v34 = (unsigned __int64)a3 + v32 - v35;
      v37 = v21;
      RtlpHpFreeVA(&v35, &v34, 0x8000, &v37);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v24 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v24 = 2147353480LL;
      if ( *(_BYTE *)v24 )
        RtlpHeapLogRangeRelease();
      v33 = v32 - v34;
      v25 = v34 >> 12;
      v27 = v35 - ((_QWORD)a3 + v36);
      v26 = v35 == (_QWORD)a3 + v36;
      v35 = (unsigned __int64)a3 + v36;
      v34 = v27;
      if ( !v26 )
      {
        v38 = *(_OWORD *)a1;
        RtlpHpFreeVA(&v35, &v34, 0x4000, &v38);
      }
      _BitScanForward64(&v28, v33);
      v29 = *(_QWORD *)(v13 + 32);
      v36 = (unsigned int)v28;
      if ( (unsigned int)v28 != (unsigned __int64)((unsigned __int8)v29 >> 2) )
      {
        v30 = a1 + 8;
        if ( !v40 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 8), (unsigned __int64)v30, v22, v23);
          v29 = *(_QWORD *)(v13 + 32);
          v30 = a1 + 8;
        }
        *(_QWORD *)(v13 + 32) = v29 ^ (unsigned __int8)(v29 ^ (4 * v36)) & 0xFC;
        if ( !v40 )
          RtlReleaseSRWLockExclusive(v30);
      }
      _InterlockedExchangeAdd64(a1 + 12, v9 - v8);
      _InterlockedExchangeAdd64(a1 + 11, -(__int64)v25);
    }
    return (unsigned __int64)a3;
  }
  else
  {
    if ( !v12 )
      RtlReleaseSRWLockExclusive(a1 + 8);
    return -1LL;
  }
}
