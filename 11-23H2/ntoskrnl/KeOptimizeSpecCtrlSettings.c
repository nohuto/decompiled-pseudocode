/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x14039AD94
 * Callers:
 *     KiDynamicProcessorInitialization @ 0x14056C328 (KiDynamicProcessorInitialization.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14039AE10 (KeIpiGenericCall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KeOptimizeSpecCtrlSettings()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v3; // rdx
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf
  ULONG Context; // [rsp+38h] [rbp+10h] BYREF
  ULONG Context_4; // [rsp+3Ch] [rbp+14h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v3) = 4096;
    else
      v3 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v3;
  }
  Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
  Context = Context_4;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiOptimizeSpecCtrlSettingsWorker, (ULONG_PTR)&Context);
  if ( (_DWORD)KiIrqlFlags )
  {
    v4 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v8 = (v7 & v6[5]) == 0;
      v6[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
