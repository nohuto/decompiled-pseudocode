/*
 * XREFs of ?Thunk_NotifyFromSite_IsSiteVisibleChanged_Callback_69@?$ICompositionIslandNotification_Receive@VCompositionIsland@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18006AB50
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18006B4DC (-NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall ICompositionIslandNotification_Receive<Windows::UI::Composition::CompositionIsland>::Thunk_NotifyFromSite_IsSiteVisibleChanged_Callback_69(
        Windows::UI::Composition::CompositionIsland *a1,
        char **a2)
{
  char v2; // dl

  v2 = **a2;
  if ( v2 != *((_BYTE *)a1 + 300) )
  {
    *((_BYTE *)a1 + 300) = v2;
    Windows::UI::Composition::CompositionIsland::NotifyTransformChanged_Callback(a1);
  }
  return 0LL;
}
