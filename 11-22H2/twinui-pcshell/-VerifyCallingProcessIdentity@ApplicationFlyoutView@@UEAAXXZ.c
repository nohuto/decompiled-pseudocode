/*
 * XREFs of ?VerifyCallingProcessIdentity@ApplicationFlyoutView@@UEAAXXZ @ 0x1802E9FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApplicationFlyoutView::VerifyCallingProcessIdentity(Utils::ProtocolLauncher **this)
{
  Utils::ProtocolLauncher::VerifyCallingProcessIsTrustedHandlerForUriScheme(this[3]);
}
