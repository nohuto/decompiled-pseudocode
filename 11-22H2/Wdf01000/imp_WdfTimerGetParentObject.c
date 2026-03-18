/*
 * XREFs of imp_WdfTimerGetParentObject @ 0x1C00061E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 */

void *__fastcall imp_WdfTimerGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFTIMER__ *Timer)
{
  __int64 v2; // rbx
  FxObject *m_Object; // rcx
  FxTimer *pFxTimer; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  pFxTimer = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Timer, 0x1028u, (void **)&pFxTimer);
  m_Object = pFxTimer->m_Object;
  if ( m_Object )
    return FxObject::GetObjectHandleUnchecked(m_Object);
  return (void *)v2;
}
