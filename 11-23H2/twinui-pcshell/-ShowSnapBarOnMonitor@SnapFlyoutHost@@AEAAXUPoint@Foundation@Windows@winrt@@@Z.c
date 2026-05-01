/*
 * XREFs of ?ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x18067C3C8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point___lambda_057b330fc7f4aad09d5892332e220aec___::Invoke @ 0x180227A10 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180227A10.c)
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180228430 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SnapBar_ShowSnapBarOnMonitor@AEBMAEBM@SnapFlyoutTelemetry@@SAXAEBM0@Z @ 0x180678470 (--$SnapBar_ShowSnapBarOnMonitor@AEBMAEBM@SnapFlyoutTelemetry@@SAXAEBM0@Z.c)
 *     ??$_Find_lower_bound@PEAUHMONITOR__@@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@9@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@AEBQEAUHMONITOR__@@@Z @ 0x180678E48 (--$_Find_lower_bound@PEAUHMONITOR__@@@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@USnapFlyoutInstanc.c)
 *     ?GetVisibleSnapBar@SnapFlyoutHost@@AEAA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@XZ @ 0x18067AA44 (-GetVisibleSnapBar@SnapFlyoutHost@@AEAA-AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Window.c)
 *     ?Hide@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067AC5C (-Hide@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@Sn.c)
 *     ?InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z @ 0x18067AF34 (-InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@P.c)
 *     ?Show@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067C330 (-Show@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@Sn.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x18067E92C (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::ShowSnapBarOnMonitor(__int64 a1, __int64 a2)
{
  const char *v3; // r9
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rax
  HMONITOR v5; // rbx
  HMONITOR v6; // rax
  unsigned __int64 v7; // rsi
  char v8; // r15
  RTL_SRWLOCK *v9; // rbx
  _QWORD *v10; // r10
  __int64 v11; // r15
  _QWORD *v12; // r14
  void (__fastcall ***v13)(_QWORD, void *, POINT *); // rcx
  POINT v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v16; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  POINT pt; // [rsp+90h] [rbp+40h] BYREF
  void (__fastcall ***v21)(_QWORD, __int64 *, __int64 *); // [rsp+98h] [rbp+48h] BYREF

  v15 = a2;
  SnapFlyoutTelemetry::SnapBar_ShowSnapBarOnMonitor<float const &,float const &>((int *)&v15, (int *)&v15 + 1);
  SnapFlyoutHost::GetVisibleSnapBar(a1, (winrt::Windows::Foundation::IUnknown *)&v21);
  pt = 0LL;
  if ( !winrt::Windows::Foundation::operator==(&v21, &pt) )
  {
    v4 = v21;
    if ( v21 )
      v4 = v21 - 2;
    v5 = (HMONITOR)v4[45];
    if ( !v5 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x39B,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
        v3);
    pt.x = (int)*(float *)&v15;
    pt.y = (int)*((float *)&v15 + 1);
    v6 = MonitorFromPoint(pt, 0);
    v7 = (unsigned __int64)v6;
    pt = (POINT)v6;
    if ( v6 && v5 != v6 )
    {
      winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::Hide(&v21);
      v8 = 1;
      v9 = (RTL_SRWLOCK *)(a1 + 176);
      AcquireSRWLockShared((PSRWLOCK)(a1 + 176));
      v16 = (RTL_SRWLOCK *)(a1 + 176);
      std::_Tree<std::_Tmap_traits<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>,0>>::_Find_lower_bound<HMONITOR__ *>(
        (__int64 *)(a1 + 144),
        (__int64)v17,
        (unsigned __int64 *)&pt);
      if ( !*(_BYTE *)(v18 + 25) && v7 >= *(_QWORD *)(v18 + 32) && v18 != *v10 )
      {
        v11 = *(_QWORD *)(a1 + 112);
        v12 = (_QWORD *)(v18 + 40);
        v13 = *(void (__fastcall ****)(_QWORD, void *, POINT *))(v18 + 40);
        pt = 0LL;
        if ( v13 )
        {
          (**v13)(v13, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>, &pt);
          v14 = pt;
        }
        else
        {
          v14 = 0LL;
        }
        winrt::Windows::Foundation::IUnknown::operator=(
          (winrt::Windows::Foundation::IUnknown *)(v11 + 40),
          (winrt::Windows::Foundation::IUnknown *)&pt);
        if ( v14 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&pt);
        v8 = 0;
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          &v16,
          0LL);
        winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::Show(v12);
        v9 = v16;
      }
      if ( v9 )
        ReleaseSRWLockShared(v9);
      if ( v8 )
        SnapFlyoutHost::InternalShowBar(a1, *(_QWORD *)(a1 + 128), *(_DWORD *)(a1 + 120), v7);
    }
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v21);
}
