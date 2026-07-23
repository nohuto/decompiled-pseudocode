/*
 * XREFs of KeQueryAffinityProcess @ 0x14034C2B0
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x140254680 (KiCopyAffinityEx.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryAffinityProcess(__int64 a1, __int64 a2, _DWORD *a3, _OWORD *a4, _WORD *a5)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v12) = 4;
    if ( CurrentIrql != 2 )
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  KiCopyAffinityEx(a2, *(_WORD *)(a2 + 2), (unsigned __int16 *)(a1 + 80));
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 636);
  if ( a4 )
  {
    *a4 = *(_OWORD *)(a1 + 772);
    a4[1] = *(_OWORD *)(a1 + 788);
    a4[2] = *(_OWORD *)(a1 + 804);
    a4[3] = *(_OWORD *)(a1 + 820);
  }
  if ( a5 )
    *a5 = *(_WORD *)(a1 + 1040);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( (_DWORD)KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
