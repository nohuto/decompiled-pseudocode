/*
 * XREFs of ?Hide@SearchAppExperienceManager@@UEAAJXZ @ 0x180389E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18038C86C (-_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
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
    (void *)0x1C2,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)(unsigned int)started);
  return v3;
}
