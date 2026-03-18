/*
 * XREFs of ?AcquireOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C022E834
 * Callers:
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C022EB94 (DxgkAcquireAdapterOpmI2CSync.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::AcquireOpmI2CSync(struct _KTHREAD **this)
{
  if ( this[49] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 4006LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_OpmI2CMutex.IsOwner()", 4006LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 46));
}
