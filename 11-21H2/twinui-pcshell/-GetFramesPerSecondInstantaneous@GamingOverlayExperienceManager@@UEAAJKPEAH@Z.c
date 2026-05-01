/*
 * XREFs of ?GetFramesPerSecondInstantaneous@GamingOverlayExperienceManager@@UEAAJKPEAH@Z @ 0x1803302A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180339DD0 (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetFramesPerSecondInstantaneous(
        GamingOverlayExperienceManager *this,
        int a2,
        int *a3)
{
  bool v5; // zf

  if ( a2 != *((_DWORD *)this + 169) || !*((_BYTE *)this + 680) )
  {
    v5 = *((_QWORD *)this + 67) == 0LL;
    *((_DWORD *)this + 169) = a2;
    if ( v5 )
      GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)((char *)this - 136));
  }
  *a3 = *((_DWORD *)this + 171);
  return 0LL;
}
