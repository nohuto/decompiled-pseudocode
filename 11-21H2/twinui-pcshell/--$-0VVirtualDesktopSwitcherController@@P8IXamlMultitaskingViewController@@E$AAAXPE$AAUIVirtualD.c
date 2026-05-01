/*
 * XREFs of ??$?0VVirtualDesktopSwitcherController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVVirtualDesktopSwitcherController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUIVirtualDesktop@Multitasking@3Internal@Windows@@1@ZW4CallbackContext@Platform@@_N@Z @ 0x180612568
 * Callers:
 *     ?Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806129A0 (-Initialize@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1800132F4 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ??0__abi_PointerToMemberWeakRefCapture@?1???$?0VVirtualDesktopSwitcherController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVVirtualDesktopSwitcherController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUIVirtualDesktop@Multitasking@4Internal@Windows@@1@ZW4CallbackContext@Platform@@_N@Z@QEAA@0P86@E$AAAX11@Z@Z @ 0x18061279C (--0__abi_PointerToMemberWeakRefCapture@-1---$-0VVirtualDesktopSwitcherController@@P8IXamlMultita.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v6)(__int64); // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)(a1 + 3));
  a1[37] = a1 + 5;
  v4 = 0LL;
  if ( a1 != (_QWORD *)-40LL )
  {
    v6 = IXamlMultitaskingViewController::VirtualDesktopInvoked;
    v7 = 16;
    v4 = `WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
           a1 + 5,
           a2,
           &v6);
  }
  a1[37] = v4;
  return a1;
}
