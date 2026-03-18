/*
 * XREFs of imp_WdfChildListUpdateAllChildDescriptionsAsPresent @ 0x1C00217C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x1C00264EC (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 */

void __fastcall imp_WdfChildListUpdateAllChildDescriptionsAsPresent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList)
{
  unsigned int *v3; // rdx
  FxChildList *v4; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxChildList *pList; // [rsp+40h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)DeviceList, 0x1029u, (void **)&pList);
  v4 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x2Au, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v4 = pList;
  }
  FxChildList::UpdateAllAsPresent(v4, v3);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x2Bu, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
}
