/*
 * XREFs of SnapFlyoutHost::ShowAsync$_ResumeCoro$1 @ 0x1801C0B90
 * Callers:
 *     SnapFlyoutHost::ShowAsync$_InitCoro$2 @ 0x1801C0AC4 (SnapFlyoutHost--ShowAsync$_InitCoro$2.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020174 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180035E88 (-TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyou.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18022B998 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundati.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x180598314 (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ??$SnapFlyout_ShowAsync@_KAEAW4ShowFlags@SnapFlyoutHost@@@SnapFlyoutTelemetry@@SAX$$QEA_KAEAW4ShowFlags@SnapFlyoutHost@@@Z @ 0x1805AD8E0 (--$SnapFlyout_ShowAsync@_KAEAW4ShowFlags@SnapFlyoutHost@@@SnapFlyoutTelemetry@@SAX$$QEA_KAEAW4Sh.c)
 *     ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF08C (-CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF0E0 (-CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF4BC (-InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_storag.c)
 *     ?StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B0B94 (-StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_st.c)
 *     ?get_strong@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1805B1FD0 (-get_strong@-$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA-A.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::ShowAsync__ResumeCoro_1(char *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  char v4; // al
  __int64 v5; // rcx
  __int64 *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int *v10; // r14
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE **v15; // rax
  _BYTE *v16; // rcx
  std::_Ref_count_base *v17; // rcx
  std::_Ref_count_base *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  _QWORD *v21; // rdx
  __int16 v22; // ax

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_17;
      case 2:
        *((_QWORD *)a1 + 30) = a1 + 9;
        *((_QWORD *)a1 + 32) = a1 + 921;
        v2 = *(_QWORD *)(a1 + 921);
        *((_QWORD *)a1 + 34) = v2;
        *((_QWORD *)a1 + 2) = v2;
        *((_QWORD *)a1 + 36) = a1 + 17;
        *((_QWORD *)a1 + 38) = a1 + 929;
        SnapFlyoutTelemetry::SnapFlyout_ShowAsync<unsigned __int64,enum SnapFlyoutHost::ShowFlags &>();
        *((_QWORD *)a1 + 40) = a1 + 1;
        *((_QWORD *)a1 + 42) = a1 + 913;
        v3 = *(_QWORD *)(a1 + 913);
        *((_QWORD *)a1 + 44) = v3;
        *((_QWORD *)a1 + 12) = v3;
        winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_strong(v3, a1 + 24);
        a1[32] = 0;
        *((_QWORD *)a1 + 5) = a1 + 32;
        v4 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
        a1[80] = v4;
        if ( v4 )
          goto LABEL_6;
        *((_WORD *)a1 + 4) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std___experimental_std___Z(
          v5,
          a1);
        return;
      case 4:
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
        v6 = (__int64 *)(*((_QWORD *)a1 + 40) + 912LL);
        *((_QWORD *)a1 + 46) = v6;
        v7 = *v6;
        *((_QWORD *)a1 + 48) = *v6;
        v7 += 144LL;
        *((_QWORD *)a1 + 50) = v7;
        *((_QWORD *)a1 + 14) = v7;
        wil::srwlock::lock_exclusive(v7, (__int64)(a1 + 48));
        *((_QWORD *)a1 + 52) = v6;
        v8 = *v6;
        *((_QWORD *)a1 + 54) = *v6;
        *((_QWORD *)a1 + 16) = v8;
        SnapFlyoutHost::CancelInvokeTimer();
        *((_QWORD *)a1 + 56) = v6;
        v9 = *v6;
        *((_QWORD *)a1 + 58) = *v6;
        *((_QWORD *)a1 + 18) = v9;
        SnapFlyoutHost::CancelDismissTimer();
        v10 = (int *)(*((_QWORD *)a1 + 36) + 912LL);
        *((_QWORD *)a1 + 60) = v10;
        v11 = *v10;
        *((_DWORD *)a1 + 124) = *v10;
        v12 = v11 & 1;
        *((_DWORD *)a1 + 128) = v12;
        v13 = *v6;
        if ( v12 )
        {
          *((_QWORD *)a1 + 104) = v6;
          *((_QWORD *)a1 + 106) = v13;
          *((_QWORD *)a1 + 20) = v13;
          SnapFlyoutHost::TryGetVisibleFlyoutInstance(v13, (_QWORD *)a1 + 7);
          v14 = *((_QWORD *)a1 + 7);
          if ( !v14 )
            goto LABEL_12;
          v15 = (_BYTE **)(v14 + 16);
          *((_QWORD *)a1 + 66) = v15;
          v16 = *v15;
          *((_QWORD *)a1 + 68) = *v15;
          v16 += 298;
          *((_QWORD *)a1 + 70) = v16;
          LOBYTE(v15) = *v16;
          a1[576] = *v16;
          if ( (_BYTE)v15 )
          {
            v17 = (std::_Ref_count_base *)*((_QWORD *)a1 + 8);
            if ( v17 )
              std::_Ref_count_base::_Decref(v17);
          }
          else
          {
LABEL_12:
            v18 = (std::_Ref_count_base *)*((_QWORD *)a1 + 8);
            if ( v18 )
              std::_Ref_count_base::_Decref(v18);
            *((_QWORD *)a1 + 74) = v6;
            v19 = *v6;
            *((_QWORD *)a1 + 76) = *v6;
            *((_QWORD *)a1 + 22) = v19;
            *((_QWORD *)a1 + 78) = v10;
            *((_DWORD *)a1 + 160) = *v10;
            v20 = (_QWORD *)(*((_QWORD *)a1 + 30) + 912LL);
            *((_QWORD *)a1 + 82) = v20;
            *((_QWORD *)a1 + 84) = *v20;
            SnapFlyoutHost::StartInvokeTimer();
          }
        }
        else
        {
          *((_QWORD *)a1 + 108) = v6;
          *((_QWORD *)a1 + 110) = v13;
          *((_QWORD *)a1 + 24) = v13;
          *((_QWORD *)a1 + 86) = v10;
          *((_DWORD *)a1 + 176) = *v10;
          v21 = (_QWORD *)(*((_QWORD *)a1 + 30) + 912LL);
          *((_QWORD *)a1 + 90) = v21;
          *((_QWORD *)a1 + 92) = *v21;
          SnapFlyoutHost::InternalShow();
        }
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 6);
        winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 24);
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 72);
        goto LABEL_17;
      case 5:
        winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 24);
LABEL_17:
        *((_QWORD *)a1 + 94) = a1 + 10;
        v22 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 384) = v22;
        if ( v22 )
        {
          *((_QWORD *)a1 + 98) = 937LL;
          *((_QWORD *)a1 + 28) = 937LL;
          *((_QWORD *)a1 + 26) = a1;
          *((_QWORD *)a1 + 112) = a1 + 10;
          operator delete(a1);
        }
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
  }
}
