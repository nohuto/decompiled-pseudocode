/*
 * XREFs of ?OnChannelSever@ViewPresentationMediator@@UEAAXXZ @ 0x1804F3A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewPresentationMediator::OnChannelSever(ViewPresentationMediator *this)
{
  ViewPresentationMediator::EnableShellWindowManagementBehavior((ViewPresentationMediator *)((char *)this - 128));
}
