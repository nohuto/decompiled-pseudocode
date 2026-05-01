/*
 * XREFs of ?OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18039C070
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039C144 (-OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039C7FC (-OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039C8AC (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039CCC0 (-OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039CD90 (-OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnViewChanged(
        SearchAppDesktopExperienceView *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  switch ( v8 )
  {
    case 3:
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 104LL))(*((_QWORD *)this + 10));
      break;
    case 4:
      return SearchAppDesktopExperienceView::OnViewCloaking(this);
    case 7:
      return SearchAppDesktopExperienceView::OnViewHidden(this);
    case 8:
      return SearchAppDesktopExperienceView::OnViewPropertiesChanging(this);
    case 9:
      return SearchAppDesktopExperienceView::OnViewShown(this);
    case 10:
      return SearchAppDesktopExperienceView::OnViewUncloaking(this);
  }
  return 0LL;
}
