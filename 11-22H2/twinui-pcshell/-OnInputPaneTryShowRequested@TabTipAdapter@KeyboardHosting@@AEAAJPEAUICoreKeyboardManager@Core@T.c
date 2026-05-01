/*
 * XREFs of ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x180527180
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800C3738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x18020C1CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@V?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@XZ @ 0x180521718 (--B-$ComPtrRef@V-$ComPtr@U-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180528A64 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardView_ea_180528A64.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18074B410 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputPaneTryShowRequested(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v7; // r14d
  unsigned int v8; // ecx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(_QWORD, HSTRING, HSTRING); // rdi
  HSTRING v11; // rbx
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(_QWORD, HSTRING, HSTRING); // rdi
  HSTRING v14; // rbx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  int v20; // ecx
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(_QWORD, _QWORD, _BYTE *, _BYTE *, int *, __int64 *); // rbx
  __int64 *v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  IhmNotification *v26; // rcx
  bool v27; // r8
  HSTRING v28; // rbx
  int v29; // eax
  char v30; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v31[3]; // [rsp+41h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-35h] BYREF
  int v33; // [rsp+48h] [rbp-31h] BYREF
  int v34; // [rsp+4Ch] [rbp-2Dh] BYREF
  __int64 v35; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v36; // [rsp+58h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-19h] BYREF
  HSTRING v38; // [rsp+78h] [rbp-1h]
  HSTRING_HEADER v39; // [rsp+80h] [rbp+7h] BYREF
  HSTRING v40; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v32 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v32);
  if ( v4 < 0 )
  {
    v5 = 1070LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 15) + 104LL))(
         *((_QWORD *)this + 15),
         v32,
         &v33);
  if ( v4 < 0 )
  {
    v5 = 1072LL;
    goto LABEL_3;
  }
  v7 = 7;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) )
    {
      if ( v33 != 1 )
      {
        v8 = v32;
        if ( v32 - 1 > 1 )
          goto LABEL_19;
      }
      v12 = *((_QWORD *)this + 16);
      v13 = *(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING))(*(_QWORD *)v12 + 320LL);
      v40 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v39, &LocaleName, 1u, 0);
      v14 = v40;
      v38 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TRYSHOW2", 9u, 8u);
      v4 = v13(v12, v38, v14);
      if ( v4 < 0 )
      {
        v5 = 1090LL;
        goto LABEL_3;
      }
    }
LABEL_18:
    v8 = v32;
    goto LABEL_19;
  }
  if ( v33 == 1 || (v8 = v32, v32 - 1 <= 1) || v32 == 7 )
  {
    v9 = *((_QWORD *)this + 16);
    v10 = *(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING))(*(_QWORD *)v9 + 320LL);
    v38 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
    v11 = v38;
    v40 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v39, L"TRYSHOW2", 9u, 8u);
    v4 = v10(v9, v40, v11);
    if ( v4 < 0 )
    {
      v5 = 1079LL;
      goto LABEL_3;
    }
    goto LABEL_18;
  }
LABEL_19:
  if ( v33 != 1 )
    return 0LL;
  if ( !v8 )
    goto LABEL_34;
  v15 = v8 - 1;
  if ( !v15 )
  {
    v7 = 8;
    goto LABEL_35;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( !v17 )
    {
      v7 = 2;
      goto LABEL_35;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v7 = 10;
      goto LABEL_35;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v7 = 3;
      goto LABEL_35;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v7 = 4;
      goto LABEL_35;
    }
    if ( v20 == 1 )
    {
      v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) != 0
         ? 0xE
         : 0;
      goto LABEL_35;
    }
LABEL_34:
    v7 = 0;
  }
LABEL_35:
  v31[0] = 0;
  v30 = 0;
  v34 = 0;
  v35 = 0LL;
  v21 = *((_QWORD *)this + 15);
  v22 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _BYTE *, int *, __int64 *))(*(_QWORD *)v21 + 304LL);
  v36 = &v35;
  v23 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::operator Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption> * *(&v36);
  v24 = v22(v21, v7, v31, &v30, &v34, v23);
  v4 = v24;
  if ( v24 < 0 )
  {
    v25 = 1135LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v24);
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v35);
    return (unsigned int)v4;
  }
  if ( ((v7 - 2) & 0xFFFFFFF7) != 0 )
  {
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 24LL))(
      (char *)this + 8,
      (unsigned int)v34,
      v7);
  }
  else
  {
    v40 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v39, L"1", 2u, 1u);
    v28 = v40;
    v38 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ShowEmojiPanelTips", 0x13u, 0x12u);
    v29 = KeyboardHosting::TabTipAdapter::SetShellPreference(this, v38, v28);
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x473,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v29);
    v24 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(this, v7, (unsigned int)v34, 5LL);
    v4 = v24;
    if ( v24 < 0 )
    {
      v25 = 1141LL;
      goto LABEL_45;
    }
  }
  LOBYTE(v26) = 1;
  IhmNotification::SendKeyboardSetVisible(v26, 0, v27);
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v35);
  return 0LL;
}
