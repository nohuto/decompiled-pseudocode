/*
 * XREFs of ?set@?QIFrameworkElement@Xaml@UI@Windows@@Margin@FrameworkElement@234@UE$AAAXVThickness@234@@Z @ 0x180777924
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1807733A8 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _set__QIFrameworkElement_Xaml_UI_Windows__Margin_FrameworkElement_234_UE_AAAXVThickness_234__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        _OWORD *a2)
{
  __int64 (__fastcall *v3)(__int64, _OWORD *); // rax
  int v4; // ebx
  __int64 result; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h]

  v7 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
  v3 = *(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v7 + 256LL);
  v6[0] = *a2;
  v6[1] = a2[1];
  v4 = v3(v7, v6);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v4 < 0 )
  {
    __abi_WinRTraiseException(v4);
    __debugbreak();
  }
  return result;
}
