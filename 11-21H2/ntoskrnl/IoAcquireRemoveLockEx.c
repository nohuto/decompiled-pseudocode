/*
 * XREFs of IoAcquireRemoveLockEx @ 0x1403553A0
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     PoFxPowerControl @ 0x1403980F0 (PoFxPowerControl.c)
 *     sub_1403A46E4 @ 0x1403A46E4 (sub_1403A46E4.c)
 *     sub_1403A4868 @ 0x1403A4868 (sub_1403A4868.c)
 *     sub_1403BA6E0 @ 0x1403BA6E0 (sub_1403BA6E0.c)
 *     sub_1405CC3A0 @ 0x1405CC3A0 (sub_1405CC3A0.c)
 *     sub_1405CD100 @ 0x1405CD100 (sub_1405CD100.c)
 *     sub_1405CD400 @ 0x1405CD400 (sub_1405CD400.c)
 *     sub_1405CE6B0 @ 0x1405CE6B0 (sub_1405CE6B0.c)
 *     sub_1405CE7C0 @ 0x1405CE7C0 (sub_1405CE7C0.c)
 *     sub_1405DDCE4 @ 0x1405DDCE4 (sub_1405DDCE4.c)
 *     sub_1405DDE24 @ 0x1405DDE24 (sub_1405DDE24.c)
 *     sub_1405DE108 @ 0x1405DE108 (sub_1405DE108.c)
 *     sub_14060C770 @ 0x14060C770 (sub_14060C770.c)
 *     sub_140A9E460 @ 0x140A9E460 (sub_140A9E460.c)
 *     sub_140A9E540 @ 0x140A9E540 (sub_140A9E540.c)
 *     sub_140A9E710 @ 0x140A9E710 (sub_140A9E710.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoAcquireRemoveLockEx(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
        ULONG RemlockSize)
{
  NTSTATUS v9; // esi
  __int64 Pool2; // rax
  struct _LIST_ENTRY *v12; // r14
  unsigned __int64 v13; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf

  _InterlockedIncrement(&RemoveLock->Common.IoCount);
  v9 = 0;
  if ( RemoveLock->Common.Removed )
  {
    if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
    return -1073741738;
  }
  else if ( RemlockSize == 120 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, LODWORD(RemoveLock[1].Common.RemoveEvent.Header.WaitListHead.Flink));
    v12 = (struct _LIST_ENTRY *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 8) = Tag;
      *(_QWORD *)(Pool2 + 24) = File;
      *(_DWORD *)(Pool2 + 32) = Line;
      *(_QWORD *)(Pool2 + 16) = MEMORY[0xFFFFF78000000320];
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      v12->Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
      RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v12;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = *((_QWORD *)CurrentPrcb + 4375);
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
            *(_DWORD *)(v16 + 20) &= v17;
            if ( v18 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  return v9;
}
