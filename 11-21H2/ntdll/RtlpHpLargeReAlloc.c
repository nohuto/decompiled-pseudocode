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

unsigned __int64 __fastcall RtlpHpLargeReAlloc(__int64 a1, unsigned int a2, char *a3, __int64 a4)
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
  __int64 v22; // rcx
  ULONG_PTR v23; // r15
  bool v24; // zf
  char *v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  _RTL_SRWLOCK *v28; // rdx
  __int64 v30; // [rsp+20h] [rbp-40h]
  unsigned __int64 v31; // [rsp+20h] [rbp-40h]
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-28h]
  __int128 v35; // [rsp+40h] [rbp-20h] BYREF
  __int128 v36; // [rsp+50h] [rbp-10h] BYREF
  int v38; // [rsp+B8h] [rbp+58h]

  v4 = *(_QWORD *)(a4 + 32);
  v8 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v9 = (v4 + 4095) >> 12;
  v34 = v9 << 12;
  if ( v9 << 12 < v4 )
    return 0LL;
  if ( v9 > v8
    || (v11 = *(_QWORD *)a1, BYTE1(*(_QWORD *)a1) >= 2u) && (v11 & 6) == 0
    || (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return RtlpHpReallocMove((char *)a1, a3, a4, a2);
    return 0LL;
  }
  v12 = a2 & 1;
  v38 = v12;
  if ( (a2 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v12 = v38;
  }
  v13 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    if ( v13 )
      v13 ^= a1 + 72;
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
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v15 )
      v13 ^= v15;
    else
      v13 = v15;
  }
  if ( v13 )
  {
    v16 = 1LL << (((unsigned __int8)*(_QWORD *)(v13 + 32) >> 2) & 0x3F);
    v17 = ((*(_QWORD *)(v13 + 32) >> 12) + ((*(_QWORD *)(v13 + 32) >> 1) & 1LL)) << 12;
    v30 = v16 - ((v16 - 1) & (v16 + v17 - 1)) + v17 - 1;
    *(_QWORD *)(v13 + 32) = (v9 << 12) | *(_QWORD *)(v13 + 32) & 0xFFFLL;
    *(_WORD *)(v13 + 24) = ((_WORD)v9 << 12) - *(_WORD *)(a4 + 24);
    if ( !v12 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    if ( *(_DWORD *)(a4 + 16) )
    {
      v18 = (__int64)&a3[*(_QWORD *)a4 + 16];
      if ( (a2 & 0x10000000) == 0 )
        v18 = (__int64)&a3[*(_QWORD *)a4];
      v19 = (unsigned __int8 *)((v18 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v20 = (__int64)&a3[*(_QWORD *)(a4 + 24) + 16];
      if ( (a2 & 0x10000000) == 0 )
        v20 = (__int64)&a3[*(_QWORD *)(a4 + 24)];
      memmove((void *)((v20 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v19, 16 * (v19[3] + 1LL));
    }
    if ( v9 < v8 )
    {
      v21 = *(_OWORD *)a1;
      BaseAddress = &a3[4096 * (v9 + ((*(_DWORD *)(v13 + 32) >> 1) & 1))];
      RegionSize = (ULONG_PTR)&a3[v30 - (_QWORD)BaseAddress];
      v35 = v21;
      RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x8000, &v35);
      if ( RtlGetCurrentServiceSessionId() )
        v22 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v22 = 2147353480LL;
      if ( *(_BYTE *)v22 )
        RtlpHeapLogRangeRelease(a1, (__int64)BaseAddress, RegionSize);
      v31 = v30 - RegionSize;
      v23 = RegionSize >> 12;
      v25 = (char *)((_BYTE *)BaseAddress - &a3[v34]);
      v24 = BaseAddress == &a3[v34];
      BaseAddress = &a3[v34];
      RegionSize = (ULONG_PTR)v25;
      if ( !v24 )
      {
        v36 = *(_OWORD *)a1;
        RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x4000, &v36);
      }
      _BitScanForward64(&v26, v31);
      v27 = *(_QWORD *)(v13 + 32);
      v34 = (unsigned int)v26;
      if ( (unsigned int)v26 != (unsigned __int64)((unsigned __int8)v27 >> 2) )
      {
        v28 = (_RTL_SRWLOCK *)(a1 + 64);
        if ( !v38 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
          v27 = *(_QWORD *)(v13 + 32);
          v28 = (_RTL_SRWLOCK *)(a1 + 64);
        }
        *(_QWORD *)(v13 + 32) = v27 ^ (unsigned __int8)(v27 ^ (4 * v34)) & 0xFC;
        if ( !v38 )
          RtlReleaseSRWLockExclusive(v28);
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v9 - v8);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)v23);
    }
    return (unsigned __int64)a3;
  }
  else
  {
    if ( !v12 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    return -1LL;
  }
}
