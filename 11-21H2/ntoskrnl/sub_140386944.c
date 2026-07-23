/*
 * XREFs of sub_140386944 @ 0x140386944
 * Callers:
 *     sub_1407FAA3C @ 0x1407FAA3C (sub_1407FAA3C.c)
 *     sub_14085D380 @ 0x14085D380 (sub_14085D380.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140386C14 @ 0x140386C14 (sub_140386C14.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407FAAB8 @ 0x1407FAAB8 (sub_1407FAAB8.c)
 */

__int64 __fastcall sub_140386944(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v5; // rdi
  KIRQL v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rdx
  int v11; // eax
  const EVENT_DESCRIPTOR *v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ebp
  char v15; // si
  struct _KTHREAD *v16; // rsi
  __int64 v17; // rbx
  unsigned int v18; // ecx
  int v19; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // eax
  bool v25; // zf

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 272;
  v6 = 0;
  v7 = 0LL;
  _disable();
  v8 = *((unsigned __int8 *)CurrentThread + 792);
  v9 = -1;
  if ( *((_BYTE *)CurrentThread + 792) || (v8 = sub_14029F6A8(a1 + 272, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v10, v8);
    *((_BYTE *)CurrentThread + 792) = v8 & ~(1 << v10);
    _enable();
    v7 = (__int64)CurrentThread + 96 * v10 + 1696;
    if ( v5 - qword_140C50630 < 0x8000000000LL )
      v11 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v11 = -1;
    *(_DWORD *)(v7 + 8) = v11;
    *(_QWORD *)v7 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    sub_14029F120((unsigned __int64 *)v5, v7, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  if ( !*(_BYTE *)(a1 + 373) )
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v12 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v13 = sub_140386C14(v12);
  *(_DWORD *)(a1 + 256) -= v13;
  v14 = v13;
  if ( !*(_BYTE *)(a1 + 373) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 280));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = *((_QWORD *)CurrentPrcb + 4375);
          v24 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v25 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
    ExfTryToWakePushLock(v5);
  v16 = KeGetCurrentThread();
  if ( v5 - qword_140C50630 < 0x8000000000LL )
    v9 = sub_140287F30(*((_QWORD *)v16 + 23));
  _disable();
  v17 = (__int64)v16 + 1696;
  v18 = 0;
  while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != (v5 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v17 + 18)
       || (*(_DWORD *)v17 & 1) != 0
       || *(_DWORD *)(v17 + 8) != v9 )
  {
    ++v18;
    v17 += 96LL;
    if ( v18 >= 6 )
      goto LABEL_30;
  }
  *(_BYTE *)(v17 + 18) = 0;
  if ( v17 )
  {
    if ( *(__int64 *)v17 < 0 )
    {
      *(_BYTE *)v17 |= 2u;
      _enable();
      sub_14034EE30(v17);
      _disable();
    }
    v19 = *(_DWORD *)(v17 + 88);
    *(_DWORD *)(v17 + 88) = 0;
    *(_BYTE *)(v17 + 17) = 0;
    *(_QWORD *)v17 = 0LL;
    *((_BYTE *)v16 + 792) |= 1 << *(_BYTE *)(v17 + 16);
    _enable();
    if ( v19 )
      sub_14022B568((ULONG_PTR)v16, v5, v19);
    goto LABEL_28;
  }
LABEL_30:
  if ( (*((_DWORD *)v16 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v16, v5, v9, 0LL);
  _enable();
LABEL_28:
  sub_1407FAAB8(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v12);
  return v14;
}
