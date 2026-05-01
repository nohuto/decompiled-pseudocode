/*
 * XREFs of ??0BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18072EB30
 * Callers:
 *     ??$make_shared@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18071CFA0 (--$make_shared@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 * Callees:
 *     ??0ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180186304 (--0ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x1801DBA84 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     ??$make_shared@UBootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x180281308 (--$make_shared@UBootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@$$V@s.c)
 *     ?SetStateHandler@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UConnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@URecoveringState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@@8@@Z @ 0x1802846EC (-SetStateHandler@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV-$share.c)
 *     ??$make_shared@UBootConnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootConnectedState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18072E978 (--$make_shared@UBootConnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-AV-$.c)
 *     ??$make_shared@UBootConnectingState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootConnectingState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18072E9D0 (--$make_shared@UBootConnectingState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-AV-.c)
 *     ??$make_shared@UBootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18072EA28 (--$make_shared@UBootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-A.c)
 *     ??$make_shared@UBootRecoveringState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootRecoveringState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18072EA80 (--$make_shared@UBootRecoveringState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA-AV-.c)
 *     ??$make_shared@UBootUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@UBootUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x18072EAD8 (--$make_shared@UBootUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@$$V@std@@Y.c)
 */

// Hidden C++ exception states: #wind=24
winrt::Windows::Internal::Shell::implementation::BootConnectionHandler *__fastcall winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::BootConnectionHandler(
        winrt::Windows::Internal::Shell::implementation::BootConnectionHandler *this)
{
  _QWORD *v2; // rax
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 v14; // [rsp+48h] [rbp-69h] BYREF
  __int64 v15; // [rsp+50h] [rbp-61h]
  __int64 v16; // [rsp+58h] [rbp-59h] BYREF
  __int64 v17; // [rsp+60h] [rbp-51h]
  __int64 v18; // [rsp+68h] [rbp-49h] BYREF
  __int64 v19; // [rsp+70h] [rbp-41h]
  __int64 v20; // [rsp+78h] [rbp-39h] BYREF
  __int64 v21; // [rsp+80h] [rbp-31h]
  __int128 v22; // [rsp+88h] [rbp-29h] BYREF
  __int128 v23; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v24[2]; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD v25[2]; // [rsp+B8h] [rbp+7h] BYREF
  _QWORD v26[2]; // [rsp+C8h] [rbp+17h] BYREF
  _QWORD v27[2]; // [rsp+D8h] [rbp+27h] BYREF
  _QWORD v28[2]; // [rsp+E8h] [rbp+37h] BYREF
  _QWORD v29[2]; // [rsp+F8h] [rbp+47h] BYREF

  winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ConnectionHandler(this);
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::`vftable';
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl) )
  {
    v2 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootPhysicalDeviceAccessState,>(v28);
    v22 = *(_OWORD *)v2;
    *v2 = 0LL;
    v2[1] = 0LL;
    v3 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootRecoveringState,>(v27);
    v20 = *v3;
    v21 = v3[1];
    *v3 = 0LL;
    v3[1] = 0LL;
    v4 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootDisconnectedState,>(v26);
    v18 = *v4;
    v19 = v4[1];
    *v4 = 0LL;
    v4[1] = 0LL;
    v5 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectedState,>(v25);
    v16 = *v5;
    v17 = v5[1];
    *v5 = 0LL;
    v5[1] = 0LL;
    v6 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootUserInputNeededState,>(v24);
    v14 = *v6;
    v15 = v6[1];
    *v6 = 0LL;
    v6[1] = 0LL;
    v7 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectingState,>(v29);
    v23 = *(_OWORD *)v7;
    *v7 = 0LL;
    v7[1] = 0LL;
    winrt::Windows::Internal::Shell::implementation::ConnectionHandler::SetStateHandler(
      (__int64)this,
      &v23,
      &v14,
      &v16,
      &v18,
      &v20,
      &v22);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v23);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v29);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v14);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v24);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v16);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v25);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v18);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v26);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v20);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v27);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v22);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v28);
  }
  else
  {
    v23 = 0LL;
    v8 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootRecoveringState,>(v24);
    v14 = *v8;
    v15 = v8[1];
    *v8 = 0LL;
    v8[1] = 0LL;
    v9 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootDisconnectedState,>(v25);
    v16 = *v9;
    v17 = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    v10 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectedState,>(v26);
    v18 = *v10;
    v19 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    v11 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootUserInputNeededState,>(v27);
    v20 = *v11;
    v21 = v11[1];
    *v11 = 0LL;
    v11[1] = 0LL;
    v12 = std::make_shared<winrt::Windows::Internal::Shell::implementation::BootConnectingState,>(v28);
    v22 = *(_OWORD *)v12;
    *v12 = 0LL;
    v12[1] = 0LL;
    winrt::Windows::Internal::Shell::implementation::ConnectionHandler::SetStateHandler(
      (__int64)this,
      &v22,
      &v20,
      &v18,
      &v16,
      &v14,
      &v23);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v22);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v28);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v20);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v27);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v18);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v26);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v16);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v25);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v14);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)v24);
    tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v23);
  }
  return this;
}
