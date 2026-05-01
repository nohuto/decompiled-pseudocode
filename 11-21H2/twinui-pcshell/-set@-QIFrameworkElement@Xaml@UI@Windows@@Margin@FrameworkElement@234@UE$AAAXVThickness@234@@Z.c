/*
 * XREFs of ?set@?QIFrameworkElement@Xaml@UI@Windows@@Margin@FrameworkElement@234@UE$AAAXVThickness@234@@Z @ 0x1801E9ABC
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1806090C4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x180166278 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _set__QIFrameworkElement_Xaml_UI_Windows__Margin_FrameworkElement_234_UE_AAAXVThickness_234__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        _OWORD *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _OWORD *); // rax
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIFrameworkElement_Xaml_UI_Windows__);
  v4 = *(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v3 + 256LL);
  v5[0] = *a2;
  v5[1] = a2[1];
  LODWORD(a2) = v4(v3, v5);
  __abi_winrt_ptr_dtor(v3);
  __abi_ThrowIfFailed((int)a2);
}
