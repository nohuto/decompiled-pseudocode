/*
 * XREFs of CmFcManagerNotifyFeatureUsage @ 0x140617684
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14022FDE0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlNotifyFeatureUsage @ 0x1405AA610 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     RtlReleaseSwapReference @ 0x14035D3E4 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x14035D48C (RtlAcquireSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x14037473C (CmpWorkItemQueueWork.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x1405B50C0 (RtlpFcAddDelayedUsageReportToBuffer.c)
 */

__int64 __fastcall CmFcManagerNotifyFeatureUsage(__int64 a1, _QWORD *a2)
{
  char v3; // bp
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rcx
  int v8; // ebx

  v3 = 0;
  CurrentIrql = ObGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 1;
    --CurrentThread->KernelApcDisable;
  }
  v6 = (unsigned int)RtlAcquireSwapReference(qword_140C14110);
  v7 = (volatile signed __int32 *)qword_140C14138[v6];
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
      RtlReleaseSwapReference(qword_140C14110, v6);
    goto LABEL_7;
  }
  RtlReleaseSwapReference(qword_140C14110, v6);
  if ( byte_140C14130 )
  {
    if ( CurrentIrql >= 2u )
      KiInsertQueueDpc((ULONG_PTR)&stru_140C14148, 0LL, 0LL, 0LL, 0);
    else
      CmpWorkItemQueueWork(&stru_140C14188);
  }
  v8 = 0;
LABEL_7:
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
