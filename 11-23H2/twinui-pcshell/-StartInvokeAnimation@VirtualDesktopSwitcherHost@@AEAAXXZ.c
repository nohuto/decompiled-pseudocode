/*
 * XREFs of ?StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18077661C
 * Callers:
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x180776AD0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18007CF70 (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x18065C2EC (-StartAnimation@-$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x180772ED4 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 *     ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualHeight@FrameworkElement@234@UE$AAANXZ @ 0x1807775F4 (-get@-QIFrameworkElement@Xaml@UI@Windows@@ActualHeight@FrameworkElement@234@UE$AAANXZ.c)
 *     ?get@?QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ @ 0x180777684 (-get@-QIFrameworkElement@Xaml@UI@Windows@@ActualWidth@FrameworkElement@234@UE$AAANXZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall VirtualDesktopSwitcherHost::StartInvokeAnimation(VirtualDesktopSwitcherHost *this)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rdi
  char v5; // r14
  __int64 v6; // rbx
  float QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ; // xmm1_4
  __int64 *v8; // rsi
  void (__fastcall ***v9)(_QWORD, void *, __int64 *); // rbx
  __int64 v10; // rdi
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  void (__fastcall ***v12)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp-8h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF

  LODWORD(v13) = 0;
  v2 = __abi_winrt_cast_to(
         0,
         *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 21),
         (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
  v15 = v2;
  v3 = 1;
  LODWORD(v13) = 1;
  if ( _get__QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ(v2) == 0.0 )
  {
    v4 = v14;
  }
  else
  {
    v4 = __abi_winrt_cast_to(
           0,
           *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 21),
           (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
    v14 = v4;
    v3 = 3;
    LODWORD(v13) = 3;
    if ( _get__QIFrameworkElement_Xaml_UI_Windows__ActualWidth_FrameworkElement_234_UE_AAANXZ(v4) != 0.0 )
    {
      v5 = 1;
      goto LABEL_6;
    }
  }
  v5 = 0;
LABEL_6:
  if ( (v3 & 2) != 0 )
  {
    v3 &= ~2u;
    LODWORD(v13) = v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (v3 & 1) != 0 && v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v5 )
  {
    v14 = 3000000LL;
    v6 = __abi_winrt_cast_to(
           0,
           *((__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))this + 21),
           (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
    v15 = v6;
    QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ = _get__QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ(v6);
    *(float *)&v13 = QIFrameworkElement_Xaml_UI_Windows__ActualHeight_FrameworkElement_234_UE_AAANXZ;
    VirtualDesktopSwitcherHost::CreateAnimation(
      (__int64)this,
      &v11,
      (__int64)&v13,
      (__int64)&unk_1808B8C38,
      &v14,
      dword_1808B8C50,
      &qword_1808B8C40,
      &qword_1808B8C48);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v8 = from_cx<winrt::Windows::UI::Xaml::UIElement>(
           &v15,
           *((__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))this + 21));
    v9 = v12;
    if ( v12 )
    {
      v14 = 0LL;
      (**v12)(v12, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v14);
      v10 = v14;
      v13 = v14;
    }
    else
    {
      v13 = 0LL;
      v10 = 0LL;
    }
    winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(v8, &v13);
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    if ( v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  }
}
