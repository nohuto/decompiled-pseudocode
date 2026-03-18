/*
 * XREFs of imp_WdfWorkItemGetParentObject @ 0x1C0037D40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 */

unsigned __int64 __fastcall imp_WdfWorkItemGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  __int64 v2; // rbx
  FxObject *m_Object; // rcx
  FxWorkItem *pFxWorkItem; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  pFxWorkItem = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)WorkItem,
    0x1025u,
    (void **)&pFxWorkItem);
  m_Object = pFxWorkItem->m_Object;
  if ( m_Object )
    return FxObject::GetObjectHandleUnchecked(m_Object);
  return v2;
}
