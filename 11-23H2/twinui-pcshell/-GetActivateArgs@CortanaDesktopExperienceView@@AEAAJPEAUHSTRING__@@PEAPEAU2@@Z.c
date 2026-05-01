/*
 * XREFs of ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1804828BC
 * Callers:
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180483F40 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180487AC0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180488050 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180444854 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1804813D0 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?GetCortanaHeightForImmersiveSearch@@YAHXZ @ 0x180482E44 (-GetCortanaHeightForImmersiveSearch@@YAHXZ.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x180483588 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180483CB4 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180487874 (-SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1807493A8 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::GetActivateArgs(
        CortanaDesktopExperienceView *this,
        HSTRING string1,
        HSTRING *newString)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  HMONITOR v8; // rax
  HMONITOR v9; // r14
  unsigned int SpeechTextInputHeight; // r12d
  int v12; // eax
  unsigned int v13; // edi
  HRESULT v14; // eax
  __int64 v15; // rdx
  const wchar_t *StringRawBuffer; // rax
  CortanaFlightingHelpers *v17; // rcx
  HMONITOR v18; // r8
  const wchar_t *v19; // rsi
  bool v20; // di
  bool v21; // r15
  bool v22; // r13
  wchar_t *v23; // rax
  HMONITOR v24; // r8
  __int64 v25; // rcx
  __m128i v26; // xmm0
  HMONITOR v27; // r8
  HMONITOR v28; // r8
  HSTRING newStringa; // [rsp+20h] [rbp-30h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-28h] BYREF
  UINT32 length; // [rsp+30h] [rbp-20h] BYREF
  int v32; // [rsp+34h] [rbp-1Ch] BYREF
  RECT rc; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  *newString = 0LL;
  *(_WORD *)((char *)this + 237) = 0;
  v6 = *((float *)this + 49);
  rc.left = (int)v6;
  v7 = *((float *)this + 50);
  rc.top = (int)v7;
  rc.right = (int)(float)(v6 + *((float *)this + 51));
  rc.bottom = (int)(float)(v7 + *((float *)this + 52));
  v8 = MonitorFromRect(&rc, 0);
  v9 = v8;
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D0,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v8);
  WindowsDeleteString(0LL);
  string2 = 0LL;
  v12 = CortanaDesktopExperienceView::BuildAdditionalArgsString(
          this,
          v9,
          (ExperienceManagerUtils *)SpeechTextInputHeight,
          &string2);
  v13 = v12;
  if ( v12 >= 0 )
  {
    WindowsDeleteString(0LL);
    newStringa = 0LL;
    v14 = WindowsConcatString(string1, string2, &newStringa);
    v13 = v14;
    if ( v14 < 0 )
    {
      v15 = 1751LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v14);
LABEL_39:
      WindowsDeleteString(newStringa);
      newStringa = 0LL;
      goto LABEL_40;
    }
    v14 = WindowsDuplicateString(newStringa, newString);
    v13 = v14;
    if ( v14 < 0 )
    {
      v15 = 1752LL;
      goto LABEL_27;
    }
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(newStringa, &length);
    v19 = StringRawBuffer;
    if ( StringRawBuffer )
    {
      if ( wcsstr(StringRawBuffer, L"ForceAmbientMode=True") )
        *((_BYTE *)this + 237) = 1;
      v20 = wcsstr(v19, L"StartMode=NotificationAnimation") != 0LL;
      v21 = wcsstr(v19, L"StartMode=Attract") != 0LL;
      v22 = wcsstr(v19, L"QuerySource=LockScreen") != 0LL;
      if ( (wcsstr(v19, L"QuerySource=VoiceActivation")
         || (v23 = wcsstr(v19, L"QuerySource=VoiceActivationWithKeyword")) != 0LL)
        && ((LOBYTE(v23) = 1, *((_BYTE *)this + 288)) || *((_BYTE *)this + 247))
        || *((_BYTE *)this + 237)
        || v20
        || v21
        || v22 )
      {
        *((_BYTE *)this + 238) = 1;
      }
      if ( (_BYTE)v23 && !*((_BYTE *)this + 238) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
      *((_BYTE *)this + 244) = wcsstr(v19, L"&QuerySource=StartButton") != 0LL;
      if ( v20 )
      {
        v14 = CortanaDesktopExperienceView::SetPositioningAnchorForNotificationAnimation(this);
        v13 = v14;
        if ( v14 < 0 )
        {
          v15 = 1795LL;
          goto LABEL_27;
        }
      }
    }
    if ( *((_BYTE *)this + 288) )
    {
      *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x1AC,
                                       (int)v9,
                                       v18);
      v25 = 492LL;
    }
    else if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v17) && *((_DWORD *)this + 35) == 6 )
    {
      CortanaFeatureConfiguration::GetDWORD(0LL, &v32);
      *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x384,
                                       (int)v9,
                                       v28);
      v25 = (unsigned int)GetCortanaHeightForImmersiveSearch() + 20;
    }
    else
    {
      *((float *)this + 53) = (float)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                       (ExperienceManagerUtils *)0x140,
                                       (int)v9,
                                       v27);
      if ( wcsstr(v19, L"StartMode=QFSearchBox") || wcsstr(v19, L"StartMode=NotificationAnimation") )
      {
        v26 = _mm_cvtsi32_si128(SpeechTextInputHeight);
        goto LABEL_38;
      }
      v25 = 656LL;
    }
    v26 = _mm_cvtsi32_si128(ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v25, (int)v9, v24));
LABEL_38:
    *((_DWORD *)this + 54) = _mm_cvtepi32_ps(v26).m128_u32[0];
    v13 = 0;
    goto LABEL_39;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D4,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v12);
LABEL_40:
  WindowsDeleteString(string2);
  return v13;
}
