/*
 * XREFs of ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010ED44
 * Callers:
 *     std::call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___ @ 0x18010EBB4 (std--call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___.c)
 * Callees:
 *     ?EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x180085D5C (-EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098DD0 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BCDCC (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18010DF78 (-LoadMetadata@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAA.c)
 *     ?LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18010EC90 (-LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 *     ?ensure_data@?$tip_test@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@@details@tip@@@std@@XZ @ 0x18010EEDC (-ensure_data@-$tip_test@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@@tip@@AEBAAEAV.c)
 *     ??0?$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18010EF9C (--0-$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 *     ??1CreateXamlApplication@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x18010F040 (--1CreateXamlApplication@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@CreateXamlApplication@XamlExplorerHostTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18010F06C (--$-0$$V@CreateXamlApplication@XamlExplorerHostTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18011050C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

// Hidden C++ exception states: #wind=5
winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::XamlApplication(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication *this)
{
  _QWORD *v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  std::_Ref_count_base *v10[2]; // [rsp+20h] [rbp-E0h] BYREF
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication *v11; // [rsp+30h] [rbp-D0h]
  void **v12; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+58h] [rbp-A8h]
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v16; // [rsp+70h] [rbp-90h]
  __int128 v17; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v18[320]; // [rsp+90h] [rbp-70h] BYREF

  v11 = this;
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>();
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  memset_0(v18, 0, sizeof(v18));
  XamlExplorerHostTelemetry::CreateXamlApplication::CreateXamlApplication(v18);
  *(_OWORD *)v10 = 0LL;
  v2 = (_QWORD *)tip::tip_test<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>::ensure_data(v10);
  tip::details::test_common_data<0>::start(*v2 + 8LL, &v17);
  v12 = &tip::test_watcher<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v13,
    (struct wil::details::IFailureCallback *)&v12,
    0LL,
    v10[0] != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v15,
    v10);
  if ( v10[1] )
    std::_Ref_count_base::_Decref(v10[1]);
  v3 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
         v10,
         &v15);
  v4 = *v3;
  *v3 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = v4;
  v5 = v3[1];
  v3[1] = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = v5;
  if ( v10[1] )
    std::_Ref_count_base::_Decref(v10[1]);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::LoadWinUIFrameworkPackage(this);
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::EnableSystemResourceManagerForCurrentProcess(v6);
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::LoadMetadata(this, v7);
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
    tip::details::test_common_data<0>::complete(v8 + 8);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
  XamlExplorerHostTelemetry::CreateXamlApplication::~CreateXamlApplication((XamlExplorerHostTelemetry::CreateXamlApplication *)v18);
  return this;
}
