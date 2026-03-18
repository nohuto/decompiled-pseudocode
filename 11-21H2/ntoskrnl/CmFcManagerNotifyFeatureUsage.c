/*
 * XREFs of CmFcManagerNotifyFeatureUsage @ 0x14053FE50
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1402ACAD0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlNotifyFeatureUsage @ 0x1405E4020 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     RtlReleaseSwapReference @ 0x1403C7918 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x1403C79D4 (RtlAcquireSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x1403C7B20 (CmpWorkItemQueueWork.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x1405EE634 (RtlpFcAddDelayedUsageReportToBuffer.c)
 */

__int64 __fastcall CmFcManagerNotifyFeatureUsage(__int64 a1, __int64 a2)
{
  char v3; // bp
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx

  v3 = 0;
  CurrentIrql = ObGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v3 = 1;
  }
  v6 = (unsigned int)RtlAcquireSwapReference(qword_140C49570);
  v7 = qword_140C49598[v6];
  if ( !v7 )
  {
    v8 = -1073741670;
    goto LABEL_5;
  }
  v8 = RtlpFcAddDelayedUsageReportToBuffer(v7, a2);
  if ( v8 < 0 )
  {
LABEL_5:
    if ( (_DWORD)v6 != -1 )
      RtlReleaseSwapReference(qword_140C49570, v6);
    goto LABEL_7;
  }
  RtlReleaseSwapReference(qword_140C49570, v6);
  if ( byte_140C49590 )
  {
    if ( CurrentIrql >= 2u )
      KeInsertQueueDpc(&stru_140C495A8, 0LL, 0LL);
    else
      CmpWorkItemQueueWork(&stru_140C495E8);
  }
  v8 = 0;
LABEL_7:
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
