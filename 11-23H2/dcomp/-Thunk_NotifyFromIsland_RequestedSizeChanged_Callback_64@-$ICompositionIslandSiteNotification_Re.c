/*
 * XREFs of ?Thunk_NotifyFromIsland_RequestedSizeChanged_Callback_64@?$ICompositionIslandSiteNotification_Receive@VCompositionIslandSite@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x18008DE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ICompositionIslandSiteNotification_Receive<Windows::UI::Composition::CompositionIslandSite>::Thunk_NotifyFromIsland_RequestedSizeChanged_Callback_64(
        __int64 *a1,
        _DWORD **a2)
{
  int v2; // xmm1_4
  __int64 v3; // rax

  v2 = (*a2)[1];
  v3 = *a1;
  *((_DWORD *)a1 + 42) = **a2;
  *((_DWORD *)a1 + 43) = v2;
  (*(void (**)(void))(v3 + 312))();
  return 0LL;
}
