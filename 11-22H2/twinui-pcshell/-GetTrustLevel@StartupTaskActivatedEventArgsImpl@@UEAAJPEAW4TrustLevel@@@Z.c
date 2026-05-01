/*
 * XREFs of ?GetTrustLevel@StartupTaskActivatedEventArgsImpl@@UEAAJPEAW4TrustLevel@@@Z @ 0x1801C01D0
 * Callers:
 *     ?GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180296790 (-GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@StartupTaskActivatedEventArgsImpl@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1802992B0 (-GetTrustLevel@StartupTaskActivatedEventArgsImpl@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@StartupTaskActivatedEventArgsImpl@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1802AA1A0 (-GetTrustLevel@StartupTaskActivatedEventArgsImpl@@W7EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@StartupTaskActivatedEventArgsImpl@@WKA@EAAJPEAW4TrustLevel@@@Z @ 0x1802AA1C0 (-GetTrustLevel@StartupTaskActivatedEventArgsImpl@@WKA@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StartupTaskActivatedEventArgsImpl::GetTrustLevel(
        StartupTaskActivatedEventArgsImpl *this,
        enum TrustLevel *a2)
{
  *a2 = PartialTrust;
  return 0LL;
}
