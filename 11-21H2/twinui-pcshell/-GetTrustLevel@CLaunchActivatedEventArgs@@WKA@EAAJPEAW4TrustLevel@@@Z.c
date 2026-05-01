/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WKA@EAAJPEAW4TrustLevel@@@Z @ 0x180210AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return SystemTray::TrayInfoTipAppInfoProvider::GetTrustLevel((SystemTray::TrayInfoTipAppInfoProvider *)(a1 - 160), a2);
}
