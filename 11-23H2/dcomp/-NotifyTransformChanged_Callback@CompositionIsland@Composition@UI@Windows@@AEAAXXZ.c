/*
 * XREFs of ?NotifyTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18006B4DC
 * Callers:
 *     ?Thunk_NotifyFromSite_IsSiteVisibleChanged_Callback_69@?$ICompositionIslandNotification_Receive@VCompositionIsland@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18006AB50 (-Thunk_NotifyFromSite_IsSiteVisibleChanged_Callback_69@-$ICompositionIslandNotification_Receive@.c)
 *     ?NotifyFromAnchor_Updated_Callback@CompositionIsland@Composition@UI@Windows@@IEAAXMUfloat3@Numerics@Foundation@4@@Z @ 0x18006AFA8 (-NotifyFromAnchor_Updated_Callback@CompositionIsland@Composition@UI@Windows@@IEAAXMUfloat3@Numer.c)
 *     ?Thunk_NotifyFromSite_ActualSizeChanged_Callback_64@?$ICompositionIslandNotification_Receive@VCompositionIsland@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18006B220 (-Thunk_NotifyFromSite_ActualSizeChanged_Callback_64@-$ICompositionIslandNotification_Receive@VCo.c)
 *     ?NotifyFromEnvironment_ChangeValues_Callback@CompositionIsland@Composition@UI@Windows@@QEAAXUfloat3@Numerics@Foundation@4@MM@Z @ 0x180112E48 (-NotifyFromEnvironment_ChangeValues_Callback@CompositionIsland@Composition@UI@Windows@@QEAAXUflo.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::CompositionIsland::NotifyTransformChanged_Callback(
        Windows::UI::Composition::CompositionIsland *this)
{
  if ( *((_DWORD *)this + 106) + *((_DWORD *)this + 107) <= 0 )
    Windows::UI::Composition::CompositionIsland::InvokeTransformChanged_Callback(this);
  else
    *((_BYTE *)this + 432) |= 1u;
}
