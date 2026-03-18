/*
 * XREFs of imp_WdfInterruptReleaseLock @ 0x1C00026D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfInterruptReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  __int64 Offset; // rcx
  FxInterrupt *v3; // rbx
  struct _KINTERRUPT *m_Interrupt; // rcx
  FxWaitLockInternal *v5; // rcx
  const void *_a1; // rax
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp+10h] BYREF

  pFxInterrupt = 0LL;
  if ( !Interrupt )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1027uLL);
  LOWORD(Offset) = 0;
  v3 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Interrupt & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxInterrupt *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4135 )
  {
    pFxInterrupt = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, Offset);
    v3 = pFxInterrupt;
  }
  if ( v3->m_PassiveHandling )
  {
    if ( FxVerifierCheckIrqlLevel(v3->m_Globals, 0) < 0 )
      return;
    v3 = pFxInterrupt;
    if ( pFxInterrupt->m_PassiveHandling )
    {
      v5 = &pFxInterrupt->m_WaitLock->FxWaitLockInternal;
      v5->m_OwningThread = 0LL;
      KeSetEvent(&v5->m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
      return;
    }
  }
  m_Interrupt = v3->m_Interrupt;
  if ( m_Interrupt || (m_Interrupt = v3->m_InterruptCaptured) != 0LL )
  {
    KeReleaseInterruptSpinLock(m_Interrupt, v3->m_OldIrql);
  }
  else
  {
    _a1 = FxObject::GetObjectHandleUnchecked(v3);
    WPP_IFR_SF_q(v3->m_Globals, 2u, 0xCu, 0x1Du, WPP_InterruptObject_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(v3->m_Globals);
  }
}
