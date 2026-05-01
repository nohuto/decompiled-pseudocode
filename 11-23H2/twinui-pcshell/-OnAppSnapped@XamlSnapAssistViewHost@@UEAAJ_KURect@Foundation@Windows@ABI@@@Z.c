/*
 * XREFs of ?OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z @ 0x18076CF90
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$capture@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@P87@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@_EAEBQEAU8@@winrt@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@0@$$QEAPEAUIAppViewDataSourceAdapter@@$$QEAP86@EAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@_EAEBQEAU7@@Z @ 0x180769528 (--$capture@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIAppViewDataSou.c)
 *     ?get@ViewModel@__ISnapAssistPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSnapAssistViewModel@3456@XZ @ 0x18076F294 (-get@ViewModel@__ISnapAssistPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsIntern.c)
 *     ?DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z @ 0x1807894FC (-DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z.c)
 *     ?ItemSnapped@SnapAssistState@@QEAA?AU?$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@PEAUHWND__@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBURect@Foundation@9winrt@@@Z @ 0x18078B798 (-ItemSnapped@SnapAssistState@@QEAA-AU-$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@.c)
 *     ?UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUISwitchItemDataSource@Multitasking@5Internal@Windows@winrt@@@Z @ 0x18078BE88 (-UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Composable.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlSnapAssistViewHost::OnAppSnapped(__int64 a1, __int64 a2, __int128 *a3, const char *a4)
{
  __int128 *v4; // rsi
  __int64 v5; // rdi
  __int64 *v6; // r14
  winrt::Windows::Foundation::IUnknown *v7; // rax
  const char *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  __int64 (__fastcall *v17)(__int64); // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF
  int v20; // [rsp+60h] [rbp-28h] BYREF
  _QWORD v21[4]; // [rsp+68h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v25; // [rsp+A8h] [rbp+20h] BYREF

  try
  {
    v4 = a3;
    v5 = a1;
    v6 = (__int64 *)(a1 + 560);
    *(_QWORD *)&v19 = a1 + 560;
    if ( *(_QWORD *)(a1 + 560) )
    {
      try
      {
        v16 = a2;
        v25 = 0LL;
        v17 =  IAppViewDataSourceAdapter::`vcall'{40,{flat}};
        v18 = *(_QWORD *)(a1 + 136);
        v7 = (winrt::Windows::Foundation::IUnknown *)___capture_UISwitchItem_Multitasking_ComposableShell_Internal_Windows_winrt__PEAUIAppViewDataSourceAdapter__P87_EAAJPEAUHWND____AEBU_GUID__PEAPEAX__EAEBQEAU8__winrt__YA_AUISwitchItem_Multitasking_ComposableShell_Internal_Windows_0___QEAPEAUIAppViewDataSourceAdapter____QEAP86_EAAJPEAUHWND____AEBU_GUID__PEAPEAX__EAEBQEAU7__Z(
                                                       &v15,
                                                       &v18,
                                                       (__int64 (__fastcall **)(_QWORD, _QWORD, void *, __int64 *))&v17,
                                                       &v16);
        winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)&v25, v7);
        if ( v15 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x20B,
          (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
          v8);
        v5 = a1;
        v4 = a3;
        v6 = (__int64 *)v19;
      }
      v19 = *v4;
      SnapAssistState::ItemSnapped(*v6, (unsigned int)&v20, v16, (unsigned int)&v25, (__int64)&v19);
      if ( v20 == 1 )
      {
        v10 = __abi_winrt_cast_to(
                0,
                *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(v5 + 144),
                (__int64)&_uuidof__AVSnapAssist_Switcher_Experiences_ComposableShell_WindowsInternal__);
        v11 = __abi_winrt_ptr_ctor(v10);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        if ( v11 )
        {
          v12 = *v6;
          v13 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistPublicNonVirtuals::ViewModel::get(v11);
          *(_QWORD *)&v19 = v13;
          SnapAssistState::UpdateViewModel(v12, v13, v21);
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      else if ( (unsigned int)(v20 - 2) <= 1 )
      {
        v9 = *(_QWORD *)(v5 + 96);
        if ( v9 )
          GuidedSnapAssistViewController::DismissViewAnimated(v9 - 8, 1LL);
      }
      if ( v21[0] )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v21);
      if ( v25 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x224,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           a4);
  }
  return result;
}
