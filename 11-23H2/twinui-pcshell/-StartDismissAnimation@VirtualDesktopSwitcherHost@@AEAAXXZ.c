/*
 * XREFs of ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180776240
 * Callers:
 *     VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x18028B890 (VirtualDesktopSwitcherHost--DismissAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18007CF70 (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x18065C2EC (-StartAnimation@-$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_37bafbeb3dd0776f24b59a9d11710915___ @ 0x18076FD9C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspecta_ea_18076FD9C.c)
 *     ??0?$com_ptr_t@VVirtualDesktopSwitcherHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVVirtualDesktopSwitcherHost@@@Z @ 0x1807713E0 (--0-$com_ptr_t@VVirtualDesktopSwitcherHost@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVVirtualDes.c)
 *     ?Completed@?$consume_Windows_UI_Composition_ICompositionCommitBatch@UICompositionCommitBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@Windows@3@@Z @ 0x180772D84 (-Completed@-$consume_Windows_UI_Composition_ICompositionCommitBatch@UICompositionCommitBatch@Com.c)
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x180772ED4 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 *     ?GetCommitBatch@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4CompositionBatchTypes@Composition@UI@Windows@3@@Z @ 0x1807742A0 (-GetCommitBatch@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows.c)
 *     ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualHeight@FrameworkElement@234@UE$AAANXZ @ 0x1807775F4 (-get@-QIFrameworkElement@Xaml@UI@Windows@@ActualHeight@FrameworkElement@234@UE$AAANXZ.c)
 *     ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ @ 0x180777684 (-get@-QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall VirtualDesktopSwitcherHost::StartDismissAnimation(VirtualDesktopSwitcherHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r12
  char v3; // r14
  int v4; // r13d
  __int64 v5; // r15
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rbx
  float QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ; // xmm1_4
  winrt::Windows::Foundation::IUnknown *CommitBatch; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rsi
  void (__fastcall ***v14)(_QWORD, void *, __int64 *); // rbx
  __int64 v15; // rdi
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  void (__fastcall ***v17)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp-28h] BYREF
  _QWORD v18[3]; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+68h] [rbp-8h]
  __int64 v20; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+50h] BYREF

  LODWORD(v20) = 0;
  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  v18[2] = v2;
  v3 = 1;
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v19 = v4;
  *((_DWORD *)this + 132) = 1;
  v5 = __abi_winrt_cast_to(
         0,
         *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 21),
         (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
  v22 = v5;
  v6 = 1;
  LODWORD(v20) = 1;
  if ( _get__QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ(v5) == 0.0 )
  {
    v7 = v21;
LABEL_4:
    v3 = 0;
    goto LABEL_5;
  }
  v7 = __abi_winrt_cast_to(
         0,
         *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 21),
         (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
  v21 = v7;
  v6 = 3;
  LODWORD(v20) = 3;
  if ( _get__QIFrameworkElement_Xaml_UI_Windows__ActualWidth_FrameworkElement_234_UE_AAANXZ(v7) == 0.0 )
    goto LABEL_4;
LABEL_5:
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    LODWORD(v20) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (v6 & 1) != 0 && v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v3 )
  {
    v21 = 1500000LL;
    v8 = __abi_winrt_cast_to(
           0,
           *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 21),
           (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
    v22 = v8;
    QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ = _get__QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ(v8);
    *(float *)&v20 = QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ;
    VirtualDesktopSwitcherHost::CreateAnimation(
      (__int64)this,
      &v16,
      (__int64)&unk_1808B8C38,
      (__int64)&v20,
      &v21,
      dword_1808B8C70,
      "333?",
      &qword_1808B8C68);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    LODWORD(v20) = 1;
    CommitBatch = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::GetCommitBatch(
                                                            &v16,
                                                            &v21,
                                                            (unsigned int *)&v20);
    winrt::Windows::Foundation::IUnknown::operator=((VirtualDesktopSwitcherHost *)((char *)this + 424), CommitBatch);
    if ( v21 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
    v11 = wil::com_ptr_t<VirtualDesktopSwitcherHost,wil::err_exception_policy>::com_ptr_t<VirtualDesktopSwitcherHost,wil::err_exception_policy>(
            &v21,
            (__int64)this);
    v18[0] = this;
    v12 = *v11;
    *v11 = 0LL;
    v18[1] = v12;
    winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_37bafbeb3dd0776f24b59a9d11710915___(
      &v20,
      v18);
    *((_QWORD *)this + 54) = *winrt::impl::consume_Windows_UI_Composition_ICompositionCommitBatch<winrt::Windows::UI::Composition::ICompositionCommitBatch>::Completed(
                                (_QWORD *)this + 53,
                                &v22,
                                &v20);
    if ( v20 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    v13 = from_cx<winrt::Windows::UI::Xaml::UIElement>(
            &v22,
            *((__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))this + 21));
    v14 = v17;
    if ( v17 )
    {
      v21 = 0LL;
      (**v17)(v17, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v21);
      v15 = v21;
      v20 = v21;
    }
    else
    {
      v20 = 0LL;
      v15 = 0LL;
    }
    winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(v13, &v20);
    if ( v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
    if ( v22 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    if ( v16 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  }
  if ( v4 >= 0 )
    LeaveCriticalSection(v2);
}
