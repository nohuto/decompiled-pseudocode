/*
 * XREFs of ?IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000E380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C000193C (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::IrpMJInternalIoControlHandler(
        CSidebandDevice *this,
        struct _DEVICE_OBJECT *a2,
        struct _IRP *a3)
{
  char v5; // bl
  char v6; // dl
  char v7; // r8
  unsigned int inserted; // edi
  char v9; // dl
  int v11; // [rsp+20h] [rbp-48h]

  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v6 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v7 = 0;
  }
  if ( v6 || v7 )
    WPP_RECORDER_AND_TRACE_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      9u,
      0x9Bu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  switch ( a3->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x220007u:
    case 0x22000Bu:
    case 0x22000Fu:
    case 0x220017u:
    case 0x22001Bu:
    case 0x22001Fu:
    case 0x220023u:
    case 0x220027u:
    case 0x22002Bu:
    case 0x22002Fu:
    case 0x220033u:
    case 0x220037u:
    case 0x22003Bu:
    case 0x22003Fu:
    case 0x220043u:
    case 0x220047u:
    case 0x22004Bu:
    case 0x22004Fu:
    case 0x220053u:
    case 0x22005Fu:
    case 0x220063u:
    case 0x220067u:
      inserted = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 6) + 160LL), a3, 0LL, (char *)this + 72);
      break;
    default:
      inserted = -1073741822;
      a3->IoStatus.Information = 0LL;
      a3->IoStatus.Status = -1073741822;
      IofCompleteRequest(a3, 0);
      break;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v9 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( v9 || v5 )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v5,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      9u,
      0x9Cu,
      (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
  return inserted;
}
