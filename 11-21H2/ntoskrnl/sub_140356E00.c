/*
 * XREFs of sub_140356E00 @ 0x140356E00
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14024CBF8 @ 0x14024CBF8 (sub_14024CBF8.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

BOOLEAN __fastcall sub_140356E00(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // rbx
  KIRQL v3; // al
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // r12
  void *v7; // r13
  __int64 v8; // rdi
  struct _KTHREAD *v9; // rbp
  unsigned int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // rdx
  int v13; // eax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KTHREAD *v16; // rdi
  __int64 v17; // rbx
  unsigned int v18; // ecx
  int v19; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v22; // eax
  __int64 v23; // r8
  bool v24; // zf

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( a1[4].Header.WaitListHead.Flink )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = *(void **)&a1[4].Header.Lock;
    --*((_WORD *)CurrentThread + 242);
    v8 = 0LL;
    v9 = KeGetCurrentThread();
    _disable();
    v10 = *((unsigned __int8 *)v9 + 792);
    v11 = -1;
    if ( *((_BYTE *)v9 + 792) || (v10 = sub_14029F6A8((__int64)&qword_140C11720, (__int64)v9)) != 0 )
    {
      _BitScanForward((unsigned int *)&v12, v10);
      *((_BYTE *)v9 + 792) = v10 & ~(1 << v12);
      _enable();
      v8 = (__int64)v9 + 96 * v12 + 1696;
      if ( (unsigned __int64)&qword_140C11720 - qword_140C50630 >= 0x8000000000LL )
        v13 = -1;
      else
        v13 = sub_140287F30(*((_QWORD *)v9 + 23));
      *(_DWORD *)(v8 + 8) = v13;
      *(_QWORD *)v8 = (unsigned __int64)&qword_140C11720 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C11720, 0LL) )
      sub_14029F120(&qword_140C11720, v8, (__int64)&qword_140C11720);
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
    Flink = p_WaitListHead->Flink;
    Blink = p_WaitListHead->Blink;
    if ( p_WaitListHead->Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    p_WaitListHead->Flink = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C11720, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C11720);
    v16 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C11720 - qword_140C50630 < 0x8000000000LL )
      v11 = sub_140287F30(*((_QWORD *)v16 + 23));
    _disable();
    v17 = (__int64)v16 + 1696;
    v18 = 0;
    while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C11720 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v17 + 18)
         || (*(_DWORD *)v17 & 1) != 0
         || *(_DWORD *)(v17 + 8) != v11 )
    {
      ++v18;
      v17 += 96LL;
      if ( v18 >= 6 )
        goto LABEL_34;
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
        sub_14022B568((ULONG_PTR)v16, (__int64)&qword_140C11720, v19);
      goto LABEL_37;
    }
LABEL_34:
    if ( (*((_DWORD *)v16 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&qword_140C11720, v11, 0LL);
    _enable();
LABEL_37:
    sub_1402F9540((__int64)CurrentThread);
    if ( v7 )
      sub_14036B090(v7);
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  v4 = v3;
  if ( a1[4].DueTime.QuadPart )
  {
    sub_14024CBF8((PVOID *)&a1[4].DueTime, &a1[4].TimerListEntry.Flink, (KSPIN_LOCK *)&a1[1], v3);
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&a1[1]);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v23 = *((_QWORD *)CurrentPrcb + 4375);
          v24 = (v22 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v22;
          if ( v24 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  return KeCancelTimer(a1);
}
