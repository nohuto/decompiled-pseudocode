/*
 * XREFs of ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0034358
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0029F90 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisPnPIrpQueryPnPDeviceState(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned int PnPFlags; // eax

  PnPFlags = a2->PnPFlags;
  if ( (PnPFlags & 0x1000) != 0 )
  {
    a3->IoStatus.Information |= 2uLL;
    PnPFlags = a2->PnPFlags;
  }
  if ( (PnPFlags & 0x100) != 0 && (a2->WSyncFlags & 4) == 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x2Fu,
        (struct _GUID *)&WPP_8b177330f3293d529522b7596f0e5147_Traceguids,
        a2);
    if ( (byte_1C00EE582 & 0x20) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer();
    a3->IoStatus.Information |= 4uLL;
  }
  if ( a2->PagingPathCount )
    a3->IoStatus.Information |= 0x20uLL;
  a3->IoStatus.Status = 0;
  *a5 = 1;
  return 0LL;
}
