/*
 * XREFs of ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180196490
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180196100 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18003AD64 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180098EB0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180191E40 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x180195768 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x18019741C (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x1801975C8 (-RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180199150 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateControllerVirtualKeyMappingEnabled@ControllerProcessor@@AEAAXXZ @ 0x180199254 (-UpdateControllerVirtualKeyMappingEnabled@ControllerProcessor@@AEAAXXZ.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x18019A7C4 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Initialize(ControllerProcessor *this)
{
  char v2; // r15
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *); // rsi
  HKEY v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *); // rsi
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *); // rsi
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 (__fastcall *)(__int64), ControllerProcessor *, char *); // rsi
  int v18; // eax
  ControllerNavigationManager *ControllerNavigationManager; // rax
  int v20; // eax
  HKEY v21; // rcx
  HKEY v22; // rcx
  HKEY v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rsi
  __int64 (__fastcall *v28)(__int64, char *); // rdi
  int v29; // eax
  int v30; // [rsp+20h] [rbp-10h]
  int v31; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v33; // [rsp+68h] [rbp+38h] BYREF
  __int64 v34; // [rsp+70h] [rbp+40h] BYREF
  __int64 v35; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v34);
  v3 = CoreUICreate(&v34);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 244LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v34);
    return v4;
  }
  v6 = v34;
  v7 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v34 + 144LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 36);
  v3 = v7(v6, ControllerProcessor::OnAutoRepeatTimerStatic, this, (char *)this + 288);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 249LL;
    goto LABEL_5;
  }
  InjectionDevice::Attach((ControllerProcessor *)((char *)this + 1272));
  InjectionDevice::Attach((ControllerProcessor *)((char *)this + 5952));
  ControllerProcessor::RefreshCursorSpeedRegistrySettings(this);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 969);
  RegistryWatcher::Create(
    v9,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
    this,
    (void (*)(void *, HKEY))lambda_b12fa00c1928b9bf49ed577602750a33_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 969);
  v10 = v34;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v34 + 144LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 37);
  v12 = v11(v10, ControllerProcessor::OnSendGameControllerAsPointerAndManipulationStatic, this, (char *)this + 296);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x10E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v12,
      v30);
  v13 = v34;
  v14 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v34 + 144LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 961);
  v15 = v14(v13, lambda_9acb6a30c2b0d5ba7ab65b24b73eef63_::_lambda_invoker_cdecl_, this, (char *)this + 7688);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x116,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v15,
      v30);
  v16 = v34;
  v17 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64), ControllerProcessor *, char *))(*(_QWORD *)v34 + 144LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 962);
  v18 = v17(v16, lambda_8e01662f3c9310d444dda3dc493b17b5_::_lambda_invoker_cdecl_, this, (char *)this + 7696);
  if ( v18 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x11E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v18,
      v30);
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v20 = ControllerNavigationManager::RegisterControllerProcessor(
          ControllerNavigationManager,
          **((_DWORD **)this + 5),
          this);
  if ( v20 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x120,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v20,
      v30);
  ControllerProcessor::RefreshCursorMagnetismRegistrySettings(this);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 970);
  RegistryWatcher::Create(
    v21,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
    this,
    (void (*)(void *, HKEY))lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 970);
  ControllerProcessor::UpdateControllerVirtualKeyMappingEnabled(this);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 972);
  RegistryWatcher::Create(
    v22,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\ControllerToVKMapping",
    this,
    (void (*)(void *, HKEY))lambda_e82e8f5a3f31cf71ee9f5897f2a02386_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 972);
  if ( IsEdition(8778LL) )
  {
    ControllerProcessor::UpdateControllerNavigationMode(this);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 971);
    RegistryWatcher::Create(
      v23,
      L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
      this,
      (void (*)(void *, HKEY))lambda_b5dea4f4b779368f4d35b9f1e7c211f6_::_lambda_invoker_cdecl_,
      (struct RegistryWatcher **)this + 971);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 973);
    v26 = ViewMenuChordedKeyHandler::Create(v24, this, v25, (char *)this + 7784);
    if ( v26 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x151,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v26,
        v31);
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  v28 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v27 + 72LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 939);
  v29 = v28(v27, (char *)this + 7512);
  if ( v29 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x154,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v29,
      v31);
  v35 = 0LL;
  v33 = 0;
  RtlGetDeviceFamilyInfoEnum(&v35, &v33, 0LL);
  if ( v33 == 5 || (unsigned int)(v33 - 11) <= 1 )
    v2 = 1;
  *((_BYTE *)this + 7521) = v2;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v34);
  return 0LL;
}
