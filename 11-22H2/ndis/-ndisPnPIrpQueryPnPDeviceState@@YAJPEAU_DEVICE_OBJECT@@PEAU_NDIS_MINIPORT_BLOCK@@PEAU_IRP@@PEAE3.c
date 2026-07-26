/*
 * XREFs of ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0035C80
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C002A6F0 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006968 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisPnPIrpQueryPnPDeviceState(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned __int64 *p_Information; // rbx

  p_Information = &a3->IoStatus.Information;
  if ( (a2->PnPFlags & 0x1000) != 0 )
    *p_Information |= 2uLL;
  if ( (a2->PnPFlags & 0x100) != 0 && (a2->WSyncFlags & 4) == 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x2Fu,
        (struct _GUID *)&WPP_6b67e79cbf5736d8de5dcc27eb05ee5a_Traceguids,
        a2);
    if ( (byte_1C00F7642 & 0x20) != 0 )
      McTemplateK0jqxq_EtwWriteTransfer(
        (__int64)a1,
        (__int64)&QueryPnPDeviceStateFailed,
        (__int64)&a2->InterfaceGuid,
        (__int64)&a2->InterfaceGuid,
        a2->IfIndex,
        a2->NetLuid.Value,
        1);
    *p_Information |= 4uLL;
  }
  if ( a2->PagingPathCount )
    *p_Information |= 0x20uLL;
  a3->IoStatus.Status = 0;
  *a5 = 1;
  return 0LL;
}
