/*
 * XREFs of ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18019A9E4
 * Callers:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180197F24 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  if ( g_wil_details_internalUnsubscribeFeatureStateChangeNotification )
  {
    g_wil_details_internalUnsubscribeFeatureStateChangeNotification(this, a2);
  }
  else if ( g_wil_details_apiUnsubscribeFeatureStateChangeNotification )
  {
    g_wil_details_apiUnsubscribeFeatureStateChangeNotification(this, a2);
  }
}
