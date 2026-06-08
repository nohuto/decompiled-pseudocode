/*
 * XREFs of AcpiNotifyCallback @ 0x1C0002A00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005818 (WPP_RECORDER_SF_DD.c)
 */

void __fastcall AcpiNotifyCallback(__int64 a1, int a2)
{
  int v4; // edx
  struct _IO_WORKITEM *WorkItem; // rbx
  IO_WORKITEM_ROUTINE *v6; // rdx

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x51u,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_DD(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      2,
      82,
      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
      a2,
      *(_DWORD *)(a1 + 56));
  }
  switch ( a2 )
  {
    case 8:
      v6 = AcpiOSCNotifyWorker;
      goto LABEL_21;
    case 128:
      v6 = (IO_WORKITEM_ROUTINE *)&AcpiPStateNotifyWorker;
      goto LABEL_21;
    case 129:
      v6 = (IO_WORKITEM_ROUTINE *)&AcpiCStateNotifyWorker;
      goto LABEL_21;
    case 130:
      v6 = (IO_WORKITEM_ROUTINE *)&AcpiTStateNotifyWorker;
      goto LABEL_21;
    case 131:
      v6 = (IO_WORKITEM_ROUTINE *)AcpiCppcGuaranteedNotifyWorker;
      goto LABEL_21;
    case 133:
      v6 = (IO_WORKITEM_ROUTINE *)AcpiCppcHighestNotifyWorker;
LABEL_21:
      IoQueueWorkItem(WorkItem, v6, CriticalWorkQueue, WorkItem);
      return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      1,
      83,
      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
      a2);
  }
  IoFreeWorkItem(WorkItem);
}
