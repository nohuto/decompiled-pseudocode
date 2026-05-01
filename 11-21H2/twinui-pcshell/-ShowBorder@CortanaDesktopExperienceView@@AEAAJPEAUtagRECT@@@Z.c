/*
 * XREFs of ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1803AC968
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803AA2FC (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803AB1F8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA?AW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4EDGEUI_TRAYSTUCKPLACE@@_N1@Z @ 0x1803A78B4 (-GetBorderFlagFromStuckEdge@CortanaDesktopExperienceView@@AEAA-AW4ShellExperienceViewBorderEdge@.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1803A7C30 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803A7E5C (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowBorder(CortanaDesktopExperienceView *this, struct tagRECT *a2)
{
  unsigned int v2; // eax
  int v5; // ecx
  LANGID ThreadUILanguage; // ax
  __m128 v7; // xmm2
  float v8; // xmm1_4
  HMONITOR v9; // rax
  int MonitorInformation; // eax
  unsigned int v12; // edi
  LONG left; // ecx
  int x; // edx
  int y; // r8d
  HWND Hwnd; // rax
  __int64 v17; // r8
  __int64 BorderFlagFromStuckEdge; // rdx
  char v19; // di
  __int64 *v20; // rcx
  __int64 v21; // rax
  bool v22; // [rsp+44h] [rbp-35h] BYREF
  struct tagPOINT Point; // [rsp+48h] [rbp-31h] BYREF
  int v24[4]; // [rsp+50h] [rbp-29h] BYREF
  struct tagRECT v25; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v26; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v27; // [rsp+80h] [rbp+7h] BYREF
  struct tagRECT v28; // [rsp+90h] [rbp+17h] BYREF
  RECT rc; // [rsp+A0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = *((_DWORD *)this + 36);
  if ( v2 > 9 || (v5 = 582, !_bittest(&v5, v2)) || *((_BYTE *)this + 249) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 128LL))(
      *((_QWORD *)this + 21),
      0LL,
      0LL);
    v19 = 0;
  }
  else
  {
    ThreadUILanguage = GetThreadUILanguage();
    IsBiDiLocale(ThreadUILanguage);
    v7 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 196));
    v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
    rc.left = (int)v7.m128_f32[0];
    rc.top = (int)v8;
    rc.right = (int)(float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] + v7.m128_f32[0]);
    rc.bottom = (int)(float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] + v8);
    v9 = MonitorFromRect(&rc, 0);
    if ( !v9 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA86,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
    MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                           this,
                           v9,
                           &v27,
                           &v26,
                           &v25,
                           (enum EDGEUI_TRAYSTUCKPLACE *)v24,
                           &v22);
    v12 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)MonitorInformation);
      return v12;
    }
    v28 = v26;
    if ( v24[0] )
    {
      if ( v24[0] == 1 )
      {
        if ( v25.bottom > v26.top )
          v28.top = v25.bottom;
      }
      else if ( v24[0] == 2 )
      {
        if ( v25.left < v26.right )
          v28.right = v25.left;
      }
      else if ( v24[0] == 3 && v25.top < v26.bottom )
      {
        v28.bottom = v25.top;
      }
    }
    else
    {
      left = v28.left;
      if ( v25.right > v26.left )
        left = v25.right;
      v28.left = left;
    }
    Point.x = v28.left;
    Point.y = v28.top;
    if ( a2 )
    {
      x = v28.left - a2->left;
      y = v28.top - a2->top;
      Point.y = y;
      Point.x = x;
    }
    else
    {
      Hwnd = (HWND)CortanaDesktopExperienceView::GetHwnd(this);
      ScreenToClient(Hwnd, &Point);
      y = Point.y;
      x = Point.x;
    }
    OffsetRect(&v28, x - v28.left, y - v28.top);
    BorderFlagFromStuckEdge = (unsigned int)CortanaDesktopExperienceView::GetBorderFlagFromStuckEdge(
                                              (__int64)this,
                                              v24[0],
                                              v17,
                                              *((_BYTE *)this + 240));
    v19 = 1;
    *(float *)&v25.left = (float)v28.left;
    v20 = (__int64 *)*((_QWORD *)this + 21);
    *(float *)&v25.top = (float)v28.top;
    *(float *)&v25.right = (float)(v28.right - v28.left);
    v21 = *v20;
    *(float *)&v25.bottom = (float)(v28.bottom - v28.top);
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64, struct tagRECT *))(v21 + 136))(
      v20,
      BorderFlagFromStuckEdge,
      1LL,
      0x1000000LL,
      &v25);
  }
  *((_BYTE *)this + 241) = v19;
  return 0LL;
}
