/*
 * XREFs of ?Thunk_NotifyFromSite_DeferTransformChanged_Callback_69@?$ICompositionIslandNotification_Receive@VCompositionIsland@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180113440
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z @ 0x18006B610 (-UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall ICompositionIslandNotification_Receive<Windows::UI::Composition::CompositionIsland>::Thunk_NotifyFromSite_DeferTransformChanged_Callback_69(
        __int64 a1,
        _BYTE **a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 428);
  if ( **a2 )
  {
    *(_DWORD *)(a1 + 428) = v2 + 1;
  }
  else
  {
    if ( !v2 )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    *(_DWORD *)(a1 + 428) = v2 - 1;
    Windows::UI::Composition::CompositionIsland::UpdateDeferredNotifications_Callback(
      (Microsoft::WRL2::ContextSession **)a1,
      0);
  }
  return 0LL;
}
