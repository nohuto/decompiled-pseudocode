/*
 * XREFs of imp_WdfIoTargetPurge @ 0x1C0073090
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_WdfIoTargetPurge(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget, int Action)
{
  FxIoTarget *v4; // rcx
  FxIoTarget *pTarget; // [rsp+40h] [rbp+8h] BYREF

  pTarget = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  v4 = pTarget;
  if ( Action && Action <= 2 )
  {
    if ( Action == 1 )
    {
      if ( (int)FxVerifierCheckIrqlLevel(pTarget->m_Globals, 0) < 0 )
        return;
      v4 = pTarget;
    }
    v4->Purge(v4, (_WDF_IO_TARGET_PURGE_IO_ACTION)Action);
  }
  else
  {
    WPP_IFR_SF_d(pTarget->m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetAPI_cpp_Traceguids, Action);
  }
}
