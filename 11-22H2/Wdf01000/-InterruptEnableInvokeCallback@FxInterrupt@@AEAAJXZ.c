/*
 * XREFs of ?InterruptEnableInvokeCallback@FxInterrupt@@AEAAJXZ @ 0x1C007F6A4
 * Callers:
 *     ?_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C007FAE0 (-_InterruptEnableThunk@FxInterrupt@@CAEPEAX@Z.c)
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C00058A4 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0005984 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxInterrupt::InterruptEnableInvokeCallback(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  unsigned int v4; // edi
  unsigned __int64 v5; // rax

  if ( this->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(this, a2);
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    v4 = ((__int64 (__fastcall *)(unsigned __int64))this->m_EvtInterruptEnable)(ObjectHandleUnchecked);
    FxInterrupt::ReleaseLock(this);
  }
  else
  {
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v5 = FxObject::GetObjectHandleUnchecked(this);
    return ((unsigned int (__fastcall *)(unsigned __int64))this->m_EvtInterruptEnable)(v5);
  }
  return v4;
}
