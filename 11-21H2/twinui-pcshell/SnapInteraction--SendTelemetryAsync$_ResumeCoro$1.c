/*
 * XREFs of SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x1801BEC40
 * Callers:
 *     SnapInteraction::SendTelemetryAsync$_InitCoro$2 @ 0x1801BEB4C (SnapInteraction--SendTelemetryAsync$_InitCoro$2.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18022B998 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundati.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     _SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::__parameters_ @ 0x1805A05E8 (_SnapInteraction--SendTelemetryAsync_--_5_--_parameters_--__parameters_.c)
 *     ?SendTelemetry@SnapInteraction@@YAXAEBU?$com_ptr@UIApplicationView@@@winrt@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1805A0A50 (-SendTelemetry@SnapInteraction@@YAXAEBU-$com_ptr@UIApplicationView@@@winrt@@AEBV-$duration@_JU-$.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall SnapInteraction::SendTelemetryAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  char v3; // al
  __int64 v4; // rcx
  const char *v5; // r9
  __int16 v6; // ax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = a1;
  v2 = a1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_6;
    case 2:
      *(_BYTE *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = a1 + 16;
      v3 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
      *(_BYTE *)(v1 + 48) = v3;
      if ( v3 )
        goto LABEL_4;
      *(_WORD *)(v1 + 8) = 4;
      ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std___experimental_std___Z(
        v4,
        v1);
      break;
    case 4:
LABEL_4:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
      try
      {
        *(_QWORD *)(v1 + 96) = v1 + 9;
        *(_QWORD *)(v1 + 112) = v1 + 297;
        *(_QWORD *)(v1 + 128) = v1 + 1;
        *(_QWORD *)(v1 + 144) = v1 + 289;
        SnapInteraction::SendTelemetry();
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x26,
          (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
          v5);
        v1 = a1;
        v2 = a1;
      }
      std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
        v1,
        v1 + 32);
LABEL_6:
      *(_QWORD *)(v1 + 128) = v1 + 1;
      *(_QWORD *)(v1 + 160) = v1 + 289;
      SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::__parameters_(v1 + 289);
      *(_QWORD *)(v1 + 176) = v1 + 10;
      v6 = *(_WORD *)(v1 + 10);
      *(_WORD *)(v1 + 192) = v6;
      if ( v6 )
      {
        *(_QWORD *)(v1 + 208) = 305LL;
        *(_QWORD *)(v1 + 80) = 305LL;
        *(_QWORD *)(v2 + 64) = v1;
        *(_QWORD *)(v1 + 272) = v1 + 1;
        *(_QWORD *)(v1 + 256) = v1 + 10;
        operator delete((void *)v1);
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
