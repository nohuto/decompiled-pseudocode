/*
 * XREFs of HalpUpdateCoolingPacket @ 0x140527880
 * Callers:
 *     HalpStartPccCommand @ 0x140935CEC (HalpStartPccCommand.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpUpdateCoolingPacket(__int64 a1)
{
  KIRQL v2; // al
  char v3; // si
  unsigned __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  v2 = ExAcquireSpinLockExclusive(&HalpMemoryCoolingPacketLock);
  v3 = HalpAcquiredInterface;
  v4 = v2;
  if ( a1 && !HalpAcquiredInterface )
  {
    HalpMemoryCoolingPacket = *(_OWORD *)a1;
    HalpAcquiredInterface = 1;
    xmmword_140C600F0 = *(_OWORD *)(a1 + 16);
    xmmword_140C60100 = *(_OWORD *)(a1 + 32);
    xmmword_140C60110 = *(_OWORD *)(a1 + 48);
    xmmword_140C60120 = *(_OWORD *)(a1 + 64);
    xmmword_140C60130 = *(_OWORD *)(a1 + 80);
    xmmword_140C60140 = *(_OWORD *)(a1 + 96);
    xmmword_140C60150 = *(_OWORD *)(a1 + 112);
    qword_140C60160 = *(_QWORD *)(a1 + 72);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&HalpMemoryCoolingPacketLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return v3;
}
