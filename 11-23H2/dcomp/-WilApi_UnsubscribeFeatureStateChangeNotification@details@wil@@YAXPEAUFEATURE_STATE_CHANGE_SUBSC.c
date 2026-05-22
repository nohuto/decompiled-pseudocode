/*
 * XREFs of ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800E5318
 * Callers:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x1800E3B38 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
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
