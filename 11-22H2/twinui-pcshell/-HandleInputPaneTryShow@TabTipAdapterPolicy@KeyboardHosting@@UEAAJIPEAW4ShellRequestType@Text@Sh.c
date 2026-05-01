/*
 * XREFs of ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180532D90
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 *     ?IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ @ 0x18014AB08 (-IsHardwareKeyboardAvailable@TabTipAdapterPolicy@KeyboardHosting@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x18020C1CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@.c)
 *     ??$HandleInputPaneTryShow@PEBDPEBDAEAU?$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@PEBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBD0AEAU?$atomic@_N@std@@$$QEAH1AEA_N110@Z @ 0x1805306E4 (--$HandleInputPaneTryShow@PEBDPEBDAEAU-$atomic@_N@std@@HAEAU12@AEA_NAEAU12@AEAU12@PEBD@TouchKeyb.c)
 *     ??$HandleInputPaneTryShow@PEBDPEBD_NH_NAEA_NAEAU?$atomic@_N@std@@AEAU12@PEBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBD0$$QEA_N$$QEAH1AEA_NAEAU?$atomic@_N@std@@40@Z @ 0x18053079C (--$HandleInputPaneTryShow@PEBDPEBD_NH_NAEA_NAEAU-$atomic@_N@std@@AEAU12@PEBD@TouchKeyboardExperi.c)
 *     ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x180533B20 (-IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180533BC4 (-IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z.c)
 *     ?LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180533C60 (-LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?StringifyCoreInputViewKind@@YAPEBDW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@@Z @ 0x180534E60 (-StringifyCoreInputViewKind@@YAPEBDW4CoreInputViewKind@Core@ViewManagement@UI@Windows@@@Z.c)
 *     ?StringifyCoreKeyboardModality@@YAPEBDW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x180534F24 (-StringifyCoreKeyboardModality@@YAPEBDW4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z.c)
 *     ?StringifyShellRequestType@@YAPEBDW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180534FDC (-StringifyShellRequestType@@YAPEBDW4ShellRequestType@Text@Shell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryShow(
        KeyboardHosting::TabTipAdapterPolicy *this,
        unsigned int a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  int v6; // r14d
  bool IsPrimaryViewTryShowAllowed; // bl
  bool v8; // al
  const char *v9; // r9
  bool v10; // cc
  HSTRING v11; // rbx
  bool v13; // [rsp+50h] [rbp-49h] BYREF
  bool v14; // [rsp+51h] [rbp-48h] BYREF
  int v15; // [rsp+54h] [rbp-45h] BYREF
  const char *v16; // [rsp+58h] [rbp-41h] BYREF
  const char *v17; // [rsp+60h] [rbp-39h] BYREF
  const char *v18; // [rsp+68h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-29h] BYREF
  HSTRING v20; // [rsp+88h] [rbp-11h]
  HSTRING_HEADER v21; // [rsp+90h] [rbp-9h] BYREF
  HSTRING v22; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *(_DWORD *)a3 = 0;
  v6 = 1;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) )
  {
    IsPrimaryViewTryShowAllowed = KeyboardHosting::TabTipAdapterPolicy::IsPrimaryViewTryShowAllowed(this);
  }
  else
  {
    if ( KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(this, *((_DWORD *)this + 164))
      || *((_DWORD *)this + 157) != 2 && *((_DWORD *)this + 157) != 16 )
    {
      goto LABEL_16;
    }
    v8 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) != 0;
    if ( v8 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x163,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\TabTipAdapterPolicy.h",
        v9);
    if ( *((_BYTE *)this + 606) || *((_BYTE *)this + 607) )
      v8 = 1;
    if ( (v8 || *((_BYTE *)this + 603))
      && !KeyboardHosting::TabTipAdapterPolicy::IsHardwareKeyboardAvailable(this)
      && !*((_BYTE *)this + 625)
      && *((_BYTE *)this + 661) )
    {
      IsPrimaryViewTryShowAllowed = 1;
    }
    else
    {
LABEL_16:
      IsPrimaryViewTryShowAllowed = 0;
    }
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) )
  {
    if ( !IsPrimaryViewTryShowAllowed )
    {
      v10 = a2 - 1 <= 6;
      goto LABEL_22;
    }
  }
  else if ( !IsPrimaryViewTryShowAllowed )
  {
    v10 = a2 - 1 <= 5;
LABEL_22:
    if ( !v10 )
      goto LABEL_24;
  }
  *(_DWORD *)a3 = 1;
LABEL_24:
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) )
  {
    v16 = (const char *)StringifyShellRequestType(*(unsigned int *)a3);
    v15 = *((_DWORD *)this + 153);
    v17 = (const char *)StringifyCoreKeyboardModality(*((unsigned int *)this + 157));
    v18 = (const char *)StringifyCoreInputViewKind(a2);
    TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow<char const *,char const *,std::atomic<bool> &,int,std::atomic<bool> &,bool &,std::atomic<bool> &,std::atomic<bool> &,char const *>(
      &v18,
      &v17,
      (bool *)this + 608,
      &v15,
      (bool *)this + 609,
      (bool *)this + 602,
      (bool *)this + 625,
      (bool *)this + 661,
      &v16);
  }
  else
  {
    if ( IsPrimaryViewTryShowAllowed || a2 - 1 <= 1 )
    {
      v20 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
      v11 = v20;
      v22 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v21, L"TRYSHOW2", 9u, 8u);
      KeyboardHosting::TabTipAdapterPolicy::LogPrimaryViewShowRequestInfo(
        (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 16),
        v22,
        v11);
    }
    v18 = (const char *)StringifyShellRequestType(*(unsigned int *)a3);
    v13 = 0;
    if ( !*((_BYTE *)this + 606) && !*((_BYTE *)this + 607) )
      v6 = 0;
    v15 = v6;
    v14 = 0;
    v17 = (const char *)StringifyCoreKeyboardModality(*((unsigned int *)this + 157));
    v16 = (const char *)StringifyCoreInputViewKind(a2);
    TouchKeyboardExperienceTelemetryLogger::HandleInputPaneTryShow<char const *,char const *,bool,int,bool,bool &,std::atomic<bool> &,std::atomic<bool> &,char const *>(
      &v16,
      &v17,
      &v14,
      &v15,
      &v13,
      (bool *)this + 602,
      (bool *)this + 625,
      (bool *)this + 661,
      &v18);
  }
  return 0LL;
}
