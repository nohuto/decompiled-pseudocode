/*
 * XREFs of ?ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804F3AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180093360 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802378EC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??1VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x1804F32B0 (--1VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ?ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F3D3C (-ControlLostHelper@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?CreateFromPropertySet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x1804F4588 (-CreateFromPropertySet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F4F4C (-HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXW4SHELL_POSITIONER_TYPE@@@Z @ 0x1804F681C (-StartActivity@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXW4SHELL_.c)
 *     ?Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F7204 (-Stop@VAPositioner_ControlLostActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall VoiceAssistantPositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  int v8; // eax
  char v9; // bl
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  int (__fastcall *v13)(__int64, _QWORD, GUID *, struct IUnknown **); // rbx
  VoiceAssistantPositioner *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-E0h]
  struct IUnknown *v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v23; // [rsp+60h] [rbp-A0h]
  _QWORD v24[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"VAPositioner_ControlLostActivity");
  v24[0] = &VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::StartActivity(v24, a3);
  v20 = 0LL;
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromPropertySet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v20);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1D4,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v8,
      v18);
  v9 = *(_BYTE *)(a1 + 305);
  v23 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"VoicePositionerMinimising",
    0x1Au,
    0x19u);
  v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
          v23,
          v10,
          v9);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1D5,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v11,
      v18);
  *(_BYTE *)(a1 + 305) = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 24LL))(a2, &v21);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DB,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v12);
  if ( v21 != 1 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1DC,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)0x80070057LL);
  v19 = 0LL;
  v13 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
  if ( v13(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v19) >= 0 )
  {
    if ( !a3 )
    {
      if ( (unsigned int)SHIsSameObject(v19, *(struct IUnknown **)(a1 + 256)) )
      {
        v15 = VoiceAssistantPositioner::HideView(v14, (struct IApplicationView *)v19);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1E5,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
            (const char *)(unsigned int)v15);
      }
    }
    v16 = VoiceAssistantPositioner::ControlLostHelper(
            (VoiceAssistantPositioner *)(a1 - 120),
            (struct IApplicationView *)v19);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1E7,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v16);
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::Stop(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity *)v24,
    (struct IApplicationView *)v19);
  v17 = v20;
  v20 = 0LL;
  *a4 = v17;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity::~VAPositioner_ControlLostActivity((VoiceAssistantPositionerTelemetry::VAPositioner_ControlLostActivity *)v24);
}
