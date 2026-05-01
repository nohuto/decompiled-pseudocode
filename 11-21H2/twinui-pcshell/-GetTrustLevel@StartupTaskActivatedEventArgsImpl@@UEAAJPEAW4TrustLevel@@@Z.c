/*
 * XREFs of ?GetTrustLevel@StartupTaskActivatedEventArgsImpl@@UEAAJPEAW4TrustLevel@@@Z @ 0x180182470
 * Callers:
 *     ?GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1801F2C30 (-GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@StartupTaskActivatedEventArgsImpl@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1801F5A90 (-GetTrustLevel@StartupTaskActivatedEventArgsImpl@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@StartupTaskActivatedEventArgsImpl@@W7EAAJPEAW4TrustLevel@@@Z @ 0x18020DF50 (-GetTrustLevel@StartupTaskActivatedEventArgsImpl@@W7EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@StartupTaskActivatedEventArgsImpl@@WKA@EAAJPEAW4TrustLevel@@@Z @ 0x18020DF70 (-GetTrustLevel@StartupTaskActivatedEventArgsImpl@@WKA@EAAJPEAW4TrustLevel@@@Z.c)
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
