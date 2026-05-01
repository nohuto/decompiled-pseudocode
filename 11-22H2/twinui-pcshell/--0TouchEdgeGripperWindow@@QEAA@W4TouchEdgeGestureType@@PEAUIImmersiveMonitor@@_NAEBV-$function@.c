/*
 * XREFs of ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x180658C9C
 * Callers:
 *     winrt::make_self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_&_IImmersiveMonitor___bool_&__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd___ @ 0x1806566F0 (winrt--make_self_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_-_IImmersiveMonitor___bool_-__.c)
 * Callees:
 *     ??0?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@QEAA@AEBV01@@Z @ 0x1801833D0 (--0-$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$ActivateInstance@UAccessibilitySettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUAccessibilitySettings@ViewManagement@UI@23@XZ @ 0x1806577C8 (--$ActivateInstance@UAccessibilitySettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@.c)
 *     ??$call@P6A?AUAccessibilitySettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UAccessibilitySettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUAccessibilitySettings@ViewManagement@UI@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1806582C4 (--$call@P6A-AUAccessibilitySettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foun.c)
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18065988C (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?CreateXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18065AFA8 (-CreateXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     ?GetMonitorDisplayInfo@TouchEdgeGripperWindow@@AEAAJPEAUIImmersiveMonitor@@PEAUCRect@Geometry@@PEAI2@Z @ 0x18065B378 (-GetMonitorDisplayInfo@TouchEdgeGripperWindow@@AEAAJPEAUIImmersiveMonitor@@PEAUCRect@Geometry@@P.c)
 *     ?PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z @ 0x18065BAF0 (-PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z.c)
 */

// Hidden C++ exception states: #wind=9
TouchEdgeGripperWindow *__fastcall TouchEdgeGripperWindow::TouchEdgeGripperWindow(
        TouchEdgeGripperWindow *this,
        unsigned int a2,
        struct IImmersiveMonitor *a3,
        char a4,
        __int64 a5)
{
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // rcx
  _QWORD *v10; // rdx
  TouchEdgeGripperWindow *v11; // rcx
  unsigned int v13; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 *v15; // [rsp+38h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-40h] BYREF
  TouchEdgeGripperWindow *v17; // [rsp+50h] [rbp-30h]
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF

  v17 = this;
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::KeyboardHosting::IInputViewOptions>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &TouchEdgeGripperWindow::`vftable';
  std::function<void (unsigned int,winrt::Windows::Foundation::Point const &)>::function<void (unsigned int,winrt::Windows::Foundation::Point const &)>(
    (__int64)this + 24,
    a5);
  *((_BYTE *)this + 88) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v10 = (_QWORD *)((char *)this + 128);
  v15 = &qword_1809911D8;
  _InterlockedIncrement64(&qword_1809911D8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::AccessibilitySettings,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::ViewManagement::AccessibilitySettings>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::AccessibilitySettings,winrt::Windows::Foundation::IActivationFactory>,
      v10);
    _InterlockedDecrement64(&qword_1809911D8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1809911D8);
    *(_QWORD *)&v16 = _lambda_90a9149a8a4e88288c64e9163af60b52_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::ViewManagement::AccessibilitySettings,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::ViewManagement::AccessibilitySettings (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      v9,
      (__int64)v10,
      (void (__fastcall **)(__int64, __int64 *))&v16);
  }
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 160) = a4;
  v18 = 0LL;
  if ( TouchEdgeGripperWindow::GetMonitorDisplayInfo(v11, a3, (struct Geometry::CRect *)&v18, &v14, &v13) >= 0 )
  {
    TouchEdgeGripperWindow::CreateXamlWindow(this);
    TouchEdgeGripperWindow::CreateXamlContent(this, a2);
    v16 = v18;
    TouchEdgeGripperWindow::PositionXamlWindow(this, a2, &v16, v14, v13);
  }
  return this;
}
