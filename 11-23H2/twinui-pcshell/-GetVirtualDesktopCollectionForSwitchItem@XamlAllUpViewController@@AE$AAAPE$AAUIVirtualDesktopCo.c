/*
 * XREFs of ?GetVirtualDesktopCollectionForSwitchItem@XamlAllUpViewController@@AE$AAAPE$AAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItem@3456@@Z @ 0x180780264
 * Callers:
 *     ?CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x18077DEA4 (-CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUIS.c)
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x18077E5FC (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180780480 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVirtualDesktopCollection@IVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUIVirtualDesktopCollection@2345@XZ @ 0x1807801E4 (-GetVirtualDesktopCollection@IVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewController::GetVirtualDesktopCollectionForSwitchItem(__int64 a1)
{
  __int64 v1; // rcx
  __int64 VirtualDesktopCollection; // rbx
  __int64 v4; // rdi

  v1 = *(_QWORD *)(a1 + 192);
  if ( !v1 )
    return 0LL;
  VirtualDesktopCollection = Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource::GetVirtualDesktopCollection(v1);
  v4 = __abi_winrt_ptr_ctor(VirtualDesktopCollection);
  if ( VirtualDesktopCollection )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)VirtualDesktopCollection + 16LL))(VirtualDesktopCollection);
  return v4;
}
