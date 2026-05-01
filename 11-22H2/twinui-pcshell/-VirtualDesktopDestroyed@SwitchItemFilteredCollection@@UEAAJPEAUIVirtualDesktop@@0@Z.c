/*
 * XREFs of ?VirtualDesktopDestroyed@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1801C2D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SwitchItemFilteredCollection::VirtualDesktopDestroyed(
        SwitchItemFilteredCollection *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  --*((_DWORD *)this + 29);
  return 0LL;
}
