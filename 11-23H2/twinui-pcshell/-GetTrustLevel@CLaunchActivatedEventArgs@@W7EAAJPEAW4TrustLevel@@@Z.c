/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@W7EAAJPEAW4TrustLevel@@@Z @ 0x18029D160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return SystemTray::TrayInfoTipAppInfoProvider::GetTrustLevel((SystemTray::TrayInfoTipAppInfoProvider *)(a1 - 8), a2);
}
