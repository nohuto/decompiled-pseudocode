/*
 * XREFs of ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017705C
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180176D90 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180027EEC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ @ 0x18004C404 (--1-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180081C60 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180172C44 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x1801763F8 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180177FE8 (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180178194 (-RefreshCursorSpeedRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180179D30 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?UpdateControllerVirtualKeyMappingEnabled@ControllerProcessor@@AEAAXXZ @ 0x180179E34 (-UpdateControllerVirtualKeyMappingEnabled@ControllerProcessor@@AEAAXXZ.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x18017B464 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Initialize(ControllerProcessor *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *); // rsi
  HKEY v7; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *); // rsi
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *); // rsi
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 (__fastcall *)(__int64), ControllerProcessor *, char *); // rsi
  int v16; // eax
  ControllerNavigationManager *ControllerNavigationManager; // rax
  int v18; // eax
  HKEY v19; // rcx
  HKEY v20; // rcx
  HKEY v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(__int64, char *); // rdi
  int v27; // eax
  bool v28; // cl
  int v30; // [rsp+20h] [rbp-10h]
  int v31; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v33; // [rsp+68h] [rbp+38h] BYREF
  __int64 v34; // [rsp+70h] [rbp+40h] BYREF
  __int64 v35; // [rsp+78h] [rbp+48h] BYREF

  v34 = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v34);
  v2 = CoreUICreate(&v34);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 244LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_16;
  }
  v5 = v34;
  v6 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v34 + 144LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 36);
  v2 = v6(v5, ControllerProcessor::OnAutoRepeatTimerStatic, this, (char *)this + 288);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 249LL;
    goto LABEL_5;
  }
  InjectionDevice::Attach((ControllerProcessor *)((char *)this + 1272));
  InjectionDevice::Attach((ControllerProcessor *)((char *)this + 5952));
  ControllerProcessor::RefreshCursorSpeedRegistrySettings(this);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 969);
  RegistryWatcher::Create(
    v7,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorSpeed",
    this,
    (void (*)(void *, HKEY))lambda_b12fa00c1928b9bf49ed577602750a33_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 969);
  v8 = v34;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), ControllerProcessor *, char *))(*(_QWORD *)v34 + 144LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 37);
  v10 = v9(v8, ControllerProcessor::OnSendGameControllerAsPointerAndManipulationStatic, this, (char *)this + 296);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x10E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v10,
      v30);
  v11 = v34;
  v12 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(ControllerProcessor *), ControllerProcessor *, char *))(*(_QWORD *)v34 + 144LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 961);
  v13 = v12(v11, lambda_9acb6a30c2b0d5ba7ab65b24b73eef63_::_lambda_invoker_cdecl_, this, (char *)this + 7688);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x116,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v13,
      v30);
  v14 = v34;
  v15 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64), ControllerProcessor *, char *))(*(_QWORD *)v34 + 144LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 962);
  v16 = v15(v14, lambda_8e01662f3c9310d444dda3dc493b17b5_::_lambda_invoker_cdecl_, this, (char *)this + 7696);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x11E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v16,
      v30);
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v18 = ControllerNavigationManager::RegisterControllerProcessor(
          ControllerNavigationManager,
          **((_DWORD **)this + 5),
          this);
  if ( v18 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x120,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v18,
      v30);
  ControllerProcessor::RefreshCursorMagnetismRegistrySettings(this);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 970);
  RegistryWatcher::Create(
    v19,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
    this,
    (void (*)(void *, HKEY))lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 970);
  ControllerProcessor::UpdateControllerVirtualKeyMappingEnabled(this);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 972);
  RegistryWatcher::Create(
    v20,
    L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\ControllerToVKMapping",
    this,
    (void (*)(void *, HKEY))lambda_e82e8f5a3f31cf71ee9f5897f2a02386_::_lambda_invoker_cdecl_,
    (struct RegistryWatcher **)this + 972);
  if ( IsEdition(8778LL) )
  {
    ControllerProcessor::UpdateControllerNavigationMode(this);
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 971);
    RegistryWatcher::Create(
      v21,
      L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\PointerModeOnDesktop",
      this,
      (void (*)(void *, HKEY))lambda_b5dea4f4b779368f4d35b9f1e7c211f6_::_lambda_invoker_cdecl_,
      (struct RegistryWatcher **)this + 971);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 973);
    v24 = ViewMenuChordedKeyHandler::Create(v22, this, v23, (char *)this + 7784);
    if ( v24 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x151,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v24,
        v31);
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  v26 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 72LL);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 939);
  v27 = v26(v25, (char *)this + 7512);
  if ( v27 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x154,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v27,
      v31);
  v35 = 0LL;
  v33 = 0;
  RtlGetDeviceFamilyInfoEnum(&v35, &v33, 0LL);
  v28 = 1;
  if ( v33 != 5 )
    v28 = (unsigned int)(v33 - 11) <= 1;
  *((_BYTE *)this + 7521) = v28;
  v3 = 0;
LABEL_16:
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v34);
  return v3;
}
