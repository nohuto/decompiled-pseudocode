/*
 * XREFs of ?Unensure@CImmersiveApp@@UEAAXXZ @ 0x1803C53A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::Unensure(CImmersiveApp *this)
{
  *((_BYTE *)this + 484) = 0;
  CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)((char *)this - 112));
}
