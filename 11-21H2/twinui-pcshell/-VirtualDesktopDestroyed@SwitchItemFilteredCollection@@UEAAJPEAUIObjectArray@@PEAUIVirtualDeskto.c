/*
 * XREFs of ?VirtualDesktopDestroyed@SwitchItemFilteredCollection@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x180184C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SwitchItemFilteredCollection::VirtualDesktopDestroyed(
        SwitchItemFilteredCollection *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktop *a4)
{
  --*((_DWORD *)this + 29);
  return 0LL;
}
