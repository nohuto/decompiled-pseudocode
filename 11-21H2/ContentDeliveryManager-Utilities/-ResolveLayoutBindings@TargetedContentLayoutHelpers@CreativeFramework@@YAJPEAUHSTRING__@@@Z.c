/*
 * XREFs of ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800E2404
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::Run @ 0x180063960 (Windows--Internal--COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2___ea_180063960.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C544 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@A.c)
 *     ?GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@@Z @ 0x1800BF590 (-GetStartScreenManagerExtensionStatics@StartDocked@@YAJPEAPEAUIStartScreenManagerExtensionStatic.c)
 *     ?ShouldUseStartDocked@StartDocked@@YA_NXZ @ 0x1800C11D0 (-ShouldUseStartDocked@StartDocked@@YA_NXZ.c)
 *     ??0?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800DBC7C (--0-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_T.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800DC614 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x1800DC740 (--1LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E0F64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 *     ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x1800E38BC (-StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E3A80 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        HSTRING a2)
{
  const wchar_t *StringRawBuffer; // rbx
  unsigned int v4; // r8d
  StartDocked *v5; // rcx
  struct WindowsUdk::UI::StartScreen::IStartScreenManagerExtensionStatics **v6; // rdx
  __int64 v7; // rcx
  int StartScreenManagerExtensionStatics; // eax
  wil *v9; // rcx
  unsigned int v10; // r8d
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-358h] BYREF
  int v13[2]; // [rsp+20h] [rbp-338h]
  int v14; // [rsp+40h] [rbp-318h] BYREF
  char v15; // [rsp+44h] [rbp-314h]
  __int64 v16; // [rsp+48h] [rbp-310h]
  _QWORD v17[2]; // [rsp+50h] [rbp-308h] BYREF
  __int128 v18; // [rsp+60h] [rbp-2F8h]
  __int64 v19; // [rsp+70h] [rbp-2E8h]
  __int64 v20; // [rsp+78h] [rbp-2E0h]
  __int128 v21; // [rsp+80h] [rbp-2D8h]
  __int128 v22; // [rsp+90h] [rbp-2C8h]
  __int64 v23; // [rsp+A0h] [rbp-2B8h]
  __int64 v24; // [rsp+A8h] [rbp-2B0h] BYREF
  signed __int32 v25; // [rsp+B0h] [rbp-2A8h] BYREF
  _QWORD v26[41]; // [rsp+B8h] [rbp-2A0h] BYREF
  _QWORD v27[4]; // [rsp+200h] [rbp-158h] BYREF
  int v28; // [rsp+220h] [rbp-138h]
  int *v29; // [rsp+228h] [rbp-130h]
  int *v30; // [rsp+230h] [rbp-128h]
  int v31; // [rsp+238h] [rbp-120h] BYREF
  char v32; // [rsp+23Ch] [rbp-11Ch]
  int v33; // [rsp+260h] [rbp-F8h] BYREF
  const char *v34; // [rsp+268h] [rbp-F0h]
  __int64 v35; // [rsp+270h] [rbp-E8h]
  char v36; // [rsp+278h] [rbp-E0h]
  __int64 v37; // [rsp+280h] [rbp-D8h]
  _BYTE v38[152]; // [rsp+288h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+320h] [rbp-38h]
  __int128 v40; // [rsp+328h] [rbp-30h]
  __int64 v41; // [rsp+338h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, 0LL);
  v27[1] = 0LL;
  v27[2] = v27;
  v27[3] = 0LL;
  v28 = 0;
  v29 = &v33;
  v30 = &v31;
  v31 = 0;
  v32 = 0;
  v36 = 0;
  v33 = 0;
  v34 = "LayoutResolver";
  v35 = 0LL;
  v37 = 1LL;
  v39 = 0LL;
  memset_0(v38, 0, sizeof(v38));
  v40 = 0LL;
  v41 = 0LL;
  v27[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::StartActivity(
    (CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v27,
    StringRawBuffer);
  try
  {
    v17[0] = 0LL;
    v17[1] = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v4 = `wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl & 2) == 0 )
    {
      v16 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest03>::GetCachedFeatureEnabledState(
                         &`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl,
                         &v25);
      v4 = v16;
    }
    v14 = 0;
    v15 = 3;
    wil::details::ReportUsageToService(
      (__int64)&unk_1801AF1B8,
      0x1C563ECu,
      (v4 >> 8) & 1,
      (v4 >> 9) & 1,
      (const struct FEATURE_LOGGED_TRAITS *)&v14,
      1,
      0);
    if ( StartDocked::ShouldUseStartDocked(v5) )
    {
      v7 = v24;
      v24 = 0LL;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      StartScreenManagerExtensionStatics = StartDocked::GetStartScreenManagerExtensionStatics((StartDocked *)&v24, v6);
      if ( StartScreenManagerExtensionStatics < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          80LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)StartScreenManagerExtensionStatics,
          v13[0]);
    }
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v26,
      v27);
    v26[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings(
      (__int64)v17,
      (HSTRING)this,
      (CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v26);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v27,
      0LL);
    CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::~LayoutResolver((CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *)v17);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v27);
    result = 0LL;
  }
  catch ( ... )
  {
    v14 = wil::ResultFromCaughtException(v9, &v12, v10);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v27,
      (unsigned int)v14);
    CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver((CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)v27);
    return (unsigned int)v14;
  }
  return result;
}
