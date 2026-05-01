/*
 * XREFs of SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1801C0130
 * Callers:
 *     SnapFlyoutHost::HideAsync$_InitCoro$2 @ 0x1801C006C (SnapFlyoutHost--HideAsync$_InitCoro$2.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020174 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180035E88 (-TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyou.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?InternalHideAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C0A4C (-InternalHideAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@AEBV-$unique_any_t@V-$unique_st.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18022B998 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundati.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x180598314 (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ??$SnapFlyout_HideAsync@AEA_N@SnapFlyoutTelemetry@@SAXAEA_N@Z @ 0x1805AD7D0 (--$SnapFlyout_HideAsync@AEA_N@SnapFlyoutTelemetry@@SAXAEA_N@Z.c)
 *     ?CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF0E0 (-CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B0964 (-StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?get_strong@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1805B1FD0 (-get_strong@-$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA-A.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall SnapFlyoutHost::HideAsync__ResumeCoro_1(char *a1)
{
  __int64 v2; // rcx
  char v3; // al
  __int64 v4; // rcx
  __int64 *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE *v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  char *v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  std::_Ref_count_base *v19; // rcx
  int *v20; // rax
  int v21; // ecx
  _DWORD *v22; // rax
  std::_Ref_count_base *v23; // rcx
  __int16 v24; // ax

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_20;
      case 2:
        *((_QWORD *)a1 + 28) = a1 + 9;
        *((_QWORD *)a1 + 30) = a1 + 905;
        SnapFlyoutTelemetry::SnapFlyout_HideAsync<bool &>();
        *((_QWORD *)a1 + 32) = a1 + 1;
        *((_QWORD *)a1 + 34) = a1 + 897;
        v2 = *(_QWORD *)(a1 + 897);
        *((_QWORD *)a1 + 36) = v2;
        *((_QWORD *)a1 + 12) = v2;
        winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_strong(v2, a1 + 16);
        a1[24] = 0;
        *((_QWORD *)a1 + 4) = a1 + 24;
        v3 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
        a1[80] = v3;
        if ( v3 )
          goto LABEL_6;
        *((_WORD *)a1 + 4) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std___experimental_std___Z(
          v4,
          a1);
        return;
      case 4:
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
        v5 = (__int64 *)(*((_QWORD *)a1 + 32) + 896LL);
        *((_QWORD *)a1 + 38) = v5;
        v6 = *v5;
        *((_QWORD *)a1 + 40) = *v5;
        v6 += 144LL;
        *((_QWORD *)a1 + 42) = v6;
        *((_QWORD *)a1 + 14) = v6;
        wil::srwlock::lock_exclusive(v6, (__int64)(a1 + 40));
        *((_QWORD *)a1 + 44) = v5;
        v7 = *v5;
        *((_QWORD *)a1 + 46) = *v5;
        *((_QWORD *)a1 + 16) = v7;
        SnapFlyoutHost::CancelInvokeTimer();
        v8 = (_BYTE *)(*((_QWORD *)a1 + 28) + 896LL);
        *((_QWORD *)a1 + 48) = v8;
        LOBYTE(v8) = *v8;
        a1[400] = (char)v8;
        if ( (_BYTE)v8 )
        {
          *((_QWORD *)a1 + 98) = v5;
          v9 = *v5;
          *((_QWORD *)a1 + 100) = *v5;
          *((_QWORD *)a1 + 18) = v9;
          SnapFlyoutHost::InternalHideAsync(v9, a1 + 48, a1 + 40);
          goto LABEL_19;
        }
        *((_QWORD *)a1 + 102) = v5;
        v10 = (__int64 *)*v5;
        *((_QWORD *)a1 + 104) = *v5;
        v10 += 8;
        *((_QWORD *)a1 + 106) = v10;
        v11 = *v10;
        *((_QWORD *)a1 + 108) = v11;
        if ( v11 )
          goto LABEL_19;
        *((_QWORD *)a1 + 52) = v5;
        v12 = *v5;
        *((_QWORD *)a1 + 54) = *v5;
        *((_QWORD *)a1 + 20) = v12;
        SnapFlyoutHost::TryGetVisibleFlyoutInstance(v12, (_QWORD *)a1 + 7);
        v13 = *((_QWORD *)a1 + 7);
        if ( !v13 )
        {
          *((_QWORD *)a1 + 72) = v5;
          v20 = (int *)*v5;
          *((_QWORD *)a1 + 74) = *v5;
          v20 += 12;
          *((_QWORD *)a1 + 76) = v20;
          v21 = *v20;
          *((_DWORD *)a1 + 156) = *v20;
          *((_DWORD *)a1 + 160) = ++v21;
          *((_QWORD *)a1 + 82) = v5;
          v22 = (_DWORD *)*v5;
          *((_QWORD *)a1 + 84) = *v5;
          v22 += 12;
          *((_QWORD *)a1 + 86) = v22;
          *v22 = v21;
LABEL_17:
          v23 = (std::_Ref_count_base *)*((_QWORD *)a1 + 8);
          if ( v23 )
            std::_Ref_count_base::_Decref(v23);
          goto LABEL_19;
        }
        v14 = (__int64 *)(v13 + 16);
        *((_QWORD *)a1 + 56) = v14;
        v15 = *v14;
        *((_QWORD *)a1 + 58) = *v14;
        *((_QWORD *)a1 + 60) = v15 + 298;
        LOBYTE(v14) = *(_BYTE *)(v15 + 298);
        a1[496] = (char)v14;
        if ( !(_BYTE)v14 )
        {
          v16 = (char *)(v15 + 301);
          *((_QWORD *)a1 + 64) = v16;
          v17 = *v16;
          a1[528] = *v16;
          if ( !v17 )
          {
            *((_QWORD *)a1 + 68) = v5;
            v18 = *v5;
            *((_QWORD *)a1 + 70) = *v5;
            *((_QWORD *)a1 + 22) = v18;
            SnapFlyoutHost::StartDismissTimer();
            goto LABEL_17;
          }
        }
        v19 = (std::_Ref_count_base *)*((_QWORD *)a1 + 8);
        if ( v19 )
          std::_Ref_count_base::_Decref(v19);
LABEL_19:
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 5);
        winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 16);
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 72);
LABEL_20:
        *((_QWORD *)a1 + 88) = a1 + 10;
        v24 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 360) = v24;
        if ( v24 )
        {
          *((_QWORD *)a1 + 92) = 913LL;
          *((_QWORD *)a1 + 26) = 913LL;
          *((_QWORD *)a1 + 24) = a1;
          *((_QWORD *)a1 + 110) = a1 + 10;
          operator delete(a1);
        }
        break;
      case 5:
        winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 16);
        goto LABEL_20;
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
