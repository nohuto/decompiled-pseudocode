/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WNI@EAAJPEAW4TrustLevel@@@Z @ 0x180210B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return SystemTray::TrayInfoTipAppInfoProvider::GetTrustLevel((SystemTray::TrayInfoTipAppInfoProvider *)(a1 - 216), a2);
}
