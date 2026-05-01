/*
 * XREFs of ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060BAB0
 * Callers:
 *     VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x1801E9550 (VirtualDesktopSwitcherHost--DismissAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18001450C (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x180166278 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_37bafbeb3dd0776f24b59a9d11710915___ @ 0x1801E9290 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspectable_winrt--Wi.c)
 *     _lambda_37bafbeb3dd0776f24b59a9d11710915_::_lambda_37bafbeb3dd0776f24b59a9d11710915_ @ 0x1801E93CC (_lambda_37bafbeb3dd0776f24b59a9d11710915_--_lambda_37bafbeb3dd0776f24b59a9d11710915_.c)
 *     ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ @ 0x1801E9A08 (-get@-QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VVirtualDesktopSwitcherHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVVirtualDesktopSwitcherHost@@@Z @ 0x1806075BC (--0-$com_ptr_t@VVirtualDesktopSwitcherHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVVirtualDes.c)
 *     ?Completed@?$consume_Windows_UI_Composition_ICompositionCommitBatch@UICompositionCommitBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@Windows@3@@Z @ 0x180608A08 (-Completed@-$consume_Windows_UI_Composition_ICompositionCommitBatch@UICompositionCommitBatch@Com.c)
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x180608BE4 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 *     ?GetCommitBatch@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA?AUCompositionCommitBatch@Composition@UI@Windows@3@AEBW4CompositionBatchTypes@5673@@Z @ 0x180609D24 (-GetCommitBatch@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows.c)
 *     ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBAXAEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x18060BA20 (-StartAnimation@-$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualHeight@FrameworkElement@234@UE$AAANXZ @ 0x18060CCE4 (-get@-QIFrameworkElement@Xaml@UI@Windows@@ActualHeight@FrameworkElement@234@UE$AAANXZ.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall VirtualDesktopSwitcherHost::StartDismissAnimation(VirtualDesktopSwitcherHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  char v3; // r14
  int v4; // r13d
  __int64 v5; // r12
  int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, __int64, __int64 *); // rsi
  __int64 v8; // rbx
  float QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ; // xmm1_4
  winrt::Windows::Foundation::IUnknown *CommitBatch; // rax
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-28h] BYREF
  int v18; // [rsp+58h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp-10h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+50h] BYREF

  LODWORD(v20) = 0;
  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  v17[1] = v2;
  v3 = 1;
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v18 = v4;
  *((_DWORD *)this + 126) = 1;
  v5 = __abi_winrt_cast_to(
         0,
         *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 22),
         (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
  v22 = v5;
  v6 = 1;
  LODWORD(v20) = 1;
  if ( _get__QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ(v5) == 0.0 )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v21;
  }
  else
  {
    v7 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_cast_to(
                                                                 0,
                                                                 *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this
                                                                 + 22),
                                                                 (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
    v21 = (__int64)v7;
    v6 = 3;
    LODWORD(v20) = 3;
    if ( _get__QIFrameworkElement_Xaml_UI_Windows__ActualWidth_FrameworkElement_234_UE_AAANXZ(v7) != 0.0 )
      goto LABEL_5;
  }
  v3 = 0;
LABEL_5:
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    LODWORD(v20) = v6;
    __abi_winrt_ptr_dtor((__int64)v7);
  }
  if ( (v6 & 1) != 0 )
    __abi_winrt_ptr_dtor(v5);
  if ( v3 )
  {
    v21 = 1500000LL;
    v8 = __abi_winrt_cast_to(
           0,
           *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 22),
           (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
    v22 = v8;
    QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ = _get__QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ(v8);
    *(float *)&v20 = QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ;
    VirtualDesktopSwitcherHost::CreateAnimation(
      (__int64)this,
      &v16,
      (__int64)&unk_180698710,
      (__int64)&v20,
      (__int64)&v21,
      dword_1806986F0,
      (__int64)"333?",
      (__int64)&unk_180698700);
    __abi_winrt_ptr_dtor(v8);
    LODWORD(v20) = 1;
    CommitBatch = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::GetCommitBatch(
                                                            &v16,
                                                            &v21,
                                                            (unsigned int *)&v20);
    winrt::Windows::Foundation::IUnknown::operator=((VirtualDesktopSwitcherHost *)((char *)this + 416), CommitBatch);
    if ( v21 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
    v11 = wil::com_ptr_t<VirtualDesktopSwitcherHost,wil::err_exception_policy>::com_ptr_t<VirtualDesktopSwitcherHost,wil::err_exception_policy>(
            &v21,
            (__int64)this);
    v12 = lambda_37bafbeb3dd0776f24b59a9d11710915_::_lambda_37bafbeb3dd0776f24b59a9d11710915_(&v19, (__int64)this, v11);
    winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_37bafbeb3dd0776f24b59a9d11710915___(
      &v20,
      v12);
    *((_QWORD *)this + 53) = *winrt::impl::consume_Windows_UI_Composition_ICompositionCommitBatch<winrt::Windows::UI::Composition::ICompositionCommitBatch>::Completed(
                                (_QWORD *)this + 52,
                                &v22,
                                &v20);
    if ( v20 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
    v13 = from_cx<winrt::Windows::UI::Xaml::UIElement>(
            &v22,
            *((__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))this + 22));
    v14 = v17[0];
    if ( v17[0] )
    {
      v21 = 0LL;
      (**(void (__fastcall ***)(_QWORD, void *, __int64 *))v17[0])(
        v17[0],
        &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>,
        &v21);
      v15 = v21;
    }
    else
    {
      v15 = 0LL;
    }
    v20 = v15;
    winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(v13, &v20);
    if ( v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
    if ( v22 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v17);
    if ( v16 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  }
  if ( v4 >= 0 )
    LeaveCriticalSection(v2);
}
