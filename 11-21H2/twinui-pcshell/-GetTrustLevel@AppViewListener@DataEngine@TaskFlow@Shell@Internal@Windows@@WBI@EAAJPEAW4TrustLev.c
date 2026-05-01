/*
 * XREFs of ?GetTrustLevel@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1801F8150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return SystemTray::TrayInfoTipAppInfoProvider::GetTrustLevel((SystemTray::TrayInfoTipAppInfoProvider *)(a1 - 24), a2);
}
