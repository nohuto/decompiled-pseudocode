/*
 * XREFs of ?OnPositionChanged@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18037EB10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateHostedViewPosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1803806C8 (-UpdateHostedViewPosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::OnPositionChanged(
        CVirtualTouchpadExperienceManager *this,
        struct IApplicationFrame *a2)
{
  __int64 v3; // rcx
  int updated; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 41);
  if ( !v3 )
    return 0LL;
  if ( !(*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v3 + 24LL))(v3, a2) )
    return 0LL;
  updated = CVirtualTouchpadExperienceManager::UpdateHostedViewPosition((CVirtualTouchpadExperienceManager *)((char *)this - 16));
  v5 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2AD,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)updated);
  return v5;
}
