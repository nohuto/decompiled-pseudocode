/*
 * XREFs of ?GetTrustLevel@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180293530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return SystemTray::TrayInfoTipAppInfoProvider::GetTrustLevel((SystemTray::TrayInfoTipAppInfoProvider *)(a1 - 48), a2);
}
