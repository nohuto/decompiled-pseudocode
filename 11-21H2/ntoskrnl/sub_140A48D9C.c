/*
 * XREFs of sub_140A48D9C @ 0x140A48D9C
 * Callers:
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140A48D9C()
{
  __int64 Pool2; // rax
  unsigned int v1; // edi
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r9
  int v8; // eax
  bool v9; // zf

  Pool2 = ExAllocatePool2(64LL, 168LL, 1146119760LL);
  v1 = 0;
  v2 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 160) = 0;
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C54588);
    *(_DWORD *)(v2 + 164) = ++dword_140C54594;
    _InterlockedOr(&dword_140CF5E54, 1u);
    KeReleaseSpinLockFromDpcLevel(&qword_140C54588);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    KeInitializeTimerEx((PKTIMER)(v2 + 64), NotificationTimer);
    KeInitializeDpc((PRKDPC)v2, (PKDEFERRED_ROUTINE)sub_140398E60, (PVOID)v2);
    sub_1402E2D20(v2 + 64, -200000000LL, 0, 0, v2);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
