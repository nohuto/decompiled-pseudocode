/*
 * XREFs of ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1803A9BB0
 * Callers:
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1803A6744 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803A7E5C (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1803A89E0 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3134 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnTraySearchItemChanged(__int64 a1, float *a2)
{
  float v3; // xmm6_4
  float v4; // xmm0_4
  HMONITOR v5; // rsi
  int MonitorInformation; // edi
  __int64 v7; // rdx
  HMONITOR v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  LONG right; // r12d
  LONG left; // r15d
  int v14; // r13d
  int v15; // esi
  __m128i v16; // xmm0
  LANGID ThreadUILanguage; // ax
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  LANGID v21; // ax
  int v22; // eax
  int v23; // ecx
  LONG top; // r14d
  LONG bottom; // edi
  __m128i v26; // xmm0
  float v27; // xmm1_4
  __m128i v28; // xmm0
  LANGID v29; // ax
  int v30; // eax
  LANGID v31; // ax
  __m128i v32; // xmm0
  float v33; // xmm1_4
  bool v34[4]; // [rsp+48h] [rbp-39h] BYREF
  int v35; // [rsp+4Ch] [rbp-35h] BYREF
  struct tagRECT v36; // [rsp+50h] [rbp-31h] BYREF
  struct tagRECT v37; // [rsp+60h] [rbp-21h] BYREF
  struct tagRECT v38; // [rsp+70h] [rbp-11h] BYREF
  RECT rc; // [rsp+80h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v3 = a2[1] + a2[3];
  v4 = *a2 + a2[2];
  rc.left = (int)*a2;
  rc.top = (int)a2[1];
  rc.right = (int)v4;
  rc.bottom = (int)v3;
  v5 = MonitorFromRect(&rc, 0);
  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         (CortanaDesktopExperienceView *)(a1 - 16),
                         v5,
                         &v37,
                         &v38,
                         &v36,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v35,
                         v34);
  if ( MonitorInformation < 0 )
  {
    v7 = 531LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  v34[0] = 0;
  MonitorInformation = CortanaDesktopExperienceView::IsTraySearchBoxVisible(
                         (CortanaDesktopExperienceView *)(a1 - 16),
                         v5,
                         v34);
  if ( MonitorInformation < 0 )
  {
    v7 = 534LL;
    goto LABEL_3;
  }
  v10 = 344LL;
  if ( v37.right - v37.left < 1196 )
    v10 = 320LL;
  v11 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v10, (int)v5, v9);
  right = v36.right;
  left = v36.left;
  v14 = v36.right - v36.left;
  v15 = v11;
  if ( ((v35 - 1) & 0xFFFFFFFD) != 0 )
  {
    v16 = _mm_cvtsi32_si128(v36.left);
  }
  else
  {
    ThreadUILanguage = GetThreadUILanguage();
    v18 = IsBiDiLocale(ThreadUILanguage);
    v19 = right;
    if ( v18 )
      v19 = left;
    v16 = _mm_cvtsi32_si128(v19);
  }
  v20 = v14;
  *(_DWORD *)(a1 + 180) = _mm_cvtepi32_ps(v16).m128_u32[0];
  if ( v34[0] )
    v20 = v15;
  *(float *)(a1 + 188) = (float)v20;
  v21 = GetThreadUILanguage();
  v22 = IsBiDiLocale(v21);
  v23 = v35;
  if ( v22 && ((v35 - 1) & 0xFFFFFFFD) == 0 )
    *(float *)(a1 + 180) = *(float *)(a1 + 180) - *(float *)(a1 + 188);
  top = v36.top;
  bottom = v36.bottom;
  if ( ((v23 - 1) & 0xFFFFFFFD) != 0 )
    v26 = _mm_cvtsi32_si128(v36.bottom);
  else
    v26 = _mm_cvtsi32_si128(v36.top);
  *(_DWORD *)(a1 + 184) = _mm_cvtepi32_ps(v26).m128_u32[0];
  v27 = (float)(bottom - top);
  *(float *)(a1 + 192) = v27;
  if ( (float)(v27 + *(float *)(a1 + 184)) > v3 )
    *(float *)(a1 + 184) = v3 - v27;
  if ( ((v23 - 1) & 0xFFFFFFFD) != 0 )
  {
    v28 = _mm_cvtsi32_si128(left);
  }
  else
  {
    v29 = GetThreadUILanguage();
    v30 = IsBiDiLocale(v29);
    v23 = v35;
    if ( v30 )
      right = left;
    v28 = _mm_cvtsi32_si128(right);
  }
  *(_DWORD *)(a1 + 204) = _mm_cvtepi32_ps(v28).m128_u32[0];
  if ( v34[0] )
  {
    v31 = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(v31) )
      v15 = -v15;
    v23 = v35;
    *(float *)(a1 + 204) = (float)v15 + *(float *)(a1 + 204);
  }
  *(float *)(a1 + 212) = (float)v14;
  if ( ((v23 - 1) & 0xFFFFFFFD) != 0 )
    v32 = _mm_cvtsi32_si128(bottom);
  else
    v32 = _mm_cvtsi32_si128(top);
  *(_DWORD *)(a1 + 208) = _mm_cvtepi32_ps(v32).m128_u32[0];
  v33 = (float)(bottom - top);
  *(float *)(a1 + 216) = v33;
  if ( (float)(v33 + *(float *)(a1 + 208)) > v3 )
    *(float *)(a1 + 208) = v3 - v33;
  return 0LL;
}
