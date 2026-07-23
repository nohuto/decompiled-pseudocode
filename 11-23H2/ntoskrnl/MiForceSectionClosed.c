/*
 * XREFs of MiForceSectionClosed @ 0x14035F860
 * Callers:
 *     MmForceSectionClosed @ 0x14035F820 (MmForceSectionClosed.c)
 *     MmForceSectionClosedEx @ 0x1406268D0 (MmForceSectionClosedEx.c)
 *     MiCreateImageOrDataSection @ 0x140723550 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1402100C8 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAttemptSectionDelete @ 0x14035F8C0 (MiAttemptSectionDelete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiForceSectionClosed(_QWORD *a1, char a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  KIRQL v8; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  KIRQL v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0;
  v5 = MiLockSectionControlArea(a1, a2 & 1, &v14);
  if ( v5 )
  {
    if ( (a3 & 1) == 0 || (*(_BYTE *)(v5 + 62) & 0xC) != 0 )
    {
      LOBYTE(v6) = v14;
      return 2 - (unsigned int)((unsigned __int8)MiAttemptSectionDelete(v5, v6, a2 & 4) != 0);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    if ( (_DWORD)KiIrqlFlags
      && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
      && CurrentIrql <= 0xFu )
    {
      v8 = v14;
      if ( v14 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = v14;
        v12 = ~(unsigned __int16)(-1LL << (v14 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v8 = v14;
    }
    __writecr8(v8);
  }
  return 0LL;
}
