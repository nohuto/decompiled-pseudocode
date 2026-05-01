/*
 * XREFs of winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1 @ 0x1801B8430
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_InitCoro$2 @ 0x1801B82DC (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulatorComponent--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x180042498 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXXZ @ 0x180043AE8 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@PEBV_lambda_b8623916b833b4369876a538bb21da9f_@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@PEBV_lambda_b8623916b833b4369876a538bb21da9f_@@@experimental@std@@@experimental@std@@@Z @ 0x1800444E8 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStreamReferen.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180158CE0 (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$await_transform@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@12@$$QEAUawaitable@?1??resume_after@2@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@Z @ 0x18056BC5C (--$await_transform@Uawaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x18056C544 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation@Windows@winrt.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18056EA74 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18056EA74.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUfinal_suspend_awaiter@123@XZ @ 0x18056EC54 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync__ResumeCoro_1(
        __int64 a1)
{
  __int64 *v3; // rdx
  __int64 *v4; // rdx
  int *v5; // rax
  int v6; // ecx
  __int64 (__fastcall **v7)(_QWORD, _QWORD, __int64, _QWORD); // rax
  __int64 (__fastcall *v8)(_QWORD, _QWORD, __int64, _QWORD); // rax
  int v9; // eax
  PVOID *v10; // r15
  int v11; // eax
  __int64 (***v12)(void); // rcx
  __int64 (**v13)(void); // rax
  __int64 (*v14)(void); // rax
  int v15; // eax
  __int64 v16; // rcx
  bool ready; // al
  char v18; // al
  __int64 (**v19)(void); // rax
  __int64 (*v20)(void); // rax
  int v21; // eax
  __int64 v22; // rsi
  __int64 (**v23)(void); // rax
  __int64 (*v24)(void); // rax
  int v25; // eax
  __int64 v26; // rax
  __int16 v27; // ax
  int v28; // [rsp+20h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 (__fastcall ***v30)(_QWORD, _QWORD, __int64, _QWORD); // [rsp+C8h] [rbp+20h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_24;
    case 2:
      *(_QWORD *)(a1 + 448) = a1 + 9;
      *(_QWORD *)(a1 + 1024) = a1 + 9;
      *(_QWORD *)(a1 + 464) = a1 + 1097;
      v3 = *(__int64 **)(a1 + 1097);
      *(_QWORD *)(a1 + 480) = v3;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
        (__int64 *)(a1 + 16),
        v3);
      *(_QWORD *)(a1 + 496) = a1 + 17;
      *(_QWORD *)(a1 + 1040) = a1 + 17;
      *(_QWORD *)(a1 + 512) = a1 + 1105;
      v4 = *(__int64 **)(a1 + 1105);
      *(_QWORD *)(a1 + 528) = v4;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
        (__int64 *)(a1 + 24),
        v4);
      *(_QWORD *)(a1 + 544) = a1 + 25;
      *(_QWORD *)(a1 + 1056) = a1 + 25;
      *(_QWORD *)(a1 + 560) = a1 + 1113;
      v5 = *(int **)(a1 + 1113);
      *(_QWORD *)(a1 + 576) = v5;
      v6 = *v5;
      *(_DWORD *)(a1 + 592) = *v5;
      *(_DWORD *)(a1 + 32) = v6;
      *(_QWORD *)(a1 + 608) = a1 + 1113;
      *(_QWORD *)(a1 + 624) = v5++;
      *(_QWORD *)(a1 + 640) = v5;
      LODWORD(v5) = *v5;
      *(_DWORD *)(a1 + 656) = (_DWORD)v5;
      *(_DWORD *)(a1 + 36) = (_DWORD)v5;
      *(_DWORD *)(a1 + 40) = 1;
      v30 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64, _QWORD))(a1 + 16);
      v7 = *v30;
      *(_QWORD *)(a1 + 848) = *v30;
      v7 += 3;
      *(_QWORD *)(a1 + 864) = v7;
      v8 = *v7;
      *(_QWORD *)(a1 + 880) = v8;
      *(_QWORD *)(a1 + 208) = v8;
      v28 = a1 + 40;
      v9 = v8(v30, *(_QWORD *)(a1 + 24), 1LL, *(_QWORD *)(a1 + 32));
      *(_DWORD *)(a1 + 192) = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x181,
          (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
          (const char *)(unsigned int)v9,
          v28);
      *(_QWORD *)(a1 + 672) = a1 - 112;
      *(_QWORD *)(a1 + 752) = a1 - 112;
      *(_QWORD *)(a1 + 48) = 0LL;
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 64) = 500000LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_DWORD *)(a1 + 80) = 0;
      v10 = (PVOID *)___await_transform_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation_I_Foundation_Windows_winrt__PEAUDragDropSimulatorComponent_implementation_DragDropSimulator_Shell_Internal_34_AEBV__com_ptr_t_UIDropTarget__Uerr_exception_policy_wil___wil__AEBV__com_ptr_t_UIDataObject__Uerr_exception_policy_wil___wil__AEBUtagPOINT___N_experimental_std__U__IAsyncOperation_I_Foundation_Windows_winrt__X_impl_winrt__QEAA_AU__notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__12___QEAUawaitable__1__resume_after_2_YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__Z(
                       a1 - 112,
                       a1 + 88);
      *(_QWORD *)(a1 + 176) = v10;
      if ( _await_ready___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)v10) )
        goto LABEL_8;
      *(_WORD *)(a1 + 8) = 4;
      goto LABEL_6;
    case 4:
LABEL_8:
      _await_resume___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAAXXZ(*(_QWORD **)(a1 + 176));
      `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 48);
      *(_DWORD *)(a1 + 96) = 0;
      v11 = 0;
      goto LABEL_11;
    case 5:
      `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 48);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 24));
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 16));
      goto LABEL_24;
    case 6:
      break;
    case 7:
      `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 104);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 24));
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 16));
      goto LABEL_24;
    default:
      __debugbreak();
      return;
  }
  while ( 1 )
  {
    _await_resume___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAAXXZ(*(_QWORD **)(a1 + 384));
    `winrt::resume_after'::`2'::awaitable::~awaitable(a1 + 104);
    v11 = *(_DWORD *)(a1 + 96) + 1;
    *(_DWORD *)(a1 + 688) = v11;
    *(_DWORD *)(a1 + 96) = v11;
LABEL_11:
    v12 = *(__int64 (****)(void))(a1 + 16);
    if ( v11 >= 4 )
      break;
    *(_DWORD *)(a1 + 100) = 1;
    v13 = *v12;
    *(_QWORD *)(a1 + 896) = *v12;
    v13 += 4;
    *(_QWORD *)(a1 + 912) = v13;
    v14 = *v13;
    *(_QWORD *)(a1 + 928) = v14;
    *(_QWORD *)(a1 + 224) = v14;
    v15 = ((__int64 (__fastcall *)(__int64 (***)(void), __int64, _QWORD))v14)(v12, 1LL, *(_QWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 368) = v15;
    *(_DWORD *)(a1 + 256) = v15;
    *(_QWORD *)(a1 + 264) = retaddr;
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x188,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v15,
        v28);
    v16 = *(_QWORD *)(a1 + 672);
    *(_QWORD *)(a1 + 240) = v16;
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 500000LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_DWORD *)(a1 + 136) = 0;
    v10 = (PVOID *)___await_transform_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation_I_Foundation_Windows_winrt__PEAUDragDropSimulatorComponent_implementation_DragDropSimulator_Shell_Internal_34_AEBV__com_ptr_t_UIDropTarget__Uerr_exception_policy_wil___wil__AEBV__com_ptr_t_UIDataObject__Uerr_exception_policy_wil___wil__AEBUtagPOINT___N_experimental_std__U__IAsyncOperation_I_Foundation_Windows_winrt__X_impl_winrt__QEAA_AU__notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__12___QEAUawaitable__1__resume_after_2_YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__Z(
                     v16,
                     a1 + 144);
    *(_QWORD *)(a1 + 384) = v10;
    ready = _await_ready___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)v10);
    *(_BYTE *)(a1 + 400) = ready;
    if ( !ready )
    {
      *(_WORD *)(a1 + 8) = 6;
LABEL_6:
      ___await_suspend_Upromise_type___coroutine_traits_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__PEBV_lambda_b8623916b833b4369876a538bb21da9f____experimental_std_____notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__PEBV_lambda_b8623916b833b4369876a538bb21da9f____experimental_std___experimental_std___Z(v10);
      return;
    }
  }
  *(_QWORD *)(a1 + 704) = a1 + 33;
  *(_QWORD *)(a1 + 720) = a1 + 1121;
  v18 = *(_BYTE *)(a1 + 1121);
  *(_BYTE *)(a1 + 736) = v18;
  if ( v18 )
  {
    v19 = *v12;
    *(_QWORD *)(a1 + 848) = *v12;
    v19 += 5;
    *(_QWORD *)(a1 + 944) = v19;
    v20 = *v19;
    *(_QWORD *)(a1 + 960) = v20;
    v21 = v20();
    *(_DWORD *)(a1 + 416) = v21;
    *(_DWORD *)(a1 + 272) = v21;
    *(_QWORD *)(a1 + 352) = retaddr;
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x18F,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v21,
        v28);
    v22 = *(_QWORD *)(a1 + 672);
    *(_QWORD *)(a1 + 976) = v22 + 96;
    *(_DWORD *)(v22 + 96) = *(_DWORD *)(a1 + 40);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 24));
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 16));
    *(_QWORD *)(a1 + 336) = v22;
    *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 976);
  }
  else
  {
    *(_DWORD *)(a1 + 152) = 1;
    v23 = *v12;
    *(_QWORD *)(a1 + 848) = *v12;
    v23 += 6;
    *(_QWORD *)(a1 + 992) = v23;
    v24 = *v23;
    *(_QWORD *)(a1 + 1008) = v24;
    *(_QWORD *)(a1 + 288) = v24;
    v25 = ((__int64 (__fastcall *)(__int64 (***)(void), _QWORD, _QWORD, _QWORD))v24)(
            v12,
            *(_QWORD *)(a1 + 24),
            0LL,
            *(_QWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 432) = v25;
    *(_DWORD *)(a1 + 344) = v25;
    *(_QWORD *)(a1 + 360) = retaddr;
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x194,
        (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
        (const char *)(unsigned int)v25,
        a1 + 152);
    v22 = *(_QWORD *)(a1 + 672);
    *(_QWORD *)(a1 + 976) = v22 + 96;
    *(_DWORD *)(v22 + 96) = *(_DWORD *)(a1 + 152);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 24));
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 16));
    *(_QWORD *)(a1 + 336) = v22;
    *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 976);
  }
  v26 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend(
          v22,
          a1 + 168);
  *(_QWORD *)(a1 + 160) = v26;
  *(_WORD *)(a1 + 8) = 0;
  if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::final_suspend_awaiter::await_suspend(v26) )
  {
LABEL_24:
    *(_QWORD *)(a1 + 672) = a1 - 112;
    winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>(a1 - 112);
    *(_QWORD *)(a1 + 768) = a1 + 10;
    v27 = *(_WORD *)(a1 + 10);
    *(_WORD *)(a1 + 784) = v27;
    if ( v27 )
    {
      *(_QWORD *)(a1 + 800) = 1241LL;
      *(_QWORD *)(a1 + 320) = 1241LL;
      *(_QWORD *)(a1 + 304) = a1 - 112;
      operator delete(*(void **)(a1 + 304));
    }
  }
}
