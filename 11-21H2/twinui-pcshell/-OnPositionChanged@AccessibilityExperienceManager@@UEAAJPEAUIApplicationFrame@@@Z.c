/*
 * XREFs of ?OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1804881D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFrameRect@AccessibilityViewInfo@@QEBAJPEAUtagRECT@@@Z @ 0x180487B40 (-GetFrameRect@AccessibilityViewInfo@@QEBAJPEAUtagRECT@@@Z.c)
 *     ?SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z @ 0x180488380 (-SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z.c)
 */

__int64 __fastcall AccessibilityExperienceManager::OnPositionChanged(
        AccessibilityExperienceManager *this,
        struct IApplicationFrame *a2)
{
  int v3; // edi
  __int64 v4; // rcx
  int FrameRect; // esi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  v4 = *((_QWORD *)this + 32);
  if ( !v4 || !(*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v4 + 24LL))(v4, a2) )
    return 2147942487LL;
  FrameRect = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 96LL))(*((_QWORD *)this + 32));
  if ( FrameRect < 0 )
  {
    v6 = 264LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)FrameRect);
    return (unsigned int)FrameRect;
  }
  FrameRect = AccessibilityViewInfo::GetFrameRect(
                (AccessibilityExperienceManager *)((char *)this + 248),
                (struct tagRECT *)this + 19);
  if ( FrameRect < 0 )
  {
    v6 = 266LL;
    goto LABEL_5;
  }
  LOBYTE(v3) = *((_DWORD *)this + 85) == 0x8000000;
  AccessibilityExperienceManager::SetNoActivate((AccessibilityExperienceManager *)((char *)this + 24), v3);
  return 0LL;
}
