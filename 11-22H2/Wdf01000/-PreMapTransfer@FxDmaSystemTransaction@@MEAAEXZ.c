/*
 * XREFs of ?PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ @ 0x1C001ED90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qqq @ 0x1C001C308 (WPP_IFR_SF_qqq.c)
 */

char __fastcall FxDmaSystemTransaction::PreMapTransfer(FxDmaSystemTransaction *this)
{
  char v2; // di
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a3; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v6; // r10
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v8; // r11
  unsigned __int8 (__fastcall *Method)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64); // rax

  v2 = 1;
  if ( this->m_ConfigureChannelFunction.Method )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      _a3 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qqq(
        v6,
        5u,
        0xFu,
        0xBu,
        WPP_FxDmaTransactionSystem_cpp_Traceguids,
        _a1,
        this->m_ConfigureChannelContext,
        _a3);
    }
    FxObject::GetObjectHandleUnchecked(this->m_DmaEnabler->FxDmaPacketTransaction::FxDmaTransactionBase::m_DeviceBase);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    Method = this->m_ConfigureChannelFunction.Method;
    if ( Method )
      return ((__int64 (__fastcall *)(unsigned __int64, __int64))Method)(ObjectHandleUnchecked, v8);
  }
  return v2;
}
