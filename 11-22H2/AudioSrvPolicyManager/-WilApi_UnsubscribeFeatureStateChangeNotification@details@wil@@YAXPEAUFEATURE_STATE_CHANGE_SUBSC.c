/*
 * XREFs of ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18003A958
 * Callers:
 *     ??1EnabledStateManager@details@wil@@QEAA@XZ @ 0x180013E20 (--1EnabledStateManager@details@wil@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  if ( g_wil_details_internalUnsubscribeFeatureStateChangeNotification )
  {
    g_wil_details_internalUnsubscribeFeatureStateChangeNotification(this);
  }
  else if ( g_wil_details_apiUnsubscribeFeatureStateChangeNotification )
  {
    g_wil_details_apiUnsubscribeFeatureStateChangeNotification(this);
  }
}
