/*
 * XREFs of ?GetMute@GamingOverlayExperienceManager@@UEAAJHPEAH@Z @ 0x1803FEA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingOverlayExperienceManager::GetMute(GamingOverlayExperienceManager *this, int a2, int *a3)
{
  GamingAudio::AppList *v3; // rcx

  v3 = (GamingAudio::AppList *)*((_QWORD *)this + 135);
  if ( v3 )
    return GamingAudio::AppList::GetMute(v3, a2, a3);
  else
    return 0LL;
}
