/*
 * XREFs of ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x180477CD8
 * Callers:
 *     ?PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047B800 (-PositionAlongsideStart@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18047912C (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1807493A8 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ComputeAndOnTraySearchItemChanged(
        SearchAppDesktopExperienceView *this,
        HMONITOR a2)
{
  int v2; // edi
  int MonitorInformation; // eax
  HMONITOR v5; // r8
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rcx
  int v9; // ebx
  LANGID ThreadUILanguage; // ax
  struct tagRECT v11; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v12; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v13; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  bool v15; // [rsp+A0h] [rbp+30h] BYREF
  int v16; // [rsp+A8h] [rbp+38h] BYREF

  v2 = (int)a2;
  MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                         this,
                         a2,
                         &v11,
                         &v13,
                         &v12,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v16,
                         &v15);
  v6 = MonitorInformation;
  if ( MonitorInformation >= 0 )
  {
    v8 = 344LL;
    v9 = v11.right - v11.left;
    if ( v11.right - v11.left < 1196 )
      v8 = 320LL;
    ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v8, v2, v5);
    if ( v16 != 2 )
    {
      ThreadUILanguage = GetThreadUILanguage();
      IsBiDiLocale(ThreadUILanguage);
    }
    *(float *)&v12.left = (float)v11.left;
    *(float *)&v12.top = (float)v11.top;
    *(float *)&v12.right = (float)v9;
    result = 0LL;
    *(float *)&v12.bottom = (float)(v11.bottom - v11.top);
    *(struct tagRECT *)((char *)this + 180) = v12;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return v6;
  }
  return result;
}
