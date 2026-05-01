/*
 * XREFs of ?_OnPriorityUnboostRequested@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18042FEE0
 * Callers:
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18042FF40 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18042F0A4 (-_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnPriorityUnboostRequested(CortanaSharedExperienceManager *this)
{
  int v1; // eax
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 133);
  if ( v1 )
    *((_DWORD *)this + 133) = v1 - 1;
  v2 = CortanaSharedExperienceManager::_ApplyPriorityUnboostIfNeeded(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x461,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
