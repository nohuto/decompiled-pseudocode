/*
 * XREFs of RtlpHpLargeReAlloc @ 0x18008E00C
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180041ECC (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeVA @ 0x1800478C4 (RtlpHpFreeVA.c)
 *     RtlpHpReallocMove @ 0x18008E0AC (RtlpHpReallocMove.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpHeapLogRangeRelease @ 0x1801153DC (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlpHpLargeReAlloc(_RTL_SRWLOCK *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 Value; // rcx
  int v13; // r10d
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int8 *v20; // rdx
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int64 v23; // rcx
  unsigned __int64 v24; // r12
  ULONG_PTR v25; // r15
  bool v26; // zf
  char *v27; // rcx
  unsigned __int64 v28; // rax
  char v29; // r12
  int v30; // eax
  _RTL_SRWLOCK *v31; // rcx
  __int64 v32; // [rsp+20h] [rbp-50h]
  ULONG_PTR v33; // [rsp+28h] [rbp-48h] BYREF
  PVOID v34[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v35; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-20h]
  __int128 v37; // [rsp+60h] [rbp-10h] BYREF
  int v39; // [rsp+C8h] [rbp+58h]

  v4 = *(_QWORD *)(a4 + 32);
  v8 = (unsigned __int64)(*(_QWORD *)(a4 + 8) + 4095LL) >> 12;
  v36 = v8;
  v9 = (v4 + 4095) >> 12;
  *(_QWORD *)&v35 = v9 << 12;
  if ( v9 << 12 < v4 )
    return 0LL;
  if ( v9 > v8
    || (Value = a1->Value, BYTE1(a1->Value) >= 2u) && (Value & 6) == 0
    || (HIDWORD(a1[2].Ptr) & 0x4000000) != 0 )
  {
    if ( (a2 & 0x2000000) == 0 )
      return RtlpHpReallocMove(a1, a3, a4, a2);
    return 0LL;
  }
  v13 = a2 & 1;
  v39 = v13;
  if ( (a2 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(a1 + 8);
    v13 = v39;
  }
  v14 = a1[9].Value;
  if ( (*(_BYTE *)&a1[10].0 & 1) != 0 && v14 )
    v14 ^= (unsigned __int64)&a1[9];
  while ( v14 )
  {
    v15 = *(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a3 >= v15 )
    {
      if ( a3 <= v15 )
        break;
      v16 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      v16 = *(_QWORD *)v14;
    }
    if ( (*(_BYTE *)&a1[10].0 & 1) != 0 && v16 )
      v14 ^= v16;
    else
      v14 = v16;
  }
  if ( v14 )
  {
    v17 = 1LL << (((unsigned __int8)*(_QWORD *)(v14 + 32) >> 2) & 0x3F);
    v18 = ((*(_QWORD *)(v14 + 32) >> 12) + ((*(_QWORD *)(v14 + 32) >> 1) & 1LL)) << 12;
    v32 = v17 - ((v17 - 1) & (v17 + v18 - 1)) + v18 - 1;
    *(_QWORD *)(v14 + 32) = (v9 << 12) | *(_QWORD *)(v14 + 32) & 0xFFFLL;
    *(_WORD *)(v14 + 24) = ((_WORD)v9 << 12) - *(_WORD *)(a4 + 24);
    if ( !v13 )
      RtlReleaseSRWLockExclusive(a1 + 8);
    if ( *(_DWORD *)(a4 + 16) )
    {
      v19 = a3 + *(_QWORD *)a4 + 16;
      if ( (a2 & 0x10000000) == 0 )
        v19 = a3 + *(_QWORD *)a4;
      v20 = (unsigned __int8 *)((v19 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v21 = a3 + *(_QWORD *)(a4 + 24) + 16;
      if ( (a2 & 0x10000000) == 0 )
        v21 = a3 + *(_QWORD *)(a4 + 24);
      memmove((void *)((v21 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v20, 16 * (v20[3] + 1LL));
    }
    if ( v9 < v8 )
    {
      v22 = *(_OWORD *)&a1->0;
      v34[0] = (PVOID)(a3 + ((v9 + ((*(_DWORD *)(v14 + 32) >> 1) & 1)) << 12));
      v33 = a3 + v32 - (unsigned __int64)v34[0];
      v37 = v22;
      RtlpHpFreeVA(v34, &v33, 0x8000, &v37);
      if ( RtlGetCurrentServiceSessionId() )
        v23 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v23 = 2147353480LL;
      if ( *(_BYTE *)v23 )
        RtlpHeapLogRangeRelease(a1, v34[0], v33);
      v24 = v32 - v33;
      v25 = v33 >> 12;
      v27 = (char *)v34[0] - a3 - v35;
      v26 = v34[0] == (PVOID)(a3 + v35);
      v34[0] = (PVOID)(a3 + v35);
      v33 = (ULONG_PTR)v27;
      if ( !v26 )
      {
        v35 = *(_OWORD *)&a1->0;
        RtlpHpFreeVA(v34, &v33, 0x4000, &v35);
      }
      _BitScanForward64(&v28, v24);
      v29 = v28;
      if ( (unsigned int)v28 != (unsigned __int64)((*(_DWORD *)(v14 + 32) >> 2) & 0x3F) )
      {
        v30 = v39;
        v31 = a1 + 8;
        if ( !v39 )
        {
          RtlAcquireSRWLockExclusive(v31);
          v30 = 0;
          v31 = a1 + 8;
        }
        *(_QWORD *)(v14 + 32) &= 0xFFFFFFFFFFFFFF03uLL;
        *(_QWORD *)(v14 + 32) |= 4LL * (v29 & 0x3F);
        if ( !v30 )
          RtlReleaseSRWLockExclusive(v31);
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[12], v9 - v36);
      _InterlockedExchangeAdd64((volatile signed __int64 *)&a1[11], -(__int64)v25);
    }
    return a3;
  }
  else
  {
    if ( !v13 )
      RtlReleaseSRWLockExclusive(a1 + 8);
    return -1LL;
  }
}
