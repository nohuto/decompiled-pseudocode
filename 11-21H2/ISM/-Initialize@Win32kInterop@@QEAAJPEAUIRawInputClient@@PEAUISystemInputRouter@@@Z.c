/*
 * XREFs of ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800328A8
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180027B04 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002E308 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM@@@detail.c)
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x180030BCC (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x180032C0C (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x180041344 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800415D4 (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x180045068 (-Initialize@-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIM.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18004527C (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageS.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z@std@@@Z @ 0x180045494 (-Initialize@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z@std@@@Z @ 0x1800456AC (-Initialize@-$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x1800458C4 (-Initialize@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@U.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x180045ADC (-Initialize@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_VPTP_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x180045CF4 (-Initialize@-$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSes.c)
 *     ?Initialize@?$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z@std@@@Z @ 0x180045F0C (-Initialize@-$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ?Initialize@?$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z@std@@@Z @ 0x180046124 (-Initialize@-$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x1800DCEEC (--$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV-$ComPtr@UIMessageSession@@@WRL@Micros.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800DFF30 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::Initialize(
        Win32kInterop *this,
        struct IRawInputClient *a2,
        struct ISystemInputRouter *a3)
{
  struct IRawInputClient *v6; // rax
  struct ISystemInputRouter *v7; // rax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, char *); // rbx
  int v22; // eax
  int v23; // eax
  int v25; // eax
  __int64 v26; // r8
  __int64 (__fastcall **v27)(); // [rsp+20h] [rbp-40h] BYREF
  Win32kInterop *v28; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v29)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v31; // [rsp+80h] [rbp+20h] BYREF
  struct IRawInputClient *v32; // [rsp+88h] [rbp+28h] BYREF

  v31 = 0LL;
  v6 = (struct IRawInputClient *)*((_QWORD *)this + 7);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (struct IRawInputClient *)*((_QWORD *)this + 7);
    }
    v32 = v6;
    *((_QWORD *)this + 7) = a2;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v32);
  }
  v7 = (struct ISystemInputRouter *)*((_QWORD *)this + 6);
  if ( v7 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)a3 + 8LL))(a3);
      v7 = (struct ISystemInputRouter *)*((_QWORD *)this + 6);
    }
    v32 = v7;
    *((_QWORD *)this + 6) = a3;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v32);
  }
  *((_BYTE *)this + 32) = 0;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v31);
  v8 = CoreUICreate(&v31);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v8,
      (int)v27);
  Microsoft::WRL::ComPtr<IMessageSession>::operator=((char *)this + 488, &v31);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM>::GetImpl'::`2'::impl,
    1u,
    v9,
    v10);
  if ( IsEdition(0x3DDA1uLL) )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
    v25 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardOverriderDispatcher,KeyboardOverriderDispatcher,Microsoft::WRL::ComPtr<IMessageSession> &>(
            (char *)this + 40,
            &v31);
    if ( v25 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v25,
        (int)v27);
    v27 = off_1801E58C8;
    v28 = this;
    v29 = &v27;
    ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::Initialize)(
      (char *)this + 1280,
      &v31,
      v26,
      &v27);
  }
  v27 = off_1801E4440;
  v28 = this;
  v29 = &v27;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize)(
    (char *)this + 560,
    &v31,
    5LL,
    &v27);
  v27 = off_1801E42F0;
  v28 = this;
  v29 = &v27;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_DEVICE_IDENTIFICATION_MESSAGE>::Initialize)(
    (char *)this + 848,
    &v31,
    v11,
    &v27);
  v27 = off_1801E4410;
  v28 = this;
  v29 = &v27;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::Initialize)(
    (char *)this + 992,
    &v31,
    v12,
    &v27);
  v27 = off_1801E4320;
  v28 = this;
  v29 = &v27;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_ACCESSIBILITY_TIMER>::Initialize)(
    (char *)this + 1136,
    &v31,
    v13,
    &v27);
  ISMStatics::GetHotkeyRegistrationForwarder();
  v27 = off_1801E4470;
  v28 = this;
  v29 = &v27;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_HOTKEY_REGISTRATION_MESSAGE>::Initialize)(
    (char *)this + 1424,
    &v31,
    v14,
    &v27);
  v27 = off_1801E4350;
  v28 = this;
  v29 = &v27;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_MOUSE_INPUT_MESSAGE>::Initialize)(
    (char *)this + 1712,
    &v31,
    v15,
    &v27);
  v27 = off_1801E43E0;
  v28 = this;
  v29 = &v27;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE>::Initialize)(
    (char *)this + 1568,
    &v31,
    v16,
    &v27);
  v27 = off_1801E44A0;
  v28 = this;
  v29 = &v27;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize)(
    (char *)this + 704,
    &v31,
    8LL,
    &v27);
  v27 = off_1801E4290;
  v28 = this;
  v29 = &v27;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_VPTP_INTEROP_MESSAGE>::Initialize)(
    (char *)this + 1856,
    &v31,
    v17,
    &v27);
  v27 = off_1801E4380;
  v28 = this;
  v29 = &v27;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<MIT_INPUTSTREAM_ENDED_MESSAGE>::Initialize)(
    (char *)this + 2000,
    &v31,
    v18,
    &v27);
  v27 = off_1801E43B0;
  v28 = this;
  v29 = &v27;
  KernelInputConnection<MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::Initialize((char *)this + 2144, &v31, v19, &v27);
  v20 = *((_QWORD *)this + 6);
  v21 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 72LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 54);
  v22 = v21(v20, (char *)this + 432);
  if ( v22 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x112,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v22,
      (int)v27);
  v23 = CursorNotificationProcessor::Initialize(
          (Win32kInterop *)((char *)this + 440),
          *((struct ICursorBroker **)this + 54));
  if ( v23 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x113,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v23,
      (int)v27);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v31);
  return 0LL;
}
