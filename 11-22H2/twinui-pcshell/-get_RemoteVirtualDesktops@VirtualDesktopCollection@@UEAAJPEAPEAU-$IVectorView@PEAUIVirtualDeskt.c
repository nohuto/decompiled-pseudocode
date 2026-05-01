/*
 * XREFs of ?get_RemoteVirtualDesktops@VirtualDesktopCollection@@UEAAJPEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18003A650
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18003AA0C (-GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 */

__int64 __fastcall VirtualDesktopCollection::get_RemoteVirtualDesktops(__int64 a1)
{
  return VirtualDesktopCollection::GetVirtualDesktops((VirtualDesktopCollection *)(a1 - 16));
}
