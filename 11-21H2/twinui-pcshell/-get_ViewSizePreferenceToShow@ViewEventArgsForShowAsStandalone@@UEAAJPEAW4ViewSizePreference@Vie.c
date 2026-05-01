/*
 * XREFs of ?get_ViewSizePreferenceToShow@ViewEventArgsForShowAsStandalone@@UEAAJPEAW4ViewSizePreference@ViewManagement@UI@Windows@@@Z @ 0x180183980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForShowAsStandalone::get_ViewSizePreferenceToShow(
        ViewEventArgsForShowAsStandalone *this,
        enum Windows::UI::ViewManagement::ViewSizePreference *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 12);
  return 0LL;
}
