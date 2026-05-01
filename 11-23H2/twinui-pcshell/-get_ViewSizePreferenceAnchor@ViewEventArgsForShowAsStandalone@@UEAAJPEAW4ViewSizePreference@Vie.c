/*
 * XREFs of ?get_ViewSizePreferenceAnchor@ViewEventArgsForShowAsStandalone@@UEAAJPEAW4ViewSizePreference@ViewManagement@UI@Windows@@@Z @ 0x1801C1890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForShowAsStandalone::get_ViewSizePreferenceAnchor(
        ViewEventArgsForShowAsStandalone *this,
        enum Windows::UI::ViewManagement::ViewSizePreference *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 13);
  return 0LL;
}
