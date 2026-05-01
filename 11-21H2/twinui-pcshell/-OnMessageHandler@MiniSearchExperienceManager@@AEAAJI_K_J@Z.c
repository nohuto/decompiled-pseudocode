/*
 * XREFs of ?OnMessageHandler@MiniSearchExperienceManager@@AEAAJI_K_J@Z @ 0x180176320
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@MiniSearchExperienceManager@@UEAAJXZ @ 0x1803A1920 (-Hide@MiniSearchExperienceManager@@UEAAJXZ.c)
 *     ?OnMiniSearchActivationTestTimeoutTimer@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A25D8 (-OnMiniSearchActivationTestTimeoutTimer@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?ResetActivationTimeoutPolicy@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A338C (-ResetActivationTimeoutPolicy@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A4808 (-UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall MiniSearchExperienceManager::OnMessageHandler(
        MiniSearchExperienceManager *this,
        int a2,
        MiniSearchExperienceManager *a3,
        int a4)
{
  int v4; // r9d
  int v5; // r9d

  if ( a2 == 1025 && a3 == this )
  {
    if ( a4 )
    {
      v4 = a4 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 == 1 )
            MiniSearchExperienceManager::Hide(this);
        }
        else
        {
          MiniSearchExperienceManager::OnMiniSearchActivationTestTimeoutTimer(this);
        }
      }
      else
      {
        MiniSearchExperienceManager::UnboostPriority(this);
      }
    }
    else
    {
      MiniSearchExperienceManager::ResetActivationTimeoutPolicy(this);
    }
  }
  return 0LL;
}
