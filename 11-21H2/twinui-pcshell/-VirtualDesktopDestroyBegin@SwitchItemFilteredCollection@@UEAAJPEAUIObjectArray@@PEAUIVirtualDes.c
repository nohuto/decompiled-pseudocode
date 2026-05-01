/*
 * XREFs of ?VirtualDesktopDestroyBegin@SwitchItemFilteredCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x180184C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SwitchItemFilteredCollection::VirtualDesktopDestroyBegin(
        SwitchItemFilteredCollection *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktop *a4)
{
  ++*((_DWORD *)this + 29);
  return 0LL;
}
