/*
 * XREFs of ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@2345@@Z@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAVSwitchItemContextMenuArgs@1234@PE$AAUISwitcherViewModel@1234@@ZW4CallbackContext@Platform@@_N@Z @ 0x180012030
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180010454 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ?Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitcherControlBase@3456@PE$AAVWindow@Xaml@UI@Windows@@PEAUIXamlExplorerHostWindow@@@Z @ 0x180434ABC (-Initialize@MonitorFrame@@QEAAXPE$AAUISwitcherViewModel@Switcher@Experiences@ComposableShell@Win.c)
 * Callees:
 *     ??0__abi_PointerToMemberWeakRefCapture@?1???$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@2345@@Z@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P86@E$AAAXPE$AAVSwitchItemContextMenuArgs@2345@PE$AAUISwitcherViewModel@2345@@ZW4CallbackContext@Platform@@_N@Z@QEAA@03@Z @ 0x180012540 (--0__abi_PointerToMemberWeakRefCapture@-1---$-0UIXamlMultitaskingViewController@@P8_ea_180012540.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1800132F4 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::ItemContextMenuRequestedHandler(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 3);
  a1[37] = a1 + 5;
  v4 = 0LL;
  if ( a1 != (_QWORD *)-40LL )
    v4 = `WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::ItemContextMenuRequestedHandler'::`2'::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
           a1 + 5,
           a2);
  a1[37] = v4;
  return a1;
}
