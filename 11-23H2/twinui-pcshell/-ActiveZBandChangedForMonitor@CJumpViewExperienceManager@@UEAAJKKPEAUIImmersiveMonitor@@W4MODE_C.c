/*
 * XREFs of ?ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801B2590
 * Callers:
 *     <none>
 * Callees:
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18006C810 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::ActiveZBandChangedForMonitor(__int64 a1, __int64 a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 160) != 2
    || a3 != 1 && a3 != 5 && a3 != 8 && a3 != 9 && a3 != 10 && (unsigned int)(a3 - 11) >= 2 && a3 != 13 )
  {
    return 0LL;
  }
  v4 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)(a1 - 32), 0);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15F,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
