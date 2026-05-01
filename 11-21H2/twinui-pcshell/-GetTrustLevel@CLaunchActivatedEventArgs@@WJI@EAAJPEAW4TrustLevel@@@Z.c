/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WJI@EAAJPEAW4TrustLevel@@@Z @ 0x180210AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return SystemTray::TrayInfoTipAppInfoProvider::GetTrustLevel((SystemTray::TrayInfoTipAppInfoProvider *)(a1 - 152), a2);
}
