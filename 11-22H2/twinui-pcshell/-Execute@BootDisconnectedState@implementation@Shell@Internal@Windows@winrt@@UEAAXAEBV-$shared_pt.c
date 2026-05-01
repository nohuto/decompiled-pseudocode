/*
 * XREFs of ?Execute@BootDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072F300
 * Callers:
 *     <none>
 * Callees:
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180096F40 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180096F40.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180182AE4 (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ @ 0x180276C00 (--1-$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??C?$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA?AV?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@1@XZ @ 0x1806006DC (--C-$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA-AV-$test_data_control@U_tip_VDSlide.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA?A_PXZ @ 0x180702AF4 (--$open_and_watch_errors@V-$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??C?$test_data_control@U_tip_BootToCloudPCTest@@@tip@@QEBAPEAU_tip_BootToCloudPCTest@@XZ @ 0x18070541C (--C-$test_data_control@U_tip_BootToCloudPCTest@@@tip@@QEBAPEAU_tip_BootToCloudPCTest@@XZ.c)
 *     ?DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBW4DismissalReason@TransitionScreen@CloudDesktop@3456@@Z @ 0x180735D40 (-DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXA.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x180736C60 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::BootDisconnectedState::Execute(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  _WORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  _OWORD *v8; // rdi
  _QWORD *v9; // rax
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  _WORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rax
  _OWORD *v16; // rdi
  _QWORD *v17; // rax
  FARPROC v18; // rax
  HMODULE v19; // rax
  int v20; // [rsp+20h] [rbp-99h] BYREF
  __int64 v21[3]; // [rsp+28h] [rbp-91h] BYREF
  _BYTE v22[8]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v23[24]; // [rsp+48h] [rbp-71h] BYREF
  int v24; // [rsp+60h] [rbp-59h]
  __int64 v25; // [rsp+70h] [rbp-49h]
  std::_Ref_count_base *v26; // [rsp+78h] [rbp-41h]
  _BYTE v27[32]; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v28[9]; // [rsp+A0h] [rbp-19h] BYREF
  _WORD v29[3]; // [rsp+EAh] [rbp+31h] BYREF

  if ( a3 )
  {
    if ( a3 == 1 )
      return;
    if ( a3 != 2 )
    {
      v3 = a3 - 98;
      if ( (unsigned int)v3 > 1 )
        winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(v3, a3, 3LL);
      return;
    }
    tip::open_and_watch_errors<tip::tip_test<_tip_BootToCloudPCTest>>((struct wil::details::IFailureCallback *)v22);
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v22) )
    {
      v4 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v29, 2u);
      std::wstring::wstring((__int64)v27, v4, v29);
      v5 = std::operator+<unsigned short>(v28, (__int64)L"BootDisconnectedState::Execute, Client Disconnected ", v27);
      v6 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v22, v21);
      v7 = tip::test_data_control<_tip_BootToCloudPCTest>::operator->(v6);
      v8 = (_OWORD *)(v7 + 24);
      if ( (_QWORD *)(v7 + 24) != v5 )
      {
        std::wstring::_Tidy_deallocate(v7 + 24);
        *v8 = *(_OWORD *)v5;
        v8[1] = *((_OWORD *)v5 + 1);
        v5[2] = 0LL;
        v5[3] = 7LL;
        *(_WORD *)v5 = 0;
      }
      tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v21);
      std::wstring::_Tidy_deallocate((__int64)v28);
      std::wstring::_Tidy_deallocate((__int64)v27);
      v9 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v22, v21);
      *(_BYTE *)(tip::test_data_control<_tip_BootToCloudPCTest>::operator->(v9) + 13) = 1;
      tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v21);
      tip::details::test_common_data<1>::complete(v25 + 8);
      ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting[0];
      if ( `TestControlReporting'::`2'::s_pfnTestControlReporting[0]
        || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
            ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
            (`TestControlReporting'::`2'::s_pfnTestControlReporting[0] = (__int64)ProcAddress) != 0) )
      {
        ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
      }
    }
  }
  else
  {
    v20 = 5;
    winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::DismissTransitionScreen(0LL, a2, &v20, 0LL);
    tip::open_and_watch_errors<tip::tip_test<_tip_BootToCloudPCTest>>((struct wil::details::IFailureCallback *)v22);
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v22) )
    {
      v12 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v29, 0);
      std::wstring::wstring((__int64)v27, v12, v29);
      v13 = std::operator+<unsigned short>(v28, (__int64)L"BootDisconnectedState::Execute, Client Disconnected ", v27);
      v14 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v22, v21);
      v15 = tip::test_data_control<_tip_BootToCloudPCTest>::operator->(v14);
      v16 = (_OWORD *)(v15 + 24);
      if ( (_QWORD *)(v15 + 24) != v13 )
      {
        std::wstring::_Tidy_deallocate(v15 + 24);
        *v16 = *(_OWORD *)v13;
        v16[1] = *((_OWORD *)v13 + 1);
        v13[2] = 0LL;
        v13[3] = 7LL;
        *(_WORD *)v13 = 0;
      }
      tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v21);
      std::wstring::_Tidy_deallocate((__int64)v28);
      std::wstring::_Tidy_deallocate((__int64)v27);
      v17 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v22, v21);
      *(_BYTE *)(tip::test_data_control<_tip_BootToCloudPCTest>::operator->(v17) + 13) = 1;
      tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v21);
      tip::details::test_common_data<1>::complete(v25 + 8);
      v18 = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting[0];
      if ( `TestControlReporting'::`2'::s_pfnTestControlReporting[0]
        || (v19 = wil_details_GetKernelBaseModuleHandle(),
            v18 = GetProcAddress(v19, "TestControlReporting"),
            (`TestControlReporting'::`2'::s_pfnTestControlReporting[0] = (__int64)v18) != 0) )
      {
        ((void (__fastcall *)(_QWORD))v18)(0LL);
      }
    }
  }
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  if ( v24 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
}
