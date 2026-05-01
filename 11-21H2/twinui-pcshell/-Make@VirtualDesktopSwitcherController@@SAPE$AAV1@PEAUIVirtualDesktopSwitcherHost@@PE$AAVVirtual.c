/*
 * XREFs of ?Make@VirtualDesktopSwitcherController@@SAPE$AAV1@PEAUIVirtualDesktopSwitcherHost@@PE$AAVVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180612C50
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1806090C4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0VirtualDesktopSwitcherController@@AE$AAA@PEAUIVirtualDesktopSwitcherHost@@PE$AAVVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180612668 (--0VirtualDesktopSwitcherController@@AE$AAA@PEAUIVirtualDesktopSwitcherHost@@PE$AAVVirtualDeskto.c)
 *     ?Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806129A0 (-Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopSwitcherController::Make(__int64 a1, __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi

  v4 = Platform::Details::Heap::Allocate(0x80uLL, 0xE8uLL);
  v5 = VirtualDesktopSwitcherController::VirtualDesktopSwitcherController((__int64)v4, a1, a2);
  v6 = __abi_winrt_ptr_ctor(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  VirtualDesktopSwitcherController::Initialize(v6);
  v7 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
