/*
 * XREFs of ?OnPearlRectChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x18047A8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18042E0B4 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ??$?0$$V@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180476094 (--$-0$$V@CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@AEAA@U-$int.c)
 *     ??1CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180476DE0 (--1CortanaExperienceManager_PearlRectMayHaveChanged@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047A294 (-NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18047B868 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::OnPearlRectChanged(SearchAppDesktopExperienceView *this, char a2)
{
  int v3; // eax
  int v4; // edx
  unsigned int v5; // ebx
  __int64 v7[40]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::CortanaExperienceManager_PearlRectMayHaveChanged(
    (__int64)v7,
    a2);
  SearchAppDesktopExperienceView::NotifyTaskbarSearchBoxChanged((SearchAppDesktopExperienceView *)((char *)this - 16));
  v3 = SearchAppDesktopExperienceView::PositionCortanaWindow(
         (SearchAppDesktopExperienceView *)((char *)this - 16),
         1,
         0);
  v5 = v3;
  if ( v3 >= 0 )
  {
    wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v7, v4);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged::~CortanaExperienceManager_PearlRectMayHaveChanged((CortanaProactiveTelemetry::CortanaExperienceManager_PearlRectMayHaveChanged *)v7);
  return v5;
}
