/*
 * XREFs of ?get_ViewMode@ViewEventArgsForShowAsViewMode@@UEAAJPEAW4ApplicationViewMode@ViewManagement@UI@Windows@@@Z @ 0x1801C1850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_ViewMode(
        ViewEventArgsForShowAsViewMode *this,
        enum Windows::UI::ViewManagement::ApplicationViewMode *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 14);
  return 0LL;
}
