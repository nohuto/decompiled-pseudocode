/*
 * XREFs of HalpCmciInitProcessor @ 0x140A53718
 * Callers:
 *     HalpMcaResumeProcessorConfig @ 0x140A5029C (HalpMcaResumeProcessorConfig.c)
 *     HalpInitializeCmc @ 0x140A5AA64 (HalpInitializeCmc.c)
 *     HalpCmciInit @ 0x140A5AAF0 (HalpCmciInit.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     HalpCmciPollProcessor @ 0x1403AAA10 (HalpCmciPollProcessor.c)
 *     HalpGetMcaPcrContext @ 0x1403AAB1C (HalpGetMcaPcrContext.c)
 *     HalpCmciSetProcessorConfig @ 0x1403AAB4C (HalpCmciSetProcessorConfig.c)
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpIsCmciImplementedAMD @ 0x140A61640 (HalpIsCmciImplementedAMD.c)
 */

BOOLEAN __fastcall HalpCmciInitProcessor(__int64 a1, __int64 a2)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // bp
  __int64 McaPcrContext; // rax
  __int64 v7; // rdi
  BOOLEAN result; // al
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf

  v4 = 1;
  if ( HalpGetCpuVendor() == 1 && !(unsigned __int8)HalpIsCmciImplementedAMD() )
  {
    HalpMcaPollForCmc = 1;
    v4 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( HalpCmciRevertToPolledMode )
    goto LABEL_24;
  if ( *(_BYTE *)(a1 + 48) != 5 )
  {
    HalpMcaPollForCmc = 1;
LABEL_24:
    v4 = 0;
  }
  HalpCmciSetProcessorConfig(a1, v4, a2);
  McaPcrContext = HalpGetMcaPcrContext(a2);
  v7 = McaPcrContext;
  if ( McaPcrContext && v4 )
  {
    *(_DWORD *)(McaPcrContext + 120) = 0;
    *(_BYTE *)(McaPcrContext + 128) = 0;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v4 )
  {
    result = HalpMcaWheaReady;
    if ( HalpMcaWheaReady )
    {
      result = KeGetCurrentIrql();
      if ( result > 2u )
      {
        if ( v7 && *(_QWORD *)(v7 + 16) )
        {
          if ( *(_QWORD *)(v7 + 24) )
            return KeInsertQueueDpc((PRKDPC)(v7 + 48), 0LL, 0LL);
        }
      }
      else
      {
        return HalpCmciPollProcessor(a2);
      }
    }
  }
  return result;
}
