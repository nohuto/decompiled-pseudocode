/*
 * XREFs of SnapFlyoutHost::InternalHideAsync$_ResumeCoro$1 @ 0x1801C06A0
 * Callers:
 *     SnapFlyoutHost::InternalHideAsync$_InitCoro$2 @ 0x1801C05D4 (SnapFlyoutHost--InternalHideAsync$_InitCoro$2.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020174 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180035E88 (-TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyou.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1801A3CC0 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x180598314 (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@IPEAUHWND__@@W4ShowFlags@3@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@IPEAUHWND__@@W4ShowFlags@3@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@experimental@std@@@experimental@std@@@Z @ 0x1805ADBF0 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@IP.c)
 *     ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF08C (-CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF0E0 (-CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?SnapFlyout_InternalHideAsync@SnapFlyoutTelemetry@@SAXXZ @ 0x1805B06F4 (-SnapFlyout_InternalHideAsync@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA_NXZ @ 0x1805B17F8 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@Sy.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1805B1DE4 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA-AU-$com_ptr@VSnapFlyoutHost@@@2@XZ.c)
 *     ?get_weak@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$weak_ref@VSnapFlyoutHost@@@2@XZ @ 0x1805B2014 (-get_weak@-$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA-AU-.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805BA8B4 (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall SnapFlyoutHost::InternalHideAsync__ResumeCoro_1(char *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 *v5; // rsi
  __int64 v6; // rcx
  _DWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **v12; // rax
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *v13; // rcx
  std::_Ref_count_base *v14; // rcx
  __int16 v15; // ax

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_17;
      case 2:
        SnapFlyoutTelemetry::SnapFlyout_InternalHideAsync();
        *((_QWORD *)a1 + 24) = a1 + 1;
        *((_QWORD *)a1 + 26) = a1 + 609;
        v2 = *(__int64 **)(a1 + 609);
        *((_QWORD *)a1 + 28) = v2;
        v2 += 13;
        *((_QWORD *)a1 + 30) = v2;
        v3 = *v2;
        *((_QWORD *)a1 + 32) = v3;
        if ( !v3 )
          goto LABEL_16;
        v4 = *(_QWORD *)(a1 + 609);
        *((_DWORD *)a1 + 4) = *(_DWORD *)(v4 + 48);
        winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v4, a1 + 24);
        *((_QWORD *)a1 + 4) = v4 + 104;
        *((_DWORD *)a1 + 10) = 0;
        a1[44] = 0;
        *((_QWORD *)a1 + 6) = a1 + 32;
        if ( (unsigned __int8)winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(a1 + 48)
          || (*((_WORD *)a1 + 4) = 4,
              !(unsigned __int8)___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__IPEAUHWND____W4ShowFlags_3_V__tip_test_U_tip_SnapFlyoutShowTest___tip___experimental_std_____notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_NU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__IPEAUHWND____W4ShowFlags_3_V__tip_test_U_tip_SnapFlyoutShowTest___tip___experimental_std___experimental_std___Z(
                                  a1 + 48,
                                  a1)) )
        {
LABEL_8:
          _await_resume___notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_NXZ(a1 + 48);
          winrt::weak_ref<SnapFlyoutHost>::get(a1 + 24, a1 + 56);
          if ( *((_QWORD *)a1 + 7) )
          {
            v5 = (__int64 *)(*((_QWORD *)a1 + 24) + 608LL);
            *((_QWORD *)a1 + 34) = v5;
            v6 = *v5;
            *((_QWORD *)a1 + 36) = *v5;
            v6 += 144LL;
            *((_QWORD *)a1 + 38) = v6;
            *((_QWORD *)a1 + 12) = v6;
            wil::srwlock::lock_exclusive(v6, (__int64)(a1 + 64));
            *((_QWORD *)a1 + 40) = v5;
            v7 = (_DWORD *)*v5;
            *((_QWORD *)a1 + 42) = *v5;
            v7 += 12;
            *((_QWORD *)a1 + 44) = v7;
            LODWORD(v7) = *v7;
            *((_DWORD *)a1 + 92) = (_DWORD)v7;
            if ( *((_DWORD *)a1 + 4) == (_DWORD)v7 )
            {
              *((_QWORD *)a1 + 48) = v5;
              v8 = *v5;
              *((_QWORD *)a1 + 50) = *v5;
              *((_QWORD *)a1 + 14) = v8;
              SnapFlyoutHost::CancelInvokeTimer();
              *((_QWORD *)a1 + 52) = v5;
              v9 = *v5;
              *((_QWORD *)a1 + 54) = *v5;
              *((_QWORD *)a1 + 16) = v9;
              SnapFlyoutHost::CancelDismissTimer();
              *((_QWORD *)a1 + 56) = v5;
              v10 = *v5;
              *((_QWORD *)a1 + 58) = *v5;
              *((_QWORD *)a1 + 18) = v10;
              SnapFlyoutHost::TryGetVisibleFlyoutInstance(v10, (_QWORD *)a1 + 9);
              v11 = *((_QWORD *)a1 + 9);
              if ( v11 )
              {
                v12 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v11 + 16);
                *((_QWORD *)a1 + 60) = v12;
                v13 = *v12;
                *((_QWORD *)a1 + 62) = *v12;
                winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(v13);
              }
              v14 = (std::_Ref_count_base *)*((_QWORD *)a1 + 10);
              if ( v14 )
                std::_Ref_count_base::_Decref(v14);
            }
            wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 8);
          }
          winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 56);
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 3);
LABEL_16:
          std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
            a1,
            a1 + 88);
LABEL_17:
          *((_QWORD *)a1 + 64) = a1 + 10;
          v15 = *((_WORD *)a1 + 5);
          *((_WORD *)a1 + 264) = v15;
          if ( v15 )
          {
            *((_QWORD *)a1 + 68) = 625LL;
            *((_QWORD *)a1 + 22) = 625LL;
            *((_QWORD *)a1 + 20) = a1;
            *((_QWORD *)a1 + 74) = a1 + 10;
            operator delete(a1);
          }
        }
        break;
      case 4:
        goto LABEL_8;
      case 5:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 3);
        goto LABEL_17;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
  }
}
