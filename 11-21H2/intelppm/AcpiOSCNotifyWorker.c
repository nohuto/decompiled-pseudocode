/*
 * XREFs of AcpiOSCNotifyWorker @ 0x1C003AFC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 */

void __fastcall AcpiOSCNotifyWorker(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  if ( Context )
    IoFreeWorkItem(Context);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x4Eu,
      (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
}
