/*
 * XREFs of ?OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047B530
 * Callers:
 *     ?OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18047A9F0 (-OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@In.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18047796C (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047BF4C (-RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnViewShown(__int64 **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 *v5; // rcx
  __int64 v6; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-20h] BYREF
  float v8[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v2 = SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect((SearchAppDesktopExperienceView *)this, &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = this[10];
    v8[0] = (float)v7.left;
    v8[1] = (float)v7.top;
    v8[2] = (float)(v7.right - v7.left);
    v6 = *v5;
    v8[3] = (float)(v7.bottom - v7.top);
    (*(void (__fastcall **)(__int64 *, float *))(v6 + 96))(v5, v8);
    if ( !*((_BYTE *)this + 197) )
      SearchAppDesktopExperienceView::RegisterGlobalBackButton((SearchAppDesktopExperienceView *)this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BA,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
