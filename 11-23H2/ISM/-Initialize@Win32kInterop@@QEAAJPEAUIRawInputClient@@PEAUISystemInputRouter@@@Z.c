/*
 * XREFs of ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x180044794
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18003ACA0 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ?Initialize@?$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z@std@@@Z @ 0x180042818 (-Initialize@-$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ?Initialize@?$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z@std@@@Z @ 0x180042A30 (-Initialize@-$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_VPTP_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x180042C48 (-Initialize@-$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSes.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x180042E60 (-Initialize@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x180043078 (-Initialize@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@U.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z@std@@@Z @ 0x180043290 (-Initialize@-$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z@std@@@Z @ 0x1800434A8 (-Initialize@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800436C0 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageS.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x1800438D8 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x180044A54 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x180044C70 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044CFC (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z @ 0x180044D4C (--4-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x180044E5C (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x1800F6B18 (--$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV-$ComPtr@UIMessageSession@@@WRL@Micros.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800F99C0 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::Initialize(
        Win32kInterop *this,
        struct IRawInputClient *a2,
        struct ISystemInputRouter *a3)
{
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, char *); // rbx
  int v16; // eax
  int v17; // eax
  int v19; // eax
  __int64 v20; // r8
  __int64 (__fastcall **v21)(); // [rsp+20h] [rbp-40h] BYREF
  Win32kInterop *v22; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v23)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v25; // [rsp+80h] [rbp+20h] BYREF

  v25 = 0LL;
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=((char *)this + 56, a2);
  Microsoft::WRL::ComPtr<ISystemInputRouter>::operator=((char *)this + 48, a3);
  *((_BYTE *)this + 32) = 0;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v25);
  v5 = CoreUICreate(&v25);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v5,
      (int)v21);
  Microsoft::WRL::ComPtr<IMessageSession>::operator=((char *)this + 488, &v25);
  if ( IsEdition(253345LL) )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
    v19 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardOverriderDispatcher,KeyboardOverriderDispatcher,Microsoft::WRL::ComPtr<IMessageSession> &>(
            (char *)this + 40,
            &v25);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v19,
        (int)v21);
    v21 = off_180204B78;
    v22 = this;
    v23 = &v21;
    ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::Initialize)(
      (char *)this + 1136,
      &v25,
      v20,
      &v21);
  }
  v21 = off_1802036E0;
  v22 = this;
  v23 = &v21;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize)(
    (char *)this + 560,
    &v25,
    4LL,
    &v21);
  v21 = off_180203710;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::Initialize((_QWORD *)this + 106, &v25, v6, (__int64)&v21);
  v21 = off_180203740;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_ACCESSIBILITY_TIMER>::Initialize((_QWORD *)this + 124, &v25, v7, (__int64)&v21);
  ISMStatics::GetHotkeyRegistrationForwarder();
  v21 = off_180203770;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_HOTKEY_REGISTRATION_MESSAGE>::Initialize((_QWORD *)this + 160, &v25, v8, (__int64)&v21);
  v21 = off_1802037A0;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_MOUSE_INPUT_MESSAGE>::Initialize((_QWORD *)this + 196, &v25, v9, (__int64)&v21);
  v21 = off_1802037D0;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE>::Initialize(
    (_QWORD *)this + 178,
    &v25,
    v10,
    (__int64)&v21);
  v21 = off_180203800;
  v22 = this;
  v23 = &v21;
  ((void (__fastcall *)(char *, __int64 *, __int64, __int64 (__fastcall ***)()))KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize)(
    (char *)this + 704,
    &v25,
    7LL,
    &v21);
  v21 = off_180203830;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<_MIT_VPTP_INTEROP_MESSAGE>::Initialize((_QWORD *)this + 214, &v25, v11, (__int64)&v21);
  v21 = off_180203860;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<MIT_INPUTSTREAM_ENDED_MESSAGE>::Initialize((_QWORD *)this + 232, &v25, v12, (__int64)&v21);
  v21 = off_180203890;
  v22 = this;
  v23 = &v21;
  KernelInputConnection<MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::Initialize(
    (_QWORD *)this + 250,
    &v25,
    v13,
    (__int64)&v21);
  v14 = *((_QWORD *)this + 6);
  v15 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 72LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 54);
  v16 = v15(v14, (char *)this + 432);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x109,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v16,
      (int)v21);
  v17 = CursorNotificationProcessor::Initialize(
          (Win32kInterop *)((char *)this + 440),
          *((struct ICursorBroker **)this + 54));
  if ( v17 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x10A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v17,
      (int)v21);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v25);
  return 0LL;
}
