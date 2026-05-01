/*
 * XREFs of ??0SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18009E8C8
 * Callers:
 *     ??$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@YA?AV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@0@AEAV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@@Z @ 0x18017FBA0 (--$make_shared@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAV-$share.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180186304 (--0ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAA@AEBV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1801C518C (--0SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAA@AEBV-$shared_ptr@URe.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     ?SetStateHandler@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UUserInputNeededState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UConnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UDisconnectedState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@URecoveringState@implementation@Shell@Internal@Windows@winrt@@@8@AEBV?$shared_ptr@UPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@@8@@Z @ 0x1802846EC (-SetStateHandler@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV-$share.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchConnectionHandler(
        __int64 a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  _QWORD *v5; // r9
  __int64 v6; // r10
  _DWORD *v7; // rax
  _QWORD *v8; // r9
  __int64 v9; // r10
  _QWORD *v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char *v16; // [rsp+48h] [rbp-49h] BYREF
  std::_Ref_count_base *v17; // [rsp+50h] [rbp-41h]
  __int64 v18; // [rsp+58h] [rbp-39h] BYREF
  std::_Ref_count_base *v19; // [rsp+60h] [rbp-31h]
  __int64 v20; // [rsp+68h] [rbp-29h] BYREF
  std::_Ref_count_base *v21; // [rsp+70h] [rbp-21h]
  char *v22; // [rsp+78h] [rbp-19h] BYREF
  std::_Ref_count_base *v23; // [rsp+80h] [rbp-11h]
  __int64 v24; // [rsp+88h] [rbp-9h] BYREF
  std::_Ref_count_base *v25; // [rsp+90h] [rbp-1h]
  _OWORD v26[3]; // [rsp+98h] [rbp+7h] BYREF
  _DWORD *v27; // [rsp+108h] [rbp+77h]
  _DWORD *v28; // [rsp+108h] [rbp+77h]
  _DWORD *v29; // [rsp+108h] [rbp+77h]

  winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ConnectionHandler((winrt::Windows::Internal::Shell::implementation::ConnectionHandler *)a1);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)a1 = &winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::`vftable';
  v4 = operator new(0x78uLL);
  *(_OWORD *)v4 = 0LL;
  v4[2] = 1;
  v4[3] = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchConnectedState>::`vftable';
  *((_QWORD *)v4 + 2) = &winrt::Windows::Internal::Shell::implementation::ConnectedState::`vftable';
  winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SwitchConnectStateBase(v4 + 6, a2);
  *v5 = &winrt::Windows::Internal::Shell::implementation::SwitchConnectedState::`vftable';
  v5[12] = 0LL;
  *(_QWORD *)(a1 + 88) = v5;
  *(_QWORD *)(a1 + 96) = v6;
  v7 = operator new(0x38uLL);
  *(_OWORD *)v7 = 0LL;
  v7[2] = 1;
  v7[3] = 1;
  *(_QWORD *)v7 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchUserInputNeededState>::`vftable';
  *((_QWORD *)v7 + 2) = &winrt::Windows::Internal::Shell::implementation::ConnectedState::`vftable';
  winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SwitchConnectStateBase(v7 + 6, a2);
  *v8 = &winrt::Windows::Internal::Shell::implementation::SwitchUserInputNeededState::`vftable';
  *(_QWORD *)(a1 + 104) = v8;
  *(_QWORD *)(a1 + 112) = v9;
  v27 = operator new(0x38uLL);
  *(_OWORD *)v27 = 0LL;
  v27[2] = 1;
  v27[3] = 1;
  *(_QWORD *)v27 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchUserInputNeededState>::`vftable';
  *((_QWORD *)v27 + 2) = &winrt::Windows::Internal::Shell::implementation::ConnectedState::`vftable';
  winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SwitchConnectStateBase(v27 + 6, a2);
  *v10 = &winrt::Windows::Internal::Shell::implementation::SwitchRecoveringState::`vftable';
  *(_QWORD *)(a1 + 120) = v10;
  *(_QWORD *)(a1 + 128) = v11;
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    (_QWORD *)(a1 + 136),
    a2);
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  v26[0] = 0LL;
  v12 = *(_QWORD *)(a1 + 128);
  if ( v12 )
    _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
  v24 = *(_QWORD *)(a1 + 120);
  v25 = *(std::_Ref_count_base **)(a1 + 128);
  v28 = operator new(0x58uLL);
  *(_OWORD *)v28 = 0LL;
  v28[2] = 1;
  v28[3] = 1;
  *(_QWORD *)v28 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState>::`vftable';
  memset_0(v28 + 4, 0, 0x48uLL);
  *((_QWORD *)v28 + 2) = &winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState::`vftable';
  *((_QWORD *)v28 + 10) = 0LL;
  v22 = (char *)(v28 + 4);
  v23 = (std::_Ref_count_base *)v28;
  v26[1] = 0LL;
  v13 = *(_QWORD *)(a1 + 96);
  if ( v13 )
    _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
  v20 = *(_QWORD *)(a1 + 88);
  v21 = *(std::_Ref_count_base **)(a1 + 96);
  v14 = *(_QWORD *)(a1 + 112);
  if ( v14 )
    _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
  v18 = *(_QWORD *)(a1 + 104);
  v19 = *(std::_Ref_count_base **)(a1 + 112);
  v29 = operator new(0x18uLL);
  *(_OWORD *)v29 = 0LL;
  v29[2] = 1;
  v29[3] = 1;
  *(_QWORD *)v29 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootConnectingState>::`vftable';
  *((_QWORD *)v29 + 2) = &winrt::Windows::Internal::Shell::implementation::SwitchConnectingState::`vftable';
  v16 = (char *)(v29 + 4);
  v17 = (std::_Ref_count_base *)v29;
  v26[2] = 0LL;
  winrt::Windows::Internal::Shell::implementation::ConnectionHandler::SetStateHandler(
    a1,
    (unsigned int)&v16,
    (unsigned int)&v18,
    (unsigned int)&v20,
    (__int64)&v22,
    (__int64)&v24,
    (__int64)v26);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  if ( v25 )
    std::_Ref_count_base::_Decref(v25);
  tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>(v26);
  return a1;
}
