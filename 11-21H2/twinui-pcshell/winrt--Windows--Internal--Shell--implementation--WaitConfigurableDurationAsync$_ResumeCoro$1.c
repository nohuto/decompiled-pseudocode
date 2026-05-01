/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x1801CDB70
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_InitCoro$2 @ 0x1801CDA40 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_InitCoro$2.c)
 * Callees:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x1800445E4 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180158CE0 (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z @ 0x1801C1D60 (--$WebExperienceDelayStarted@AEAPEBG_J@DashboardManagerTelemetry@@SAXAEAPEBG$$QEA_J@Z.c)
 *     ??$await_transform@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@12@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x1801C2320 (--$await_transform@AEAV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@@-$promise_base@Upromis.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1801C46BC (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ?await_ready@?$notify_awaiter@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@impl@winrt@@QEAA_NXZ @ 0x1801CEDB4 (-await_ready@-$notify_awaiter@AEBV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@@impl@winrt@.c)
 *     ?await_resume@?$notify_awaiter@V?$duration@HU?$ratio@$0OBA@$00@std@@@chrono@std@@@impl@winrt@@QEAAXXZ @ 0x1801CEDF0 (-await_resume@-$notify_awaiter@V-$duration@HU-$ratio@$0OBA@$00@std@@@chrono@std@@@impl@winrt@@QE.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801CEF68 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1801CEF68.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@$$V@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUfinal_suspend_awaiter@123@XZ @ 0x1801CF3C8 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync__ResumeCoro_1(
        __int64 a1)
{
  __int64 *v3; // r15
  const WCHAR *v4; // r8
  void *v5; // rbx
  __int64 v6; // rax
  __int16 v7; // ax

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_8;
    case 2:
      *(_DWORD *)(a1 + 16) = 4;
      *(_QWORD *)(a1 + 144) = a1 + 1;
      v3 = (__int64 *)(a1 + 289);
      *(_QWORD *)(a1 + 256) = a1 + 289;
      v4 = *(const WCHAR **)(a1 + 289);
      *(_QWORD *)(a1 + 272) = v4;
      if ( !RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Dsh",
              v4,
              0x18u,
              0LL,
              (PVOID)(a1 + 20),
              (LPDWORD)(a1 + 16)) )
        *(_QWORD *)(a1 + 297) = *(unsigned int *)(a1 + 20);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 297);
      DashboardManagerTelemetry::WebExperienceDelayStarted<unsigned short const * &,__int64>(v3, (int *)(a1 + 24));
      *(_QWORD *)(a1 + 160) = a1 - 96;
      v5 = (void *)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<std::chrono::duration<__int64,std::ratio<1,1000>> &>(
                     a1 - 96,
                     a1 + 32,
                     (_QWORD *)(a1 + 297));
      *(_QWORD *)(a1 + 96) = v5;
      if ( (unsigned __int8)winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1000>> const &>::await_ready(v5) )
        goto LABEL_7;
      *(_WORD *)(a1 + 8) = 4;
      winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type>(v5);
      return;
    case 4:
LABEL_7:
      winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<3600,1>>>::await_resume(*(_QWORD *)(a1 + 96));
      `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 32);
      *(_QWORD *)(a1 + 160) = a1 - 96;
      v6 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend(
             a1 - 96,
             a1 + 80);
      *(_QWORD *)(a1 + 72) = v6;
      *(_WORD *)(a1 + 8) = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v6) )
        goto LABEL_8;
      return;
    case 5:
      `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 32);
LABEL_8:
      *(_QWORD *)(a1 + 160) = a1 - 96;
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 96);
      *(_QWORD *)(a1 + 176) = a1 + 10;
      v7 = *(_WORD *)(a1 + 10);
      *(_WORD *)(a1 + 192) = v7;
      if ( v7 )
      {
        *(_QWORD *)(a1 + 208) = 401LL;
        *(_QWORD *)(a1 + 128) = 401LL;
        *(_QWORD *)(a1 + 112) = a1 - 96;
        operator delete(*(void **)(a1 + 112));
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
