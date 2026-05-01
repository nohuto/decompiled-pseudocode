/*
 * XREFs of ?Ensure@CImmersiveApp@@UEAAXXZ @ 0x1803C0980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::Ensure(CImmersiveApp *this)
{
  *((_BYTE *)this + 484) = 1;
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)((char *)this - 112));
}
