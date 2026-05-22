/*
 * XREFs of ?EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ @ 0x180059DD4
 * Callers:
 *     _lambda_9f1a0e1c1238d44398e04dfbea0d7ef4_::_lambda_invoker_cdecl_ @ 0x1800597D0 (_lambda_9f1a0e1c1238d44398e04dfbea0d7ef4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ?InternalRelease@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800594AC (-InternalRelease@-$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAA.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_bool___lambda_f101df8c9ba8d1edb157401080fcbaae___ @ 0x180059820 (Microsoft--WRL--Callback_Windows--Foundation--IEventHandler_bool___lambda_f101df8c9ba8d1edb15740.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_0b51ff8d1905919b0baadac0918cf5fb___ @ 0x18005988C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Devices--Lights--Inter.c)
 *     ??1?$com_ptr_t@UILampArrayStaticsPrivate@Internal@Lights@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180059A74 (--1-$com_ptr_t@UILampArrayStaticsPrivate@Internal@Lights@Devices@Windows@@Uerr_returncode_policy.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800C09AC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LampArrayRawInputProvider::EnsureAmbientManager(LampArrayRawInputProvider *this)
{
  const char *v2; // r9
  int ActivationFactory; // eax
  const char *v4; // r9
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, char *); // rdi
  _QWORD *v8; // rsi
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  LampArrayRawInputProvider *v15; // [rsp+30h] [rbp-40h] BYREF
  LampArrayRawInputProvider *v16; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2B5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      v2);
  v13 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Devices.Lights.LampArray",
    0x21u,
    0x20u);
  ActivationFactory = RoGetActivationFactory(v18, &GUID_7bb8c98d_5fc1_452d_bb1f_4ad410d398ff, &v13);
  if ( ActivationFactory != -2147221164 )
  {
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2C3,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)ActivationFactory,
        (int)v13);
    if ( !v13 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2C4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        v4);
    v14 = 0LL;
    v5 = (**v13)(v13, &GUID_64652a6a_1d85_45b9_84f0_b7a1316ac766, &v14);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2C7,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v5,
        (int)v13);
    v6 = v14;
    v7 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 56LL);
    v8 = (_QWORD *)((char *)this + 48);
    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease((__int64 *)this + 6);
    v9 = v7(v6, (char *)this + 48);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2C9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v9,
        (int)v13);
    v15 = this;
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Devices::Lights::Internal::AmbientManager___Windows::Devices::Lights::Internal::AmbientDeviceMappingChangedEventArgs_____lambda_0b51ff8d1905919b0baadac0918cf5fb___(
      (__int64 *)&v16,
      (__int64)&v15);
    v10 = (__int64)v16;
    (*(void (__fastcall **)(_QWORD, LampArrayRawInputProvider *, char *))(*(_QWORD *)*v8 + 48LL))(
      *v8,
      v16,
      (char *)this + 344);
    v16 = this;
    Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_bool___lambda_f101df8c9ba8d1edb157401080fcbaae___(
      (__int64 *)&v15,
      (__int64)&v16);
    v11 = (__int64)v15;
    (*(void (__fastcall **)(_QWORD, LampArrayRawInputProvider *, char *))(*(_QWORD *)*v8 + 64LL))(
      *v8,
      v15,
      (char *)this + 352);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    wil::com_ptr_t<Windows::Devices::Lights::Internal::ILampArrayStaticsPrivate,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Lights::Internal::ILampArrayStaticsPrivate,wil::err_returncode_policy>(&v14);
  }
  wil::com_ptr_t<Windows::Devices::Lights::Internal::ILampArrayStaticsPrivate,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Lights::Internal::ILampArrayStaticsPrivate,wil::err_returncode_policy>((__int64 *)&v13);
  return 0LL;
}
