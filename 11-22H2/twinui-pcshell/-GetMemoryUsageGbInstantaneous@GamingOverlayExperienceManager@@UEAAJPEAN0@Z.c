/*
 * XREFs of ?GetMemoryUsageGbInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN0@Z @ 0x1803FE980
 * Callers:
 *     <none>
 * Callees:
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180407CCC (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetMemoryUsageGbInstantaneous(
        GamingOverlayExperienceManager *this,
        double *a2,
        double *a3)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 72) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)((char *)this - 136));
  *a2 = *((double *)this + 124);
  result = 0LL;
  *a3 = *((double *)this + 125);
  return result;
}
