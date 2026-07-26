/*
 * XREFs of ?ndisFInvokeSetFilterModuleOptions@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0106110
 * Callers:
 *     ?ndisQueryFilterInstanceHandlers@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0019478 (-ndisQueryFilterInstanceHandlers@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C0104A7C (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001E848 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokeSetFilterModuleOptions(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r14
  unsigned int v2; // edi
  int (__fastcall *SetFilterModuleOptionsHandler)(void *); // rax
  int v5; // eax

  FilterDriver = a1->FilterDriver;
  v2 = 0;
  SetFilterModuleOptionsHandler = FilterDriver->DefaultFilterCharacteristics.SetFilterModuleOptionsHandler;
  if ( SetFilterModuleOptionsHandler )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x5Du,
        (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
        a1);
      SetFilterModuleOptionsHandler = FilterDriver->DefaultFilterCharacteristics.SetFilterModuleOptionsHandler;
    }
    v5 = SetFilterModuleOptionsHandler(a1->FilterModuleContext);
    v2 = v5;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x5Eu,
        (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
        (char)a1,
        v5);
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Fu,
      (struct _GUID *)&WPP_63db700a80b438f6540a523b9430c1eb_Traceguids,
      a1);
  }
  return v2;
}
