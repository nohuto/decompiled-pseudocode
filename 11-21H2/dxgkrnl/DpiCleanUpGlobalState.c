/*
 * XREFs of DpiCleanUpGlobalState @ 0x1C0387FFC
 * Callers:
 *     DxgkUnload @ 0x1C0301B10 (DxgkUnload.c)
 * Callees:
 *     DpiPdoPollingWorkItem @ 0x1C03978B0 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  KeCancelTimer(&stru_1C0130698);
  DpiPdoPollingWorkItem((PDEVICE_OBJECT)g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_1C0130718 )
    IoFreeWorkItem(qword_1C0130718);
  ExDeleteNPagedLookasideList(&stru_1C0130580);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
  if ( qword_1C0130890 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_1C0130890);
    qword_1C0130890 = 0LL;
  }
}
