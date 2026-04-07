/*
 * XREFs of ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x1800B8ED0
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18002E930 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDisplayBroker::Shutdown(CDisplayBroker *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpressionAnimation>::InternalRelease((__int64 *)this);
}
