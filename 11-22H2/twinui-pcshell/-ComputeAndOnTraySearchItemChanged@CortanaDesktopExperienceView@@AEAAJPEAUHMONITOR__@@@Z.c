/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x180481B58
 * Callers:
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804864B0 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180487874 (-SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18048329C (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x180484FD0 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1807493A8 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
        CortanaDesktopExperienceView *this,
        HMONITOR a2)
{
  int v2; // edi
  int MonitorInformation; // ebx
  HMONITOR v5; // r8
  __int64 v6; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  float v10; // xmm6_4
  LANGID ThreadUILanguage; // ax
  float right; // xmm0_4
  struct tagRECT v13; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v14; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v15; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  bool v17; // [rsp+B0h] [rbp+30h] BYREF
  int v18; // [rsp+B8h] [rbp+38h] BYREF

  v2 = (int)a2;
  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         this,
                         a2,
                         &v13,
                         &v15,
                         &v14,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v18,
                         &v17);
  if ( MonitorInformation < 0 )
  {
    v6 = 1701LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  v8 = 344LL;
  v9 = v13.right - v13.left;
  if ( v13.right - v13.left < 1196 )
    v8 = 320LL;
  v10 = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v8, v2, v5);
  if ( v18 == 2 || (ThreadUILanguage = GetThreadUILanguage(), (unsigned int)IsBiDiLocale(ThreadUILanguage)) && v18 )
    right = (float)v14.left - v10;
  else
    right = (float)v14.right;
  *(float *)&v15.left = right;
  *(float *)&v15.top = (float)v14.top;
  *(float *)&v14.left = (float)v13.left;
  *(float *)&v15.right = v10;
  *(float *)&v15.bottom = (float)(v14.bottom - v14.top);
  *(float *)&v14.top = (float)v13.top;
  *(float *)&v14.right = (float)v9;
  *(float *)&v14.bottom = (float)(v13.bottom - v13.top);
  MonitorInformation = CortanaDesktopExperienceView::OnTraySearchItemChanged((char *)this + 16, &v14, &v15);
  if ( MonitorInformation < 0 )
  {
    v6 = 1724LL;
    goto LABEL_3;
  }
  return 0LL;
}
