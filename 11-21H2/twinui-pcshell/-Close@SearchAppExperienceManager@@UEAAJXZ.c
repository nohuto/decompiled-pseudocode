/*
 * XREFs of ?Close@SearchAppExperienceManager@@UEAAJXZ @ 0x180389C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::Close(SearchAppExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 48LL))(*((_QWORD *)this + 52));
  v3 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 59) + 48LL))(*((_QWORD *)this + 59));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
