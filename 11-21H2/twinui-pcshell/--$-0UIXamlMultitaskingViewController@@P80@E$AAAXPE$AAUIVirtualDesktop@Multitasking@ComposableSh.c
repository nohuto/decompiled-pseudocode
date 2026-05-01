/*
 * XREFs of ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUIVirtualDesktop@Multitasking@3Internal@Windows@@1@ZW4CallbackContext@Platform@@_N@Z @ 0x1800122A0
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180010454 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitcherControlBase@3456@PE$AAVWindow@Xaml@UI@Windows@@PEAUIXamlExplorerHostWindow@@@Z @ 0x180434ABC (-Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@Win.c)
 * Callees:
 *     ??0__abi_PointerToMemberWeakRefCapture@?1???$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z@VirtualDesktopInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P86@E$AAAXPE$AAUIVirtualDesktop@Multitasking@4Internal@Windows@@1@ZW4CallbackContext@Platform@@_N@Z@QEAA@02@Z @ 0x1800127F0 (--0__abi_PointerToMemberWeakRefCapture@-1---$-0UIXamlMultitaskingViewController@@P8_ea_1800127F0.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1800132F4 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 3);
  a1[37] = a1 + 5;
  v4 = 0LL;
  if ( a1 != (_QWORD *)-40LL )
    v4 = `WindowsInternal::ComposableShell::Experiences::Switcher::VirtualDesktopInvokedEventHandler::VirtualDesktopInvokedEventHandler'::`2'::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
           a1 + 5,
           a2);
  a1[37] = v4;
  return a1;
}
