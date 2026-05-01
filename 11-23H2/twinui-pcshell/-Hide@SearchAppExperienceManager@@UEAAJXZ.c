/*
 * XREFs of ?Hide@SearchAppExperienceManager@@UEAAJXZ @ 0x18045DDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x1804607AC (-_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::Hide(SearchAppExperienceManager *this)
{
  int started; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 544) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 56LL))(*((_QWORD *)this + 54));
  started = SearchAppExperienceManager::_StartDeferredSuspensionTimer(this);
  v3 = started;
  if ( started >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 56LL))(*((_QWORD *)this + 54));
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CA,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)(unsigned int)started);
  return v3;
}
