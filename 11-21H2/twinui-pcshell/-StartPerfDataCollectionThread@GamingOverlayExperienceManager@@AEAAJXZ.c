/*
 * XREFs of ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180339DD0
 * Callers:
 *     ?GetCpuSpeedInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN@Z @ 0x18032F500 (-GetCpuSpeedInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN@Z.c)
 *     ?GetCpuUsagePercentChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@N@Collections@Foundation@Windows@@@Z @ 0x18032F560 (-GetCpuUsagePercentChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVectorView@N@Collections.c)
 *     ?GetDedicatedGpuMemoryGbChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@N@Collections@Foundation@Windows@@PEAN@Z @ 0x18032FB20 (-GetDedicatedGpuMemoryGbChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVectorView@N@Collec.c)
 *     ?GetDedicatedGpuMemoryGbInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN0@Z @ 0x18032FCB0 (-GetDedicatedGpuMemoryGbInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN0@Z.c)
 *     ?GetFramesPerSecondChart@GamingOverlayExperienceManager@@UEAAJKPEAPEAU?$IVectorView@H@Collections@Foundation@Windows@@@Z @ 0x180330130 (-GetFramesPerSecondChart@GamingOverlayExperienceManager@@UEAAJKPEAPEAU-$IVectorView@H@Collection.c)
 *     ?GetFramesPerSecondInstantaneous@GamingOverlayExperienceManager@@UEAAJKPEAH@Z @ 0x1803302A0 (-GetFramesPerSecondInstantaneous@GamingOverlayExperienceManager@@UEAAJKPEAH@Z.c)
 *     ?GetMemoryUsageGbChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@N@Collections@Foundation@Windows@@PEAN@Z @ 0x180331260 (-GetMemoryUsageGbChart@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVectorView@N@Collections@F.c)
 *     ?GetMemoryUsageGbInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN0@Z @ 0x1803313D0 (-GetMemoryUsageGbInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingOverlayExperienceManager::StartPerfDataCollectionThread(HANDLE *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( SHCreateThreadWithHandle(
         GamingOverlayExperienceManager::StaticPerfDataCollectionThread,
         this,
         0x1000u,
         0LL,
         this + 84) )
  {
    return 0LL;
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x57F,
             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
             v1);
  }
}
