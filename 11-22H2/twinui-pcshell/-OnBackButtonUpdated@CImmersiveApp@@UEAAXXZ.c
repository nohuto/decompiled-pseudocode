/*
 * XREFs of ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x1803C3160
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x18002029C (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 */

void __fastcall CImmersiveApp::OnBackButtonUpdated(int (__fastcall ***this)(CImmersiveApp *, GUID *, __int64 *))
{
  int (__fastcall ***v1)(CImmersiveApp *, GUID *, __int64 *); // rbx

  v1 = this - 14;
  CImmersiveApp::_UpdateWindowTitleAndButtons(this - 14);
  CImmersiveApp::_QueuePresentationChangeNotification((__int64)v1, 1);
}
