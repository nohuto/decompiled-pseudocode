/*
 * XREFs of ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180399E10
 * Callers:
 *     ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x18039B450 (-MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18039E000 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z @ 0x18039E530 (-ShowWithStart@SearchAppDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180398A78 (-BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING_.c)
 *     ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x18039AB18 (-GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3134 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::GetActivateArgs(
        SearchAppDesktopExperienceView *this,
        HSTRING string1,
        HSTRING *newString)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  HMONITOR v8; // rax
  HMONITOR v9; // rsi
  unsigned int v10; // ebx
  unsigned int SearchBoxHeight; // r14d
  int v12; // eax
  HRESULT v13; // eax
  __int64 v14; // rdx
  const wchar_t *StringRawBuffer; // rax
  HMONITOR v16; // r8
  const wchar_t *v17; // rbx
  HMONITOR v18; // r8
  __m128i v19; // xmm0
  HSTRING newStringa; // [rsp+20h] [rbp-30h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-28h] BYREF
  UINT32 length; // [rsp+30h] [rbp-20h] BYREF
  RECT rc; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  *newString = 0LL;
  v6 = *((float *)this + 47);
  rc.left = (int)v6;
  v7 = *((float *)this + 48);
  rc.top = (int)v7;
  rc.right = (int)(float)(v6 + *((float *)this + 49));
  rc.bottom = (int)(float)(v7 + *((float *)this + 50));
  v8 = MonitorFromRect(&rc, 0);
  v9 = v8;
  if ( v8 )
  {
    SearchBoxHeight = SearchAppDesktopExperienceView::GetSearchBoxHeight(this, v8);
    WindowsDeleteString(0LL);
    string2 = 0LL;
    v12 = SearchAppDesktopExperienceView::BuildAdditionalArgsString(
            this,
            v9,
            (ExperienceManagerUtils *)SearchBoxHeight,
            &string2);
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D0,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v12);
LABEL_18:
      WindowsDeleteString(string2);
      return v10;
    }
    WindowsDeleteString(0LL);
    newStringa = 0LL;
    v13 = WindowsConcatString(string1, string2, &newStringa);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v13 = WindowsDuplicateString(newStringa, newString);
      v10 = v13;
      if ( v13 >= 0 )
      {
        length = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(newStringa, &length);
        v17 = StringRawBuffer;
        if ( StringRawBuffer )
          *((_BYTE *)this + 209) = wcsstr(StringRawBuffer, L"&QuerySource=StartButton") != 0LL;
        *((float *)this + 45) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                         (ExperienceManagerUtils *)0x140,
                                         (int)v9,
                                         v16);
        if ( wcsstr(v17, L"StartMode=QFSearchBox") || wcsstr(v17, L"StartMode=NotificationAnimation") )
          v19 = _mm_cvtsi32_si128(SearchBoxHeight);
        else
          v19 = _mm_cvtsi32_si128(ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x290, (int)v9, v18));
        *((_DWORD *)this + 46) = _mm_cvtepi32_ps(v19).m128_u32[0];
        v10 = 0;
        goto LABEL_17;
      }
      v14 = 1236LL;
    }
    else
    {
      v14 = 1235LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v13);
LABEL_17:
    WindowsDeleteString(newStringa);
    newStringa = 0LL;
    goto LABEL_18;
  }
  v10 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4CC,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL);
  return v10;
}
