/*
 * XREFs of MmCanFileBeTruncated @ 0x14034A750
 * Callers:
 *     CcPurgeCacheSection @ 0x1402F0A60 (CcPurgeCacheSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCanFileBeTruncatedInternal @ 0x14028BC30 (MiCanFileBeTruncatedInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall MmCanFileBeTruncated(PSECTION_OBJECT_POINTERS SectionPointer, PLARGE_INTEGER NewFileSize)
{
  LONGLONG QuadPart; // rax
  char *v3; // rax
  unsigned __int8 v4; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  LONGLONG v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  LOBYTE(v11) = 0;
  if ( NewFileSize )
  {
    QuadPart = NewFileSize->QuadPart;
    NewFileSize = (PLARGE_INTEGER)&v12;
    v12 = QuadPart;
  }
  v3 = MiCanFileBeTruncatedInternal(SectionPointer, (unsigned __int64 *)&NewFileSize->QuadPart, 0, 0, &v11);
  v4 = v11;
  if ( (_BYTE)v11 == 17 )
    return 0;
  if ( v3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3 + 18);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v4 = v11;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
  }
  return 1;
}
