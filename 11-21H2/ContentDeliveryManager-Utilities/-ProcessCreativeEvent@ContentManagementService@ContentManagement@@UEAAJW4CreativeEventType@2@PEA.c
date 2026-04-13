/*
 * XREFs of ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180061BA0
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows::Internal::CNoResult_::Run @ 0x180063AA0 (Windows--Internal--COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510___ea_180063AA0.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FFC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004FFC0.c)
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___ @ 0x180052028 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___.c)
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@XZ @ 0x180054BF0 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@YA-AV-$shared_.c)
 *     ??1?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180056A60 (--1-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_T.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ??1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800580BC (--1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005A53C (-Destroy@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$.c)
 *     ?GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z @ 0x18005D92C (-GetEventCacheIfNeeded@ContentManagement@@YAJPEBGPEAPEAUICreativeEventReportedCache@1@@Z.c)
 *     ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x180065584 (-StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB.c)
 *     ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x18006575C (-StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180065B8C (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflec.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180065CA8 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@.c)
 *     ?_Reset0@?$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEAVCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEAV_Ref_count_base@2@@Z @ 0x1800696B0 (-_Reset0@-$_Ptr_base@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@QEAAXPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEvent(
        __int64 a1,
        unsigned int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v12; // rax
  int v13; // eax
  const unsigned __int16 *v14; // rdx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  ContentManagement *v18; // rax
  struct ContentManagement::ICreativeEventReportedCache **v19; // r8
  int EventCacheIfNeeded; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  HSTRING v23; // rdi
  __int64 v24; // rsi
  WCHAR *v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  const char *v28; // r9
  __int64 result; // rax
  int v30; // [rsp+20h] [rbp-358h]
  int v31; // [rsp+20h] [rbp-358h]
  __int64 v32; // [rsp+40h] [rbp-338h] BYREF
  unsigned __int16 v33[4]; // [rsp+48h] [rbp-330h] BYREF
  HSTRING string; // [rsp+50h] [rbp-328h] BYREF
  HSTRING v35; // [rsp+58h] [rbp-320h] BYREF
  __int64 v36; // [rsp+60h] [rbp-318h] BYREF
  __int64 v37[2]; // [rsp+68h] [rbp-310h] BYREF
  __int64 v38; // [rsp+78h] [rbp-300h] BYREF
  __int64 v39; // [rsp+80h] [rbp-2F8h]
  __int64 v40[5]; // [rsp+88h] [rbp-2F0h] BYREF
  _QWORD v41[4]; // [rsp+B0h] [rbp-2C8h] BYREF
  int v42; // [rsp+D0h] [rbp-2A8h]
  int *v43; // [rsp+D8h] [rbp-2A0h]
  int *v44; // [rsp+E0h] [rbp-298h]
  int v45; // [rsp+E8h] [rbp-290h] BYREF
  char v46; // [rsp+ECh] [rbp-28Ch]
  int v47; // [rsp+110h] [rbp-268h] BYREF
  const char *v48; // [rsp+118h] [rbp-260h]
  __int64 v49; // [rsp+120h] [rbp-258h]
  char v50; // [rsp+128h] [rbp-250h]
  __int64 v51; // [rsp+130h] [rbp-248h]
  _BYTE v52[152]; // [rsp+138h] [rbp-240h] BYREF
  __int64 v53; // [rsp+1D0h] [rbp-1A8h]
  __int128 v54; // [rsp+1D8h] [rbp-1A0h]
  __int64 v55; // [rsp+1E8h] [rbp-190h]
  _QWORD v56[4]; // [rsp+1F0h] [rbp-188h] BYREF
  int v57; // [rsp+210h] [rbp-168h]
  int *v58; // [rsp+218h] [rbp-160h]
  int *v59; // [rsp+220h] [rbp-158h]
  int v60; // [rsp+228h] [rbp-150h] BYREF
  char v61; // [rsp+22Ch] [rbp-14Ch]
  int v62; // [rsp+250h] [rbp-128h] BYREF
  const char *v63; // [rsp+258h] [rbp-120h]
  __int64 v64; // [rsp+260h] [rbp-118h]
  char v65; // [rsp+268h] [rbp-110h]
  __int64 v66; // [rsp+270h] [rbp-108h]
  _QWORD v67[20]; // [rsp+278h] [rbp-100h] BYREF
  __int128 v68; // [rsp+318h] [rbp-60h]
  __int64 v69; // [rsp+328h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+378h] [rbp+0h]

  string = a3;
  v35 = a4;
  v36 = a6;
  v56[1] = 0LL;
  v56[2] = v56;
  v56[3] = 0LL;
  v57 = 0;
  v58 = &v62;
  v59 = &v60;
  v60 = 0;
  v61 = 0;
  v65 = 0;
  v62 = 0;
  v63 = "CreativeEventActivity";
  v64 = 0LL;
  v66 = 1LL;
  v67[19] = 0LL;
  memset_0(v67, 0, 0x98uLL);
  v68 = 0LL;
  v69 = 0LL;
  v56[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::`vftable';
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v12 = WindowsGetStringRawBuffer(string, 0LL);
  try
  {
    CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity(
      (CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *)v56,
      v12,
      StringRawBuffer,
      a2);
    if ( a2 <= 0x12 )
    {
      v13 = 262162;
      if ( _bittest(&v13, a2) )
      {
        if ( WindowsGetStringLen(a5) )
        {
          if ( !a7 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              498LL,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              (const char *)0x80070057LL,
              v30);
          v41[1] = 0LL;
          v41[2] = v41;
          v41[3] = 0LL;
          v42 = 0;
          v43 = &v47;
          v44 = &v45;
          v45 = 0;
          v46 = 0;
          v50 = 0;
          v47 = 0;
          v48 = "LaunchUriActivity";
          v49 = 0LL;
          v51 = 1LL;
          v53 = 0LL;
          memset_0(v52, 0, sizeof(v52));
          v54 = 0LL;
          v55 = 0LL;
          v41[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::`vftable';
          v14 = WindowsGetStringRawBuffer(a5, 0LL);
          CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::StartActivity(
            (CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity *)v41,
            v14);
          v32 = 0LL;
          v15 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::QueryInterface(
                  a1 - 48,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  &v32);
          if ( v15 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              504LL,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              (const char *)(unsigned int)v15,
              v30);
          v16 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING))(*(_QWORD *)a7 + 24LL))(a7, v32, a5);
          if ( v16 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              505LL,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              (const char *)(unsigned int)v16,
              v30);
          wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v41);
          v17 = v32;
          if ( v32 )
          {
            v32 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          v41[0] = &CreativeFramework::Logging::ShellPlacementTelemetry::LaunchUriActivity::`vftable';
          wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v41);
          wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v41);
        }
      }
    }
    *(_QWORD *)v33 = 0LL;
    v18 = (ContentManagement *)WindowsGetStringRawBuffer(v35, 0LL);
    EventCacheIfNeeded = ContentManagement::GetEventCacheIfNeeded(v18, v33, v19);
    if ( EventCacheIfNeeded < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        512LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)EventCacheIfNeeded,
        v30);
    std::make_shared<ContentDeliveryManager::Background::CorrelationVectorWrapper>(&v38);
    *(_OWORD *)v37 = 0LL;
    v21 = v38;
    if ( v39 )
      _InterlockedIncrement((volatile signed __int32 *)(v39 + 8));
    std::_Ptr_base<ContentDeliveryManager::Background::CorrelationVectorWrapper>::_Reset0(v37, v21);
    v40[0] = (__int64)&v35;
    v40[1] = (__int64)&string;
    v40[2] = (__int64)&v36;
    v40[3] = (__int64)&a8;
    v22 = v36;
    v23 = string;
    v24 = *(_QWORD *)v33;
    v25 = (WCHAR *)WindowsGetStringRawBuffer(v35, 0LL);
    v26 = ContentManagement::ExecuteHandlerByEventPolicy__lambda_929976d9f769b9ae6bfa1e1f0592e0ca___(
            v25,
            v24,
            v23,
            a2,
            v22,
            (__int64)v40,
            v37);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        526LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v26,
        v31);
    wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v56);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v38);
    v27 = *(_QWORD *)v33;
    if ( *(_QWORD *)v33 )
    {
      *(_QWORD *)v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::~CreativeEventActivity((CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *)v56);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x213,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
                           v28);
  }
  return result;
}
