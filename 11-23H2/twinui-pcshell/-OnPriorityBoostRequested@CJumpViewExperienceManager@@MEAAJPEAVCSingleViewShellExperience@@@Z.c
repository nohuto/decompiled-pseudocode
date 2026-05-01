/*
 * XREFs of ?OnPriorityBoostRequested@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180448D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnPriorityBoostRequested(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 10);
  if ( !v2 )
    return 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v2 + 48LL))(v2, a2);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
