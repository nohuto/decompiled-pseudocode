/*
 * XREFs of ?GetCpuSpeedInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN@Z @ 0x1803FC890
 * Callers:
 *     <none>
 * Callees:
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180407CCC (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetCpuSpeedInstantaneous(
        GamingOverlayExperienceManager *this,
        double *a2)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 72) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)((char *)this - 136));
  result = 0LL;
  *a2 = *((double *)this + 115);
  return result;
}
