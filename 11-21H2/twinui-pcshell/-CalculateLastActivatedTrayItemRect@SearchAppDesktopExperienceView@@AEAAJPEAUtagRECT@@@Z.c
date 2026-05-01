/*
 * XREFs of ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180399054
 * Callers:
 *     ?OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18039CCC0 (-OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18039CFF8 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18039E180 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18039A82C (-GetMonitorInformation@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4.c)
 *     ?IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18039B334 (-IsTraySearchBoxVisible@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3134 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(
        SearchAppDesktopExperienceView *this,
        struct tagRECT *a2)
{
  float v2; // xmm0_4
  float v4; // xmm1_4
  LONG v6; // eax
  float v7; // xmm0_4
  float v8; // xmm8_4
  HMONITOR v9; // r14
  int MonitorInformation; // ebx
  __int64 v11; // rdx
  __int64 result; // rax
  HMONITOR v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  LONG right; // edi
  int v17; // r15d
  LONG left; // r14d
  int v19; // ebx
  __m128i v20; // xmm6
  LANGID ThreadUILanguage; // ax
  float v22; // xmm6_4
  float v23; // xmm7_4
  LANGID v24; // ax
  __m128i v25; // xmm1
  float v26; // xmm1_4
  float v27; // xmm2_4
  bool v28[4]; // [rsp+48h] [rbp-49h] BYREF
  int v29; // [rsp+4Ch] [rbp-45h] BYREF
  struct tagRECT v30; // [rsp+50h] [rbp-41h] BYREF
  struct tagRECT v31; // [rsp+60h] [rbp-31h] BYREF
  struct tagRECT v32; // [rsp+70h] [rbp-21h] BYREF
  RECT rc; // [rsp+80h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v2 = *((float *)this + 47);
  v4 = *((float *)this + 48);
  v6 = (int)v2;
  v7 = v2 + *((float *)this + 49);
  rc.left = v6;
  v8 = v4 + *((float *)this + 50);
  rc.top = (int)v4;
  rc.right = (int)v7;
  rc.bottom = (int)v8;
  v9 = MonitorFromRect(&rc, 0);
  MonitorInformation = SearchAppDesktopExperienceView::GetMonitorInformation(
                         this,
                         v9,
                         &v31,
                         &v32,
                         &v30,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v29,
                         v28);
  if ( MonitorInformation < 0 )
  {
    v11 = 1510LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  v28[0] = 0;
  MonitorInformation = SearchAppDesktopExperienceView::IsTraySearchBoxVisible(this, v9, v28);
  if ( MonitorInformation < 0 )
  {
    v11 = 1513LL;
    goto LABEL_3;
  }
  v14 = 344LL;
  if ( v31.right - v31.left < 1196 )
    v14 = 320LL;
  v15 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v14, (int)v9, v13);
  right = v30.right;
  v17 = v15;
  left = v30.left;
  v19 = v30.right - v30.left;
  if ( ((v29 - 1) & 0xFFFFFFFD) != 0 )
  {
    v20 = _mm_cvtsi32_si128(v30.left);
  }
  else
  {
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
      right = left;
    v20 = _mm_cvtsi32_si128(right);
  }
  LODWORD(v22) = _mm_cvtepi32_ps(v20).m128_u32[0];
  if ( v28[0] )
    v19 = v17;
  v23 = (float)v19;
  v24 = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(v24) && ((v29 - 1) & 0xFFFFFFFD) == 0 )
    v22 = v22 - v23;
  if ( ((v29 - 1) & 0xFFFFFFFD) != 0 )
    v25 = _mm_cvtsi32_si128(v30.bottom);
  else
    v25 = _mm_cvtsi32_si128(v30.top);
  v26 = _mm_cvtepi32_ps(v25).m128_f32[0];
  v27 = (float)(v30.bottom - v30.top);
  if ( (float)(v27 + v26) > v8 )
    v26 = v8 - v27;
  a2->left = (int)v22;
  result = 0LL;
  a2->top = (int)v26;
  a2->right = (int)(float)(v23 + v22);
  a2->bottom = (int)(float)(v27 + v26);
  return result;
}
