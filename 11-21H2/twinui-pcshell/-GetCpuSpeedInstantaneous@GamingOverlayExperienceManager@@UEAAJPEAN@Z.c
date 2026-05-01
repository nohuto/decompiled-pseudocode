/*
 * XREFs of ?GetCpuSpeedInstantaneous@GamingOverlayExperienceManager@@UEAAJPEAN@Z @ 0x18032F500
 * Callers:
 *     <none>
 * Callees:
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180339DD0 (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetCpuSpeedInstantaneous(
        GamingOverlayExperienceManager *this,
        double *a2)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 67) )
    GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)((char *)this - 136));
  result = 0LL;
  *a2 = *((double *)this + 110);
  return result;
}
