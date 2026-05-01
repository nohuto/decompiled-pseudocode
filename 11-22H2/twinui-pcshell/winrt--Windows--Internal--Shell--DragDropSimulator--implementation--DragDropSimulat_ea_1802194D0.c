/*
 * XREFs of winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1802194D0
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_InitCoro$2 @ 0x180219388 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180219388.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ?release_ref@?$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BCF98 (-release_ref@-$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAX.c)
 *     ?get_strong@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@QEAA?AU?$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801BDD98 (-get_strong@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWi.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?DropDataOnUwpEndPointAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@I@Foundation@67@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@Z @ 0x180218AF4 (-DropDataOnUwpEndPointAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@In.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180248A54 (-await_ready@-$notify_awaiter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802E7674 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1805E15F8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     ??$?4V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@1@PEAUHWND__@@$0A@@?$tuple@AEAV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@AEAPEAUHWND__@@@std@@QEAAAEAV01@$$QEAV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@1@@Z @ 0x1806297DC (--$-4V-$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@UIDropTarget@@Ue.c)
 *     ??$FailureTrace@AEAY0BL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BL@$$CBD$$QEAJ@Z @ 0x1806298F4 (--$FailureTrace@AEAY0BL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BL@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0BM@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BM@$$CBD$$QEAJ@Z @ 0x18062997C (--$FailureTrace@AEAY0BM@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BM@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0BP@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BP@$$CBD$$QEAJ@Z @ 0x180629A04 (--$FailureTrace@AEAY0BP@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BP@$$CBD$$QEAJ@Z.c)
 *     ??$Start@$$V@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@SA?AV01@XZ @ 0x180629A8C (--$Start@$$V@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@SA-AV01@XZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@@experimental@std@@@Z @ 0x180629D98 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_180629D98.c)
 *     ??$await_transform@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAU?$IAsyncOperation@I@Foundation@Windows@2@@Z @ 0x180629DA4 (--$await_transform@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@-$promise_base@Upromise_type@.c)
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUawaitable@?1??resume_background@2@YA@XZ@@Z @ 0x180629E78 (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Up_ea_180629E78.c)
 *     ??1?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@QEAA@XZ @ 0x18062A5F8 (--1-$tuple@V-$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@UIDropTarg.c)
 *     ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x18062A648 (--1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ.c)
 *     ??R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBA@XZ @ 0x18062A864 (--R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBA@XZ.c)
 *     ?DropDataOnWin32EndPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAKAEBV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@9@PEAUHWND__@@AEBUtagPOINT@@_N@Z @ 0x18062AC68 (-DropDataOnWin32EndPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inter.c)
 *     ?GetCaretPointFromWindowThread@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@PEAUHWND__@@UtagRECT@@@std@@PEAUHWND__@@@Z @ 0x18062AE14 (-GetCaretPointFromWindowThread@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell.c)
 *     ?GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@PEAUHWND__@@@Z @ 0x18062B13C (-GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimula.c)
 *     ?GetForegroundApplicationRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@UtagRECT@@PEAUHWND__@@@std@@XZ @ 0x18062B3F4 (-GetForegroundApplicationRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@.c)
 *     ?GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@AEBUtagPOINT@@PEAU8@1@Z @ 0x18062B4D0 (-GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 *     ?GetWindowIdAndTextSelectionRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@PEAUHWND__@@UtagRECT@@@std@@XZ @ 0x18062B7CC (-GetWindowIdAndTextSelectionRect@DragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 *     ?Stop@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18062C334 (-Stop@-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect.c)
 *     ?TransferToMember@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA?AV12@XZ @ 0x18062C944 (-TransferToMember@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA-AV12@XZ.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x18062CB38 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAA@.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18062CE18 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18062CE18.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=2
void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // r12
  __int64 v3; // r13
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64); // rdi
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64); // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 WindowIdAndTextSelectionRect; // rax
  __int64 v10; // rcx
  __int64 ForegroundApplicationRect; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  HWND InitialTargetWindowFromPoint; // rbx
  __int64 CaretPointFromWindowThread; // rax
  HWND v16; // rcx
  __int128 v17; // xmm0
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *v18; // rcx
  __int64 DropEndPointByTraversingParentChain; // rax
  int v20; // ecx
  char v21; // bl
  winrt::Windows::Foundation::IUnknown *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-E8h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_27;
    case 2:
      v3 = a1 + 16;
      DragDropSimulatorTelemetryProvider::OnSimulateDrop::Start<>((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 16));
      *(_QWORD *)(a1 + 336) = 0LL;
      v4 = **(__int64 (__fastcall *****)(_QWORD, GUID *, __int64))(a1 + 1449);
      v5 = **v4;
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 336));
      v6 = v5(v4, &GUID_0000010e_0000_0000_c000_000000000046, a1 + 336);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x73,
          (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
          (const char *)(unsigned int)v6,
          v25);
      winrt::implements<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::Shell::WindowTabHost,winrt::Windows::Internal::Shell::IWindowTabHost,winrt::immersive_shell_component,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,winrt::cloaked<Windows::Internal::Shell::IWindowTabHostInternal>>::get_strong(
        *(_QWORD *)(a1 + 1441),
        (_QWORD *)(a1 + 344));
      DragDropSimulatorTelemetryProvider::OnSimulateDrop::TransferToMember(a1 + 16, a1 + 352);
      *(_QWORD *)(a1 + 672) = v3;
      *(_QWORD *)(a1 + 680) = a1 + 352;
      *(_OWORD *)(a1 + 688) = *(_OWORD *)(a1 + 672);
      *(_BYTE *)(a1 + 704) = 1;
      *(_BYTE *)(a1 + 712) = 0;
      *(_QWORD *)(a1 + 1424) = a1 - 112;
      *(_QWORD *)(a1 + 848) = ___await_transform_Uawaitable__1__resume_background_winrt__YA_XZ____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt___JUhstring_4__experimental_std__U__IAsyncOperation_UIRandomAccessStream_Streams_Storage_Windows_winrt___Foundation_Windows_winrt__X_impl_winrt__QEAA_A_P__QEAUawaitable__1__resume_background_2_YA_XZ__Z(
                                a1 - 112,
                                a1 + 720);
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        goto LABEL_7;
      *v2 = 4;
      ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
        v7,
        a1);
      return;
    case 4:
LABEL_7:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
      *(_BYTE *)(a1 + 704) = 0;
      _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(a1 + 688);
      DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 352));
      v8 = *(_QWORD *)(a1 + 1441);
      WindowIdAndTextSelectionRect = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetWindowIdAndTextSelectionRect(
                                       v8,
                                       a1 + 752);
      v10 = *(_QWORD *)(WindowIdAndTextSelectionRect + 16);
      *(_QWORD *)(a1 + 744) = v10;
      *(_OWORD *)(a1 + 728) = *(_OWORD *)WindowIdAndTextSelectionRect;
      ForegroundApplicationRect = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetForegroundApplicationRect(
                                    v10,
                                    a1 + 800);
      *(_OWORD *)(a1 + 784) = *(_OWORD *)(ForegroundApplicationRect + 8);
      v13 = *(_QWORD *)ForegroundApplicationRect;
      *(_QWORD *)(a1 + 776) = *(_QWORD *)ForegroundApplicationRect;
      InitialTargetWindowFromPoint = 0LL;
      if ( !*(_DWORD *)(a1 + 1457) )
      {
        *(_OWORD *)(a1 + 784) = *(_OWORD *)(a1 + 728);
        if ( !*(_QWORD *)(a1 + 744) )
        {
          if ( v13 )
          {
            CaretPointFromWindowThread = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetCaretPointFromWindowThread(
                                           v12,
                                           a1 + 864);
            v16 = *(HWND *)(CaretPointFromWindowThread + 16);
            *(_QWORD *)(a1 + 840) = v16;
            v17 = *(_OWORD *)CaretPointFromWindowThread;
            *(_OWORD *)(a1 + 824) = *(_OWORD *)CaretPointFromWindowThread;
            if ( v16 )
            {
              InitialTargetWindowFromPoint = v16;
              *(_OWORD *)(a1 + 784) = v17;
            }
          }
        }
      }
      *(_DWORD *)(a1 + 888) = (*(_DWORD *)(a1 + 784) + *(_DWORD *)(a1 + 792)) / 2;
      v18 = (winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *)HIDWORD(*(_QWORD *)(a1 + 792));
      *(_DWORD *)(a1 + 892) = (int)((_DWORD)v18 + HIDWORD(*(_QWORD *)(a1 + 784))) / 2;
      if ( InitialTargetWindowFromPoint
        || (InitialTargetWindowFromPoint = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetInitialTargetWindowFromPoint(
                                             v18,
                                             (const struct tagPOINT *)(a1 + 888),
                                             *(HWND *)(a1 + 776),
                                             *(HWND *)(a1 + 744))) != 0LL )
      {
        *(_QWORD *)(a1 + 904) = 0LL;
        *(_QWORD *)(a1 + 912) = 0LL;
        DropEndPointByTraversingParentChain = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDropEndPointByTraversingParentChain(
                                                v8,
                                                a1 + 952,
                                                InitialTargetWindowFromPoint);
        *(_QWORD *)(a1 + 928) = a1 + 920;
        *(_QWORD *)(a1 + 936) = a1 + 912;
        *(_QWORD *)(a1 + 944) = a1 + 904;
        std::tuple<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy> &,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> &,HWND__ * &>::operator=<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,HWND__ *,0>(
          a1 + 928,
          DropEndPointByTraversingParentChain);
        std::tuple<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,HWND__ *>::~tuple<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,HWND__ *>(a1 + 952);
        v21 = 0;
        if ( *(_QWORD *)(a1 + 904) )
        {
          v21 = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnWin32EndPoint(
                  v20,
                  (int)a1 + 904,
                  (int)a1 + 336,
                  *(_QWORD *)(a1 + 920),
                  a1 + 888,
                  *(_BYTE *)(a1 + 1461));
        }
        else if ( *(_QWORD *)(a1 + 912) )
        {
          DragDropSimulatorTelemetryProvider::OnSimulateDrop::TransferToMember(a1 + 16, a1 + 976);
          *(_QWORD *)(a1 + 1296) = a1 + 16;
          *(_QWORD *)(a1 + 1304) = a1 + 976;
          *(_OWORD *)(a1 + 1312) = *(_OWORD *)(a1 + 1296);
          *(_BYTE *)(a1 + 1328) = 1;
          v22 = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync(
                  *(_QWORD *)(a1 + 1441),
                  (winrt::Windows::Foundation::IUnknown *)(a1 + 1336),
                  a1 + 912,
                  a1 + 336,
                  a1 + 888,
                  *(_BYTE *)(a1 + 1461));
          v23 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>(
                  *(_QWORD *)(a1 + 1424),
                  a1 + 1344,
                  v22);
          *(_QWORD *)(a1 + 1408) = v23;
          if ( !(unsigned __int8)winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready(v23) )
          {
            *v2 = 6;
            winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type>(
              v23,
              a1);
            return;
          }
LABEL_22:
          v21 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::await_resume(*(_QWORD *)(a1 + 1408));
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 1344);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 1336));
          *(_BYTE *)(a1 + 1328) = 0;
          _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(a1 + 1312);
          DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 976));
        }
        else
        {
          *(_DWORD *)(a1 + 1376) = -2147467259;
          DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[31],long>();
        }
        wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 16);
        if ( (v21 & 7) == 0 )
        {
          *(_DWORD *)(a1 + 1380) = 0;
          DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[27],long>();
        }
        *(_QWORD *)(a1 + 1424) = a1 - 112;
        *(_BYTE *)(a1 - 112 + 96) = (v21 & 7) != 0;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 912));
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 904));
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(a1 + 344));
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 336));
        DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 16));
      }
      else
      {
        *(_DWORD *)(a1 + 896) = -2147467259;
        DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[28],long>();
        wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 16);
        *(_QWORD *)(a1 + 1424) = a1 - 112;
        *(_BYTE *)(a1 - 112 + 96) = 0;
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(a1 + 344));
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 336));
        DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 16));
      }
      *(_QWORD *)(a1 + 1424) = a1 - 112;
      v24 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::final_suspend(
              a1 - 112,
              a1 + 1400);
      *(_QWORD *)(a1 + 1392) = v24;
      *v2 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(v24) )
      {
LABEL_27:
        *(_QWORD *)(a1 + 1424) = a1 - 112;
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 112);
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112));
      }
      return;
    case 5:
      *(_BYTE *)(a1 + 704) = 0;
      _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(a1 + 688);
      DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 352));
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(a1 + 344));
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 336));
      DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 16));
      goto LABEL_27;
    case 6:
      goto LABEL_22;
    case 7:
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 1344);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 1336));
      *(_BYTE *)(a1 + 1328) = 0;
      _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(a1 + 1312);
      DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 976));
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 912));
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 904));
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(a1 + 344));
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 336));
      DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 16));
      goto LABEL_27;
    default:
      __debugbreak();
      return;
  }
}
