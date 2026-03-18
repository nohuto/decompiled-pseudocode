/*
 * XREFs of imp_WdfInterruptAcquireLock @ 0x1C0005860
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00058A4 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

void __fastcall imp_WdfInterruptAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  FxInterrupt *v2; // rcx
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Interrupt, 0x1027u, (void **)&pFxInterrupt);
  v2 = pFxInterrupt;
  if ( !pFxInterrupt->m_PassiveHandling )
    goto LABEL_2;
  if ( (int)FxVerifierCheckIrqlLevel(pFxInterrupt->m_Globals, 0) >= 0 )
  {
    v2 = pFxInterrupt;
LABEL_2:
    FxInterrupt::AcquireLock(v2);
  }
}
