/*
 * XREFs of sub_1403CF51C @ 0x1403CF51C
 * Callers:
 *     sub_1403CF398 @ 0x1403CF398 (sub_1403CF398.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_14084B418 @ 0x14084B418 (sub_14084B418.c)
 *     sub_140969514 @ 0x140969514 (sub_140969514.c)
 *     sub_14096F2D4 @ 0x14096F2D4 (sub_14096F2D4.c)
 *     sub_140981A04 @ 0x140981A04 (sub_140981A04.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403CF630 @ 0x1403CF630 (sub_1403CF630.c)
 *     sub_1403CF758 @ 0x1403CF758 (sub_1403CF758.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405B3340 @ 0x1405B3340 (sub_1405B3340.c)
 */

__int64 __fastcall sub_1403CF51C(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // ebp
  __int64 v10; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // edx
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 16040), &LockHandle);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 16008) + a3) < *(_QWORD *)(a1 + 16008) )
  {
    v8 = 0;
  }
  else
  {
    if ( a2 )
    {
      if ( a4 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17256), a2);
      }
      else if ( *(_QWORD *)(a1 + 16056) )
      {
        v13 = sub_1405B3340(a1, a2);
        if ( a2 != v13 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17256), a2 - v13);
      }
      *(_QWORD *)(a1 + 17496) += a2;
    }
    if ( a3 )
      *(_QWORD *)(a1 + 16008) += a3;
    sub_1403CF630(a1);
    if ( a5 )
    {
      sub_1403CF758(a5, 1LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17256), 2uLL);
      v10 = *(unsigned int *)(a1 + 16728);
      *(_QWORD *)(a1 + 8 * v10 + 16736) = a5;
      *(_DWORD *)(a1 + 16728) = v10 + 1;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v8;
}
