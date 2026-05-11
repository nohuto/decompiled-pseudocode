/*
 * XREFs of ?EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0009CAC
 * Callers:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000DA04 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00018BC (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CSidebandDevice::EmptyAndCancelIrpsInQueue(CSidebandDevice *this, struct _LIST_ENTRY *a2)
{
  PIRP i; // rax
  char v5; // dl
  char v6; // r8
  IRP *v7; // rbx
  int v9; // [rsp+20h] [rbp-28h]

  for ( i = IoCsqRemoveNextIrp((PIO_CSQ)(*((_QWORD *)this + 6) + 160LL), a2);
        ;
        i = IoCsqRemoveNextIrp((PIO_CSQ)(*((_QWORD *)this + 6) + 160LL), a2) )
  {
    v7 = i;
    if ( !i )
      break;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v5 = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v6 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v6 = 0;
    }
    if ( v5 || v6 )
      WPP_RECORDER_AND_TRACE_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v9,
        9u,
        0xC1u,
        (__int64)&WPP_b0b7c13e79ed34fd5a50f104c3106b8a_Traceguids);
    v7->IoStatus.Status = -1073741536;
    v7->IoStatus.Information = 0LL;
    IofCompleteRequest(v7, 0);
  }
  return 0LL;
}
