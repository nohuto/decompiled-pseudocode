/*
 * XREFs of ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803AA7C8
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803A9F40 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803A923C (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803AB1F8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803ABA00 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1803AC654 (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803AD10C (-UpdateSuggestionsShowing@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1805F2DD0 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnViewHidden(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_WORD *)this + 119) = 0;
  *((_BYTE *)this + 237) = 0;
  *((_BYTE *)this + 242) = 0;
  v2 = CortanaDesktopExperienceView::SetZBand(this, 13LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x48B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
  if ( *((_BYTE *)this + 288) )
  {
    v3 = CortanaDesktopExperienceView::PostTargetedMessage(this, 2LL, 0LL);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x48F,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
  }
  CortanaDesktopExperienceView::UpdateSuggestionsShowing(this, 0);
  if ( *((_BYTE *)this + 236)
    && (*((_BYTE *)this + 236) = 0,
        v4 = CortanaDesktopExperienceView::NotifyView(this, L"NotifyAppTransitionCanceled", 0LL),
        v5 = v4,
        v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    if ( *((_BYTE *)this + 288) )
    {
      v7 = CExperienceManagerAnimationHelper::End((CortanaDesktopExperienceView *)((char *)this + 344));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x49F,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v7);
    }
    CortanaDesktopExperienceView::PositionCortanaWindow(this, 1, 0);
    return 0LL;
  }
}
