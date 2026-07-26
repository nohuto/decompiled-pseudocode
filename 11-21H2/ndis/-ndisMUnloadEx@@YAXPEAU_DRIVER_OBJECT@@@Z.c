/*
 * XREFs of ?ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0058C20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C012218C (-ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z.c)
 */

void __fastcall ndisMUnloadEx(struct _DRIVER_OBJECT *a1)
{
  struct _NDIS_M_DRIVER_BLOCK *DriverObjectExtension; // rbp
  struct _NDIS_M_DRIVER_BLOCK *v3; // rsi

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Bu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      a1);
  DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(a1, (PVOID)0x4E4D4944);
  v3 = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(a1, (PVOID)0x4E494944);
  if ( DriverObjectExtension )
    ndisMInvokeDriverUnload(DriverObjectExtension, a1);
  if ( v3 )
    ndisMInvokeDriverUnload(v3, a1);
  if ( DriverObjectExtension )
  {
    ndisWaitForKernelObject(&DriverObjectExtension->MiniportsRemovedEvent);
    KeClearEvent(&DriverObjectExtension->MiniportsRemovedEvent);
  }
  if ( v3 )
  {
    ndisWaitForKernelObject(&v3->MiniportsRemovedEvent);
    KeClearEvent(&v3->MiniportsRemovedEvent);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Cu,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
      (char)a1,
      (char)DriverObjectExtension,
      v3);
}
