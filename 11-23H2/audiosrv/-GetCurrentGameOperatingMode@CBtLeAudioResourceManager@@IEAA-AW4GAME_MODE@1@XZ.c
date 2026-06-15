/*
 * XREFs of ?GetCurrentGameOperatingMode@CBtLeAudioResourceManager@@IEAA?AW4GAME_MODE@1@XZ @ 0x1800FB7C8
 * Callers:
 *     ?ReevaluateGameModeOperation@CBtLeAudioResourceManager@@IEAAXXZ @ 0x1800FBF38 (-ReevaluateGameModeOperation@CBtLeAudioResourceManager@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtLeAudioResourceManager::GetCurrentGameOperatingMode(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  if ( *(_DWORD *)(a1 + 484) )
  {
    if ( *(int *)(a1 + 480) <= 0 )
    {
      if ( v1 )
        LeaveCriticalSection(v1);
      return 1LL;
    }
    else
    {
      if ( v1 )
        LeaveCriticalSection(v1);
      return 2LL;
    }
  }
  else
  {
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
}
