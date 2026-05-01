/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WPI@EAAJPEAW4TrustLevel@@@Z @ 0x1802AD670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return SystemTray::TrayInfoTipAppInfoProvider::GetTrustLevel((SystemTray::TrayInfoTipAppInfoProvider *)(a1 - 248), a2);
}
