/*
 * XREFs of ?VerifyCallingProcessIdentity@ApplicationFlyoutView@@UEAAXXZ @ 0x1805D3720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApplicationFlyoutView::VerifyCallingProcessIdentity(LPCWCH **this, unsigned __int16 **a2)
{
  Utils::ProtocolLauncher::VerifyCallingProcessIsTrustedHandlerForUriScheme(this[3], a2);
}
