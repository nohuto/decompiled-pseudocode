/*
 * XREFs of ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800CB638
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::Run @ 0x18005D8D0 (Windows--Internal--COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2___ea_18005D8D0.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800C694C (--0-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_T.c)
 *     ??0?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C6A04 (--0-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAA_ea_1800C6A04.c)
 *     ??0LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800C7008 (--0LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800C7398 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800C73C4 (--1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CAB98 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 *     ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x1800CC364 (-StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800CC46C (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        HSTRING a2)
{
  const wchar_t *StringRawBuffer; // rbx
  struct WindowsUdk::UI::StartScreen::IStartScreenManagerExtensionStatics **v4; // rdx
  wil *v5; // rcx
  unsigned int v6; // r8d
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-328h] BYREF
  unsigned int v9; // [rsp+20h] [rbp-308h]
  _BYTE v10[96]; // [rsp+30h] [rbp-2F8h] BYREF
  _QWORD v11[40]; // [rsp+90h] [rbp-298h] BYREF
  _QWORD v12[40]; // [rsp+1D0h] [rbp-158h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, 0LL);
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v12);
  v12[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StartActivity(
    (CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v12,
    StringRawBuffer);
  try
  {
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::LayoutResolver(
      (CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *)v10,
      v4);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v11,
      (__int64)v12);
    v11[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings(
      (__int64)v10,
      (HSTRING)this,
      (CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v11);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v12,
      0LL);
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::~LayoutResolver((CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *)v10);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v12);
    result = 0LL;
  }
  catch ( ... )
  {
    v9 = wil::ResultFromCaughtException(v5, &v8, v6);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v12,
      v9);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v12);
    return v9;
  }
  return result;
}
