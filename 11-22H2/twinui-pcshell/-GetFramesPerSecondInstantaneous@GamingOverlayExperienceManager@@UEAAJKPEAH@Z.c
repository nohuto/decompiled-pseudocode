/*
 * XREFs of ?GetFramesPerSecondInstantaneous@GamingOverlayExperienceManager@@UEAAJKPEAH@Z @ 0x1803FD780
 * Callers:
 *     <none>
 * Callees:
 *     ?StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180407CCC (-StartPerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetFramesPerSecondInstantaneous(
        GamingOverlayExperienceManager *this,
        int a2,
        int *a3)
{
  bool v5; // zf

  if ( a2 != *((_DWORD *)this + 179) || !*((_BYTE *)this + 720) )
  {
    v5 = *((_QWORD *)this + 72) == 0LL;
    *((_DWORD *)this + 179) = a2;
    if ( v5 )
      GamingOverlayExperienceManager::StartPerfDataCollectionThread((GamingOverlayExperienceManager *)((char *)this - 136));
  }
  *a3 = *((_DWORD *)this + 181);
  return 0LL;
}
