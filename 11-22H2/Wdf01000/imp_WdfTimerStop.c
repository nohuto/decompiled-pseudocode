/*
 * XREFs of imp_WdfTimerStop @ 0x1C0005740
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C000578C (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfTimerStop(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFTIMER__ *Timer,
        unsigned __int8 Wait)
{
  FxTimer *v4; // rcx
  FxTimer *pFxTimer; // [rsp+30h] [rbp+8h] BYREF

  pFxTimer = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Timer, 0x1028u, (void **)&pFxTimer);
  v4 = pFxTimer;
  if ( !Wait )
    return FxTimer::Stop(v4, Wait);
  if ( (int)FxVerifierCheckIrqlLevel(pFxTimer->m_Globals, 0) >= 0 )
  {
    v4 = pFxTimer;
    return FxTimer::Stop(v4, Wait);
  }
  return 0;
}
