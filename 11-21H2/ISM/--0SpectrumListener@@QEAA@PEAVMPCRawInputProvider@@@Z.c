/*
 * XREFs of ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800B7164
 * Callers:
 *     ??$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEAPEAVMPCRawInputProvider@@@Z @ 0x1800B53B0 (--$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSpect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A8CAC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x1800B613C (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ??$ActivateInstance@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIInputPriv@Internal@Spatial@Input@UI@1@@Z @ 0x1800B6FE8 (--$ActivateInstance@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@Foundation@Windows@@YAJPEAUH.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAVPrivVoiceEventArgs@23456@@Foundation@Windows@@V_lambda_4a364071ea75531430e6bf7b4cab72c1_@@$0?0PEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIInputPriv@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVPrivVoiceEventArgs@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUIInputPriv@Internal@Spatial@Input@UI@3@PEAUIPrivVoiceEventArgs@56783@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_4a364071ea75531430e6bf7b4cab72c1_@@@Z @ 0x1800B7094 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVInputPriv@Internal@Spatial@Input@UI@Windows@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B7114 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@QE.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z @ 0x1800B91C0 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800B92E8 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ??0SpeechRuntimeListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x1800BA048 (--0SpeechRuntimeListener@@QEAA@PEAVMPCRawInputProvider@@K@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x1800BA0CC (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=7
SpectrumListener *__fastcall SpectrumListener::SpectrumListener(SpectrumListener *this, struct MPCRawInputProvider *a2)
{
  const char *v4; // r9
  char *v5; // rbx
  int *v6; // r14
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, char *); // rbp
  void *v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  const char *v14; // r9
  MPCHeadUpdateListener *Instance; // rax
  int v16; // eax
  int v17; // eax
  SpeechRuntimeListener *v18; // rbx
  SpeechRuntimeListener *v19; // rdi
  SpeechRuntimeListener *v20; // rcx
  int v22[4]; // [rsp+20h] [rbp-88h] BYREF
  SpectrumListener *v23; // [rsp+30h] [rbp-78h]
  SpectrumListener *v24; // [rsp+38h] [rbp-70h] BYREF
  __int128 v25; // [rsp+40h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-58h] BYREF
  __int64 v27; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v23 = this;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>((__int64)this);
  *(_QWORD *)this = &SpectrumListener::`vftable';
  *((_QWORD *)this + 2) = a2;
  v5 = (char *)this + 24;
  *((_QWORD *)this + 3) = 0LL;
  v6 = (int *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      27LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      v4);
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Input.Spatial.Internal.InputPriv",
    0x2Cu,
    0x2Bu);
  v7 = v27;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
  v8 = Windows::Foundation::ActivateInstance<Windows::UI::Input::Spatial::Internal::IInputPriv>(v7, (_QWORD *)this + 3);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v8,
      v22[0]);
  v9 = *(_QWORD *)v5;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, char *))(**(_QWORD **)v5 + 48LL);
  *(_QWORD *)v22 = SpectrumListener::OnPhraseDetected;
  v22[2] = 0;
  v24 = this;
  v25 = *(_OWORD *)v22;
  v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
    v12 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::IInputPriv *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>>::*)(Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::Internal::InputPriv *,Windows::UI::Input::Spatial::Internal::PrivVoiceEventArgs *>,_lambda_4a364071ea75531430e6bf7b4cab72c1_,-1,Windows::UI::Input::Spatial::Internal::IInputPriv *,Windows::UI::Input::Spatial::Internal::IPrivVoiceEventArgs *>(
            (__int64)v11,
            (__int64)&v24);
  else
    v12 = 0LL;
  *(_QWORD *)v22 = v12;
  v13 = v10(v9, v12, (char *)this + 48);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v13,
      v22[0]);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v14);
  if ( *(_BYTE *)ISMTestMode::s_instance )
  {
    Instance = MPCHeadUpdateListener::GetInstance();
    MPCHeadUpdateListener::AddHeadEventOccurred(Instance, this, (unsigned __int64 *)this + 5);
    v16 = MPCRawInputProvider::AttachDevice(*((_QWORD *)this + 2), 0x20000, (_DWORD *)this + 19);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x26,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        (const char *)(unsigned int)v16,
        v22[0]);
  }
  v17 = MPCRawInputProvider::AttachDevice(*((_QWORD *)this + 2), 0x40000, (_DWORD *)this + 20);
  if ( v17 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v17,
      v22[0]);
  *(_QWORD *)v22 = operator new(0x58uLL);
  v18 = SpeechRuntimeListener::SpeechRuntimeListener(*(SpeechRuntimeListener **)v22, a2, *((_DWORD *)this + 20));
  if ( v6 == v22 )
  {
    if ( v18 )
    {
      SpeechRuntimeListener::~SpeechRuntimeListener(v18);
      v20 = v18;
      goto LABEL_24;
    }
  }
  else
  {
    v19 = *(SpeechRuntimeListener **)v6;
    *(_QWORD *)v6 = v18;
    if ( v19 )
    {
      SpeechRuntimeListener::~SpeechRuntimeListener(v19);
      v20 = v19;
LABEL_24:
      operator delete(v20);
    }
  }
  *((_BYTE *)this + 72) = 1;
  return this;
}
