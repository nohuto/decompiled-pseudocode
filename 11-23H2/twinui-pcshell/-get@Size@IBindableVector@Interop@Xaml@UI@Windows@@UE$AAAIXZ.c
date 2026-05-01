/*
 * XREFs of ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x18007F26C
 * Callers:
 *     ?NumberOfItems@TaskViewFrame@@UEAAIXZ @ 0x18007E5B0 (-NumberOfItems@TaskViewFrame@@UEAAIXZ.c)
 *     ?NumberOfVirtualDesktops@TaskViewFrame@@UEAAIXZ @ 0x18007E690 (-NumberOfVirtualDesktops@TaskViewFrame@@UEAAIXZ.c)
 *     ?InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemListViewModelArgs@3456@@Z @ 0x18078B474 (-InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Compos.c)
 *     ?UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUISwitchItemDataSource@Multitasking@5Internal@Windows@winrt@@@Z @ 0x18078BE88 (-UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Composable.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::Interop::IBindableVector::Size::get(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 56LL))(a1, &v3);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    JUMPOUT(0x18007F2A1LL);
  }
  return v3;
}
