/*
 * XREFs of ?Release@TrayInfoTipActivator@SystemTray@@UEAAKXZ @ 0x180156E50
 * Callers:
 *     ?Release@TrayInfoTipActivator@SystemTray@@W7EAAKXZ @ 0x180207140 (-Release@TrayInfoTipActivator@SystemTray@@W7EAAKXZ.c)
 *     ?Release@TrayInfoTipActivator@SystemTray@@WBA@EAAKXZ @ 0x180207160 (-Release@TrayInfoTipActivator@SystemTray@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall SystemTray::TrayInfoTipActivator::Release(SystemTray::TrayInfoTipActivator *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::Release(this);
}
