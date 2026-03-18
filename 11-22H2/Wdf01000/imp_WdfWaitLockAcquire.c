/*
 * XREFs of imp_WdfWaitLockAcquire @ 0x1C0001440
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

int __fastcall imp_WdfWaitLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWAITLOCK__ *Lock, _LARGE_INTEGER *Timeout)
{
  _FX_DRIVER_GLOBALS *v4; // rdx
  FxWaitLock *v5; // rcx
  int result; // eax
  FxWaitLock *pLock; // [rsp+30h] [rbp+8h] BYREF

  pLock = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Lock, 0x1023u, (void **)&pLock);
  v5 = pLock;
  if ( !Timeout || Timeout->QuadPart )
  {
    result = FxVerifierCheckIrqlLevel(pLock->m_Globals, 0);
    if ( result < 0 )
      return result;
    v5 = pLock;
  }
  return FxWaitLockInternal::AcquireLock(&v5->FxWaitLockInternal, v4, Timeout);
}
