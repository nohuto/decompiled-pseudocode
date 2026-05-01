/*
 * XREFs of ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18047CA20
 * Callers:
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18047AD5C (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18047B868 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18047796C (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?GetBorderFlagFromStuckEdge@SearchAppDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N@Z @ 0x180478A84 (-GetBorderFlagFromStuckEdge@SearchAppDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdg.c)
 *     ?GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x180478F5C (-GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18047912C (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::ShowBorder(SearchAppDesktopExperienceView *this, struct tagRECT *a2)
{
  unsigned int v2; // eax
  int v5; // ecx
  int MonitorInformation; // edi
  __int64 v7; // rdx
  HMONITOR v9; // rax
  LONG left; // ecx
  int x; // edx
  int y; // r8d
  HWND Hwnd; // rax
  __int64 BorderFlagFromStuckEdge; // rdx
  char v15; // di
  __int64 *v16; // rcx
  __int64 v17; // rax
  bool v18; // [rsp+44h] [rbp-35h] BYREF
  struct tagPOINT Point; // [rsp+48h] [rbp-31h] BYREF
  int v20[4]; // [rsp+50h] [rbp-29h] BYREF
  struct tagRECT v21; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v22; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v23; // [rsp+80h] [rbp+7h] BYREF
  struct tagRECT v24; // [rsp+90h] [rbp+17h] BYREF
  RECT rc; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = *((_DWORD *)this + 30);
  if ( v2 > 9 || (v5 = 582, !_bittest(&v5, v2)) || *((_BYTE *)this + 203) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 18) + 128LL))(
      *((_QWORD *)this + 18),
      0LL,
      0LL);
    v15 = 0;
  }
  else
  {
    MonitorInformation = SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(this, &rc);
    if ( MonitorInformation < 0 )
    {
      v7 = 2000LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)MonitorInformation);
      return (unsigned int)MonitorInformation;
    }
    v9 = MonitorFromRect(&rc, 0);
    if ( !v9 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D3,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
    MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                           this,
                           v9,
                           &v23,
                           &v22,
                           &v21,
                           (enum EDGEUI_TRAYSTUCKPLACE *)v20,
                           &v18);
    if ( MonitorInformation < 0 )
    {
      v7 = 2010LL;
      goto LABEL_6;
    }
    v24 = v22;
    if ( v20[0] )
    {
      if ( v20[0] == 1 )
      {
        if ( v21.bottom > v22.top )
          v24.top = v21.bottom;
      }
      else if ( v20[0] == 2 )
      {
        if ( v21.left < v22.right )
          v24.right = v21.left;
      }
      else if ( v20[0] == 3 && v21.top < v22.bottom )
      {
        v24.bottom = v21.top;
      }
    }
    else
    {
      left = v24.left;
      if ( v21.right > v22.left )
        left = v21.right;
      v24.left = left;
    }
    Point.x = v24.left;
    Point.y = v24.top;
    if ( a2 )
    {
      x = v24.left - a2->left;
      y = v24.top - a2->top;
      Point.y = y;
      Point.x = x;
    }
    else
    {
      Hwnd = (HWND)SearchAppDesktopExperienceView::GetHwnd(this);
      ScreenToClient(Hwnd, &Point);
      y = Point.y;
      x = Point.x;
    }
    OffsetRect(&v24, x - v24.left, y - v24.top);
    BorderFlagFromStuckEdge = (unsigned int)SearchAppDesktopExperienceView::GetBorderFlagFromStuckEdge(
                                              (__int64)this,
                                              v20[0],
                                              *((_BYTE *)this + 198));
    v15 = 1;
    *(float *)&v21.left = (float)v24.left;
    v16 = (__int64 *)*((_QWORD *)this + 18);
    *(float *)&v21.top = (float)v24.top;
    *(float *)&v21.right = (float)(v24.right - v24.left);
    v17 = *v16;
    *(float *)&v21.bottom = (float)(v24.bottom - v24.top);
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64, struct tagRECT *))(v17 + 136))(
      v16,
      BorderFlagFromStuckEdge,
      1LL,
      0x1000000LL,
      &v21);
  }
  *((_BYTE *)this + 199) = v15;
  return 0LL;
}
