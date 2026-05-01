/*
 * XREFs of winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1801B95F0
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_InitCoro$2 @ 0x1801B94A4 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B94A4.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ?get_strong@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@QEAA?AU?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801807D0 (-get_strong@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inte.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?DropDataOnUwpEndPointAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@I@Foundation@67@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@Z @ 0x1801B8B34 (-DropDataOnUwpEndPointAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@In.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18022B998 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundati.c)
 *     ?release_ref@?$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802387B4 (-release_ref@-$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AE.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x18049A2BC (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??$?4V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@1@PEAUHWND__@@$0A@@?$tuple@AEAV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEAV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@AEAPEAUHWND__@@@std@@QEAAAEAV01@$$QEAV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@1@@Z @ 0x18056B714 (--$-4V-$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@UIDropTarget@@Ue.c)
 *     ??$FailureTrace@AEAY0BL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BL@$$CBD$$QEAJ@Z @ 0x18056B82C (--$FailureTrace@AEAY0BL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BL@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0BM@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BM@$$CBD$$QEAJ@Z @ 0x18056B8B4 (--$FailureTrace@AEAY0BM@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BM@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0BP@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BP@$$CBD$$QEAJ@Z @ 0x18056B93C (--$FailureTrace@AEAY0BP@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BP@$$CBD$$QEAJ@Z.c)
 *     ??$Start@$$V@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@SA?AV01@XZ @ 0x18056B9C4 (--$Start@$$V@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@SA-AV01@XZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@@experimental@std@@@Z @ 0x18056BB88 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_18056BB88.c)
 *     ??$await_transform@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@12@$$QEAU?$IAsyncOperation@I@Foundation@Windows@2@@Z @ 0x18056BB94 (--$await_transform@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@-$promise_base@Upromise_type@.c)
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@12@$$QEAUawaitable@?1??resume_background@2@YA@XZ@@Z @ 0x18056BCBC (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Up_ea_18056BCBC.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x18056C544 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundation@Windows@winrt.c)
 *     ??1?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@QEAA@XZ @ 0x18056C59C (--1-$tuple@V-$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@UIDropTarg.c)
 *     ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x18056C5EC (--1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ.c)
 *     ??R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBAXXZ @ 0x18056C814 (--R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBAXXZ.c)
 *     ?DropDataOnWin32EndPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAKAEBV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@9@PEAUHWND__@@AEBUtagPOINT@@_N@Z @ 0x18056CCC8 (-DropDataOnWin32EndPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inter.c)
 *     ?GetCaretPointFromWindowThread@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@PEAUHWND__@@UtagRECT@@@std@@PEAUHWND__@@@Z @ 0x18056CE74 (-GetCaretPointFromWindowThread@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell.c)
 *     ?GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@PEAUHWND__@@@Z @ 0x18056D190 (-GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimula.c)
 *     ?GetForegroundApplicationRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@UtagRECT@@PEAUHWND__@@@std@@XZ @ 0x18056D448 (-GetForegroundApplicationRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@.c)
 *     ?GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@AEBUtagPOINT@@PEAU8@1@Z @ 0x18056D560 (-GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 *     ?GetWindowIdAndTextSelectionRect@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@PEAUHWND__@@UtagRECT@@@std@@XZ @ 0x18056D8D0 (-GetWindowIdAndTextSelectionRect@DragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 *     ?Stop@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18056E46C (-Stop@-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect.c)
 *     ?TransferToMember@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA?AV12@XZ @ 0x18056E8B4 (-TransferToMember@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA-AV12@XZ.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAAIXZ @ 0x18056E8E8 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@@impl@winrt@@QEAAI.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18056EBB4 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18056EBB4.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUfinal_suspend_awaiter@123@XZ @ 0x18056EC54 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=2
void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__ResumeCoro_1(
        __int64 a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64); // rbx
  int v5; // eax
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 WindowIdAndTextSelectionRect; // rcx
  __int64 v10; // rax
  __int64 ForegroundApplicationRect; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CaretPointFromWindowThread; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm0
  int v17; // eax
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *v18; // rcx
  int v19; // eax
  HWND InitialTargetWindowFromPoint; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 DropEndPointByTraversingParentChain; // rax
  int v25; // ecx
  char v26; // al
  int v27; // eax
  char v28; // bl
  __int64 v29; // rbx
  __int64 v30; // rcx
  char v31; // al
  winrt::Windows::Foundation::IUnknown *v32; // rax
  __int64 v33; // rbx
  char v34; // al
  int v35; // eax
  int v36; // ebx
  bool v37; // r12
  __int64 v38; // rax
  __int16 v39; // ax
  int v40; // [rsp+20h] [rbp-108h]
  __int16 v41; // [rsp+30h] [rbp-F8h]
  __int128 v43; // [rsp+40h] [rbp-E8h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v2 = a1;
  v41 = *(_WORD *)(a1 + 8);
  if ( (unsigned __int16)(v41 + 1) > 8u )
  {
LABEL_30:
    __debugbreak();
  }
  else
  {
    switch ( v41 )
    {
      case -1:
      case 1:
      case 3:
        goto LABEL_28;
      case 0:
        goto LABEL_30;
      case 2:
        DragDropSimulatorTelemetryProvider::OnSimulateDrop::Start<>((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 16));
        *(_QWORD *)(a1 + 336) = 0LL;
        v3 = **(__int64 (__fastcall *****)(_QWORD, GUID *, __int64))(a1 + 2313);
        v4 = **v3;
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 336));
        v5 = v4(v3, &GUID_0000010e_0000_0000_c000_000000000046, a1 + 336);
        if ( v5 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x72,
            (int)"pcshell\\twinui\\dragdropsimulator\\lib\\dragdropsimulatorcomponent.cpp",
            (const char *)(unsigned int)v5,
            v40);
        *(_QWORD *)(a1 + 1680) = a1 + 1;
        winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::get_strong(
          *(_QWORD *)(a1 + 2305),
          (_QWORD *)(a1 + 344));
        DragDropSimulatorTelemetryProvider::OnSimulateDrop::TransferToMember(a1 + 16, a1 + 352);
        *(_QWORD *)&v43 = a1 + 16;
        *((_QWORD *)&v43 + 1) = a1 + 352;
        *(_OWORD *)(a1 + 672) = v43;
        *(_BYTE *)(a1 + 688) = 1;
        *(_BYTE *)(a1 + 696) = 0;
        *(_QWORD *)(a1 + 1696) = a1 - 112;
        *(_QWORD *)(a1 + 848) = ___await_transform_Uawaitable__1__resume_background_winrt__YA_XZ____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperation__N_Foundation_Windows_winrt__PEAUDragDropSimulatorComponent_implementation_DragDropSimulator_Shell_Internal_34_AEBUIInspectable_234_W4DragDropSimulatorDropPoint_78934__N_experimental_std__U__IAsyncOperation__N_Foundation_Windows_winrt__X_impl_winrt__QEAA_AU__notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__12___QEAUawaitable__1__resume_background_2_YA_XZ__Z(
                                  a1 - 112,
                                  a1 + 704);
        if ( winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready() )
          goto LABEL_8;
        *(_WORD *)(a1 + 8) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std___experimental_std___Z(
          v6,
          a1);
        return;
      case 4:
LABEL_8:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
        *(_BYTE *)(a1 + 688) = 0;
        _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(a1 + 672);
        DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 352));
        v7 = (__int64 *)(*(_QWORD *)(a1 + 1680) + 2304LL);
        *(_QWORD *)(a1 + 1712) = v7;
        v8 = *v7;
        *(_QWORD *)(a1 + 1728) = *v7;
        *(_QWORD *)(a1 + 864) = v8;
        WindowIdAndTextSelectionRect = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetWindowIdAndTextSelectionRect(
                                         v8,
                                         a1 + 736);
        *(_QWORD *)(a1 + 1504) = WindowIdAndTextSelectionRect;
        *(_QWORD *)(a1 + 2160) = WindowIdAndTextSelectionRect + 16;
        v10 = *(_QWORD *)(WindowIdAndTextSelectionRect + 16);
        *(_QWORD *)(a1 + 2176) = v10;
        *(_QWORD *)(a1 + 728) = v10;
        *(_OWORD *)(a1 + 712) = *(_OWORD *)WindowIdAndTextSelectionRect;
        ForegroundApplicationRect = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetForegroundApplicationRect(
                                      WindowIdAndTextSelectionRect,
                                      a1 + 784);
        *(_QWORD *)(a1 + 1584) = ForegroundApplicationRect;
        *(_QWORD *)(a1 + 2192) = ForegroundApplicationRect + 8;
        *(_OWORD *)(a1 + 768) = *(_OWORD *)(ForegroundApplicationRect + 8);
        v12 = *(_QWORD *)ForegroundApplicationRect;
        *(_QWORD *)(a1 + 2208) = *(_QWORD *)ForegroundApplicationRect;
        *(_QWORD *)(a1 + 760) = v12;
        *(_QWORD *)(a1 + 808) = 0LL;
        *(_QWORD *)(a1 + 1744) = a1 + 17;
        *(_QWORD *)(a1 + 1760) = a1 + 2321;
        LODWORD(ForegroundApplicationRect) = *(_DWORD *)(a1 + 2321);
        *(_DWORD *)(a1 + 1776) = ForegroundApplicationRect;
        v13 = 0LL;
        if ( !(_DWORD)ForegroundApplicationRect )
        {
          *(_OWORD *)(a1 + 768) = *(_OWORD *)(a1 + 712);
          if ( !*(_QWORD *)(a1 + 728) )
          {
            if ( v12 )
            {
              CaretPointFromWindowThread = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetCaretPointFromWindowThread(
                                             v12,
                                             a1 + 888,
                                             v12);
              *(_QWORD *)(a1 + 880) = CaretPointFromWindowThread;
              *(_QWORD *)(a1 + 1792) = CaretPointFromWindowThread + 16;
              v15 = *(_QWORD *)(CaretPointFromWindowThread + 16);
              *(_QWORD *)(a1 + 2224) = v15;
              *(_QWORD *)(a1 + 832) = v15;
              v16 = *(_OWORD *)CaretPointFromWindowThread;
              *(_OWORD *)(a1 + 816) = *(_OWORD *)CaretPointFromWindowThread;
              v13 = 0LL;
              if ( v15 )
              {
                v13 = v15;
                *(_QWORD *)(a1 + 808) = v15;
                *(_OWORD *)(a1 + 768) = v16;
              }
            }
          }
        }
        v17 = *(_DWORD *)(a1 + 768) + *(_DWORD *)(a1 + 776);
        *(_DWORD *)(a1 + 1808) = v17;
        v17 /= 2;
        *(_DWORD *)(a1 + 1824) = v17;
        *(_DWORD *)(a1 + 912) = v17;
        *(_QWORD *)(a1 + 1840) = HIDWORD(*(_QWORD *)(a1 + 768));
        v18 = (winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *)HIDWORD(*(_QWORD *)(a1 + 776));
        *(_QWORD *)(a1 + 1856) = v18;
        v19 = *(_DWORD *)(a1 + 1840) + (_DWORD)v18;
        *(_DWORD *)(a1 + 1872) = v19;
        v19 /= 2;
        *(_DWORD *)(a1 + 1888) = v19;
        *(_DWORD *)(a1 + 916) = v19;
        if ( v13
          || (InitialTargetWindowFromPoint = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetInitialTargetWindowFromPoint(
                                               v18,
                                               (const struct tagPOINT *)(a1 + 912),
                                               *(HWND *)(a1 + 760),
                                               *(HWND *)(a1 + 728)),
              *(_QWORD *)(a1 + 1600) = InitialTargetWindowFromPoint,
              (*(_QWORD *)(a1 + 808) = InitialTargetWindowFromPoint) != 0LL) )
        {
          *(_QWORD *)(a1 + 928) = 0LL;
          *(_QWORD *)(a1 + 936) = 0LL;
          *(_QWORD *)(a1 + 1904) = v7;
          v23 = *v7;
          *(_QWORD *)(a1 + 1920) = *v7;
          *(_QWORD *)(a1 + 1440) = v23;
          DropEndPointByTraversingParentChain = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::GetDropEndPointByTraversingParentChain(
                                                  v23,
                                                  a1 + 976,
                                                  *(_QWORD *)(a1 + 808));
          *(_QWORD *)(a1 + 1552) = DropEndPointByTraversingParentChain;
          *(_QWORD *)(a1 + 952) = a1 + 944;
          *(_QWORD *)(a1 + 960) = a1 + 936;
          *(_QWORD *)(a1 + 968) = a1 + 928;
          std::tuple<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy> &,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> &,HWND__ * &>::operator=<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,HWND__ *,0>(
            a1 + 952,
            DropEndPointByTraversingParentChain);
          std::tuple<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,HWND__ *>::~tuple<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,HWND__ *>(a1 + 976);
          *(_DWORD *)(a1 + 1000) = 0;
          if ( *(_QWORD *)(a1 + 928) )
          {
            *(_QWORD *)(a1 + 1936) = a1 + 21;
            *(_QWORD *)(a1 + 1952) = a1 + 2325;
            v26 = *(_BYTE *)(a1 + 2325);
            *(_BYTE *)(a1 + 1968) = v26;
            v27 = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnWin32EndPoint(
                    v25,
                    (int)a1 + 928,
                    (int)a1 + 336,
                    *(_QWORD *)(a1 + 944),
                    a1 + 912,
                    v26);
            v28 = v27;
            *(_DWORD *)(a1 + 1616) = v27;
            *(_DWORD *)(a1 + 1000) = v27;
          }
          else if ( *(_QWORD *)(a1 + 936) )
          {
            DragDropSimulatorTelemetryProvider::OnSimulateDrop::TransferToMember(a1 + 16, a1 + 1008);
            *(_QWORD *)(a1 + 1328) = a1 + 16;
            *(_QWORD *)(a1 + 1336) = a1 + 1008;
            *(_OWORD *)(a1 + 1344) = *(_OWORD *)(a1 + 1328);
            *(_BYTE *)(a1 + 1360) = 1;
            v29 = *(_QWORD *)(a1 + 1696);
            *(_QWORD *)(a1 + 1488) = v29;
            *(_QWORD *)(a1 + 1984) = v7;
            v30 = *v7;
            *(_QWORD *)(a1 + 2000) = *v7;
            *(_QWORD *)(a1 + 1472) = v30;
            *(_QWORD *)(a1 + 1936) = a1 + 21;
            *(_QWORD *)(a1 + 2016) = a1 + 2325;
            v31 = *(_BYTE *)(a1 + 2325);
            *(_BYTE *)(a1 + 2032) = v31;
            v32 = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync(
                    v30,
                    (winrt::Windows::Foundation::IUnknown *)(a1 + 1368),
                    a1 + 936,
                    a1 + 336,
                    a1 + 912,
                    v31,
                    v41,
                    a1);
            *(_QWORD *)(a1 + 1456) = v32;
            v33 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>(
                    v29,
                    a1 + 1376,
                    v32);
            *(_QWORD *)(a1 + 1632) = v33;
            v34 = winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(v33);
            *(_BYTE *)(a1 + 1648) = v34;
            if ( !v34 )
            {
              *(_WORD *)(a1 + 8) = 6;
              winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type>(
                v33,
                a1);
              return;
            }
LABEL_23:
            v35 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>>::await_resume(*(_QWORD *)(a1 + 1632));
            v28 = v35;
            *(_DWORD *)(a1 + 1664) = v35;
            *(_DWORD *)(a1 + 1000) = v35;
            winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 1376);
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 1368));
            *(_BYTE *)(a1 + 1360) = 0;
            _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(a1 + 1344);
            DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 1008));
          }
          else
          {
            *(_DWORD *)(a1 + 1400) = -2147467259;
            DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[31],long>();
            v28 = 0;
          }
          v36 = v28 & 7;
          *(_DWORD *)(a1 + 2048) = v36;
          v37 = v36 != 0;
          *(_BYTE *)(a1 + 2256) = v36 != 0;
          wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 16);
          if ( !v36 )
          {
            *(_DWORD *)(a1 + 1404) = 0;
            DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[27],long>();
          }
          v21 = *(_QWORD *)(a1 + 1696);
          *(_QWORD *)(a1 + 2240) = v21 + 96;
          *(_QWORD *)(a1 + 2272) = v21 + 96;
          *(_BYTE *)(v21 + 96) = v37;
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 936));
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 928));
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 344);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 336));
          DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 16));
          *(_QWORD *)(a1 + 2288) = v21 + 96;
          v22 = v21;
          v2 = a1;
        }
        else
        {
          *(_DWORD *)(a1 + 920) = -2147467259;
          DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[28],long>();
          wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 16);
          v21 = *(_QWORD *)(a1 + 1696);
          *(_QWORD *)(a1 + 2240) = v21 + 96;
          *(_QWORD *)(a1 + 2272) = v21 + 96;
          *(_BYTE *)(v21 + 96) = 0;
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 344);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 336));
          DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 16));
          *(_QWORD *)(a1 + 2288) = v21 + 96;
          v22 = v21;
          v2 = a1;
        }
        *(_QWORD *)(a1 + 1568) = v22;
        v38 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend(
                v21,
                a1 + 1424);
        *(_QWORD *)(a1 + 1416) = v38;
        *(_WORD *)(a1 + 8) = 0;
        if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(v38) )
        {
LABEL_28:
          *(_QWORD *)(a1 + 1696) = a1 - 112;
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>(a1 - 112);
          *(_QWORD *)(a1 + 2080) = a1 + 10;
          v39 = *(_WORD *)(a1 + 10);
          *(_WORD *)(a1 + 2096) = v39;
          if ( v39 )
          {
            *(_QWORD *)(a1 + 2112) = 2441LL;
            *(_QWORD *)(a1 + 1536) = 2441LL;
            *(_QWORD *)(v2 + 1520) = a1 - 112;
            operator delete(*(void **)(a1 + 1520));
          }
        }
        break;
      case 5:
        *(_BYTE *)(a1 + 688) = 0;
        _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(a1 + 672);
        DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 352));
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 344);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 336));
        DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 16));
        goto LABEL_28;
      case 6:
        goto LABEL_23;
      case 7:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 1376);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 1368));
        *(_BYTE *)(a1 + 1360) = 0;
        _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(a1 + 1344);
        DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 1008));
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 936));
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 928));
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 344);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 336));
        DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)(a1 + 16));
        goto LABEL_28;
    }
  }
}
