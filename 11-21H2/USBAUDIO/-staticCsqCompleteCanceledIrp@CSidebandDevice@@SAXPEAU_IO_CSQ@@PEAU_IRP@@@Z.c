/*
 * XREFs of ?staticCsqCompleteCanceledIrp@CSidebandDevice@@SAXPEAU_IO_CSQ@@PEAU_IRP@@@Z @ 0x1C0010FD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall CSidebandDevice::staticCsqCompleteCanceledIrp(PIO_CSQ Csq, PIRP Irp)
{
  char v3; // r8
  char v4; // dl
  int v5; // [rsp+20h] [rbp-28h]

  Irp->IoStatus.Status = -1073741536;
  Irp->IoStatus.Information = 0LL;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v3 = 0;
  if ( v4 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v3,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      9u,
      0x9Du,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  IofCompleteRequest(Irp, 0);
}
