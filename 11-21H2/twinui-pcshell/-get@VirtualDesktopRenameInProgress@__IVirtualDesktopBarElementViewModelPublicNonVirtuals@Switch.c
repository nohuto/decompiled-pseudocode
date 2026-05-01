/*
 * XREFs of ?get@VirtualDesktopRenameInProgress@__IVirtualDesktopBarElementViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA_NXZ @ 0x1801E9A80
 * Callers:
 *     ?VirtualDesktopRenameInProgress@VirtualDesktopSwitcherHost@@UEAA_NXZ @ 0x1801E99F0 (-VirtualDesktopRenameInProgress@VirtualDesktopSwitcherHost@@UEAA_NXZ.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x18017F9B0 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__IVirtualDesktopBarElementViewModelPublicNonVirtuals::VirtualDesktopRenameInProgress::get(
        __int64 a1)
{
  int v1; // eax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 200LL))(a1, &v3);
  __abi_ThrowIfFailed(v1);
  return v3;
}
