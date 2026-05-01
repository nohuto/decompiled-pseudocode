/*
 * XREFs of ?UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUhstring@7@1@Z @ 0x18052E0EC
 * Callers:
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUShowShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x180528C18 (-OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1804AB598 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x18051DA28 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_18051DA28.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_VASDE@@@details@wil@@QEAA_NXZ @ 0x18052E950 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_VASDE@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall KeyboardHosting::TabTipAdapter::UpdateShellViewCoordinatorShellPreferences(
        KeyboardHosting::TabTipAdapter *a1,
        int a2,
        winrt::hstring *a3,
        winrt::hstring *a4)
{
  char IsEnabled; // al
  unsigned __int64 v9; // r8
  wchar_t *v10; // rdx
  char *v11; // rdx
  unsigned int v12; // r8d
  HSTRING Reserved1; // rbx
  unsigned int v14; // r8d
  int *v15; // rax
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  unsigned int v18; // r8d
  HSTRING v19; // rbx
  unsigned int v20; // r8d
  int *v21; // rax
  HSTRING_HEADER *v22; // rax
  int v23; // eax
  int v25[2]; // [rsp+20h] [rbp-99h] BYREF
  char v26[16]; // [rsp+28h] [rbp-91h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-81h]
  unsigned __int64 v28; // [rsp+40h] [rbp-79h]
  int v29[2]; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-59h]
  int v31[2]; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 v32; // [rsp+80h] [rbp-39h]
  _QWORD Src[4]; // [rsp+88h] [rbp-31h] BYREF
  HSTRING_HEADER v34; // [rsp+A8h] [rbp-11h] BYREF
  HSTRING_HEADER v35; // [rsp+C8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  *(_QWORD *)v26 = 0LL;
  v27 = 0LL;
  v28 = 7LL;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_VASDE>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_VASDE>::GetImpl'::`2'::impl);
  v9 = 12LL;
  if ( !IsEnabled )
  {
    if ( a2 != 12 )
    {
      if ( a2 != 13 )
      {
        if ( a2 != 14 )
        {
          if ( a2 != 19 )
            wil::details::in1diag3::FailFast_UnexpectedMsg(
              retaddr,
              (void *)0x934,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
              "Unsupported ShellView",
              *(const char **)v25);
          goto LABEL_15;
        }
LABEL_13:
        v10 = L"EmojiAndMore";
        goto LABEL_16;
      }
LABEL_11:
      v10 = L"VoiceTyping";
      v9 = 11LL;
      goto LABEL_16;
    }
LABEL_9:
    v10 = L"PrimaryOnScreenInput";
    v9 = 20LL;
    goto LABEL_16;
  }
  switch ( a2 )
  {
    case 12:
      goto LABEL_9;
    case 13:
      goto LABEL_11;
    case 14:
      goto LABEL_13;
    case 19:
LABEL_15:
      v10 = L"SmartActions";
      goto LABEL_16;
  }
  if ( a2 != 28 )
    wil::details::in1diag3::FailFast_UnexpectedMsg(
      retaddr,
      (void *)0x91D,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      "Unsupported ShellView",
      *(const char **)v25);
  v10 = L"PrimaryOnScreenInputForSecureDesktop";
  v9 = 36LL;
LABEL_16:
  std::wstring::assign(v26, v10, v9);
  std::wstring::wstring(Src, L"ShellViewShowRequest_");
  v11 = v26;
  if ( v28 >= 8 )
    v11 = *(char **)v26;
  std::wstring::append(Src, v11, v27);
  std::operator+<unsigned short>((char *)v31, Src, L"_TelemetryId");
  std::operator+<unsigned short>((char *)v29, Src, L"_Context");
  *(_QWORD *)v25 = winrt::hstring::c_str(a3);
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, (const WCHAR **)v25, v12)[1].Reserved.Reserved1;
  v15 = v31;
  if ( v32 >= 8 )
    v15 = *(int **)v31;
  *(_QWORD *)v25 = v15;
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, (const WCHAR **)v25, v14);
  v17 = KeyboardHosting::TabTipAdapter::SetShellPreference(a1, (HSTRING)v16[1].Reserved.Reserved1, Reserved1);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x93E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v17);
  *(_QWORD *)v25 = winrt::hstring::c_str(a4);
  v19 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, (const WCHAR **)v25, v18)[1].Reserved.Reserved1;
  v21 = v29;
  if ( v30 >= 8 )
    v21 = *(int **)v29;
  *(_QWORD *)v25 = v21;
  v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, (const WCHAR **)v25, v20);
  v23 = KeyboardHosting::TabTipAdapter::SetShellPreference(a1, (HSTRING)v22[1].Reserved.Reserved1, v19);
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x93F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v23);
  std::wstring::_Tidy_deallocate((__int64)v29);
  std::wstring::_Tidy_deallocate((__int64)v31);
  std::wstring::_Tidy_deallocate((__int64)Src);
  return std::wstring::_Tidy_deallocate((__int64)v26);
}
