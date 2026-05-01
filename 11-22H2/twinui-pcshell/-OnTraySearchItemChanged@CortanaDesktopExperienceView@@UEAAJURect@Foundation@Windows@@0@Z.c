/*
 * XREFs of ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x180484FD0
 * Callers:
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x180481B58 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x18048329C (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180483DF0 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1807493A8 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
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
  LONG right; // r14d
  LONG left; // esi
  int v14; // r13d
  int v15; // edi
  __m128i v16; // xmm0
  LANGID ThreadUILanguage; // ax
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  LANGID v21; // ax
  int v22; // eax
  int v23; // ecx
  LONG top; // r15d
  LONG bottom; // r12d
  __m128i v26; // xmm1
  float v27; // xmm1_4
  float v28; // xmm7_4
  __m128i v29; // xmm0
  LANGID v30; // ax
  int v31; // eax
  LANGID v32; // ax
  __m128i v33; // xmm0
  float v34; // xmm0_4
  bool v35[4]; // [rsp+48h] [rbp-49h] BYREF
  int v36; // [rsp+4Ch] [rbp-45h] BYREF
  struct tagRECT v37; // [rsp+50h] [rbp-41h] BYREF
  struct tagRECT v38; // [rsp+60h] [rbp-31h] BYREF
  struct tagRECT v39; // [rsp+70h] [rbp-21h] BYREF
  RECT rc; // [rsp+80h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

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
                         &v38,
                         &v39,
                         &v37,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v36,
                         v35);
  if ( MonitorInformation < 0 )
  {
    v7 = 530LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  v35[0] = 0;
  MonitorInformation = CortanaDesktopExperienceView::IsTraySearchBoxVisible(
                         (CortanaDesktopExperienceView *)(a1 - 16),
                         v5,
                         v35);
  if ( MonitorInformation < 0 )
  {
    v7 = 533LL;
    goto LABEL_3;
  }
  v10 = 344LL;
  if ( v38.right - v38.left < 1196 )
    v10 = 320LL;
  v11 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v10, (int)v5, v9);
  right = v37.right;
  left = v37.left;
  v14 = v37.right - v37.left;
  v15 = v11;
  if ( ((v36 - 1) & 0xFFFFFFFD) != 0 )
  {
    v16 = _mm_cvtsi32_si128(v37.left);
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
  if ( v35[0] )
    v20 = v15;
  *(float *)(a1 + 188) = (float)v20;
  v21 = GetThreadUILanguage();
  v22 = IsBiDiLocale(v21);
  v23 = v36;
  if ( v22 && ((v36 - 1) & 0xFFFFFFFD) == 0 )
    *(float *)(a1 + 180) = *(float *)(a1 + 180) - *(float *)(a1 + 188);
  top = v37.top;
  bottom = v37.bottom;
  if ( ((v23 - 1) & 0xFFFFFFFD) != 0 )
    v26 = _mm_cvtsi32_si128(v37.bottom);
  else
    v26 = _mm_cvtsi32_si128(v37.top);
  v27 = _mm_cvtepi32_ps(v26).m128_f32[0];
  v28 = (float)(v37.bottom - v37.top);
  *(float *)(a1 + 184) = v27;
  *(float *)(a1 + 192) = v28;
  if ( (float)(v28 + v27) > v3 )
    *(float *)(a1 + 184) = v3 - v28;
  if ( ((v23 - 1) & 0xFFFFFFFD) != 0 )
  {
    v29 = _mm_cvtsi32_si128(left);
  }
  else
  {
    v30 = GetThreadUILanguage();
    v31 = IsBiDiLocale(v30);
    v23 = v36;
    if ( v31 )
      right = left;
    v29 = _mm_cvtsi32_si128(right);
  }
  *(_DWORD *)(a1 + 204) = _mm_cvtepi32_ps(v29).m128_u32[0];
  if ( v35[0] )
  {
    v32 = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(v32) )
      v15 = -v15;
    v23 = v36;
    *(float *)(a1 + 204) = (float)v15 + *(float *)(a1 + 204);
  }
  *(float *)(a1 + 212) = (float)v14;
  if ( ((v23 - 1) & 0xFFFFFFFD) != 0 )
    v33 = _mm_cvtsi32_si128(bottom);
  else
    v33 = _mm_cvtsi32_si128(top);
  v34 = _mm_cvtepi32_ps(v33).m128_f32[0];
  *(float *)(a1 + 208) = v34;
  *(float *)(a1 + 216) = v28;
  if ( (float)(v34 + v28) > v3 )
    *(float *)(a1 + 208) = v3 - v28;
  return 0LL;
}
