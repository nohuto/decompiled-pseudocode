/*
 * XREFs of GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1 @ 0x1801911A0
 * Callers:
 *     GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_InitCoro$2 @ 0x1801910E8 (GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_InitCoro$2.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020174 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18022B998 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundati.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     ?UnregisterFromXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18033AEDC (-UnregisterFromXusbConnectionEvents@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wi.c)
 *     ?copy_ref@?$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXPEAVGamingOverlayExperienceManager@@@Z @ 0x18033CD60 (-copy_ref@-$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXPEAVGamingOverlayExperienceMan.c)
 *     ?release_ref@?$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXXZ @ 0x18033D82C (-release_ref@-$com_ptr@VGamingOverlayExperienceManager@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground__ResumeCoro_1(char *a1)
{
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int16 v7; // ax

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_7;
      case 2:
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 16) = a1 + 1;
        winrt::com_ptr<GamingOverlayExperienceManager>::copy_ref(a1 + 16, *(_QWORD *)(a1 + 321));
        a1[24] = 0;
        *((_QWORD *)a1 + 4) = a1 + 24;
        if ( winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready() )
          goto LABEL_6;
        *((_WORD *)a1 + 4) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std___experimental_std___Z(
          v3,
          a1);
        return;
      case 4:
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
        v4 = (__int64 *)(*((_QWORD *)a1 + 16) + 320LL);
        *((_QWORD *)a1 + 18) = v4;
        v5 = *v4;
        *((_QWORD *)a1 + 20) = *v4;
        v5 += 208LL;
        *((_QWORD *)a1 + 22) = v5;
        *((_QWORD *)a1 + 8) = v5;
        wil::srwlock::lock_exclusive(v5, (__int64)(a1 + 40));
        *((_QWORD *)a1 + 24) = v4;
        v6 = *v4;
        *((_QWORD *)a1 + 26) = *v4;
        *((_QWORD *)a1 + 10) = v6;
        GamingOverlayExperienceManager::UnregisterFromXusbConnectionEvents();
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 5);
        winrt::com_ptr<GamingOverlayExperienceManager>::release_ref(a1 + 16);
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 48);
        goto LABEL_7;
      case 5:
        winrt::com_ptr<GamingOverlayExperienceManager>::release_ref(a1 + 16);
LABEL_7:
        *((_QWORD *)a1 + 28) = a1 + 10;
        v7 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 120) = v7;
        if ( v7 )
        {
          *((_QWORD *)a1 + 32) = 329LL;
          *((_QWORD *)a1 + 14) = 329LL;
          *((_QWORD *)a1 + 12) = a1;
          *((_QWORD *)a1 + 38) = a1 + 10;
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
