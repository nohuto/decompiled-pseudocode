/*
 * XREFs of ?get_ViewSwitchOptions@ViewEventArgsForSwitch@@UEAAJPEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@@Z @ 0x1801839A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForSwitch::get_ViewSwitchOptions(
        ViewEventArgsForSwitch *this,
        enum Windows::UI::ViewManagement::ApplicationViewSwitchingOptions *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 10);
  return 0LL;
}
