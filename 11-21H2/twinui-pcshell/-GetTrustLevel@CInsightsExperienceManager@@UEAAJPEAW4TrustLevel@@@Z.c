/*
 * XREFs of ?GetTrustLevel@CInsightsExperienceManager@@UEAAJPEAW4TrustLevel@@@Z @ 0x180182BB0
 * Callers:
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1801F1C30 (-GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1801F1C50 (-GetTrustLevel@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x1801F1C70 (-GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x1801F25F0 (-GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1801F3070 (-GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CSnapAssistController@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x1801F35B0 (-GetTrustLevel@CSnapAssistController@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x1801F35D0 (-GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CSnapAssistController@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1801F43E0 (-GetTrustLevel@CSnapAssistController@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z @ 0x1801F8A70 (-GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CShellSnapComponent@@WIA@EAAJPEAW4TrustLevel@@@Z @ 0x18020ED70 (-GetTrustLevel@CShellSnapComponent@@WIA@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInsightsExperienceManager::GetTrustLevel(CInsightsExperienceManager *this, enum TrustLevel *a2)
{
  *a2 = FullTrust;
  return 0LL;
}
