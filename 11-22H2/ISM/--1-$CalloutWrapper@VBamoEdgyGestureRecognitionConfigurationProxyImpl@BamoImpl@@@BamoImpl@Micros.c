/*
 * XREFs of ??1?$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012EC48
 * Callers:
 *     ?OnConnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ @ 0x180137610 (-OnConnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ.c)
 *     _BamoEdgyGestureRecognitionConfigurationProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180137663 (_BamoEdgyGestureRecognitionConfigurationProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ @ 0x180138790 (-OnDisconnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ.c)
 *     _BamoEdgyGestureRecognitionConfigurationProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x1801387E3 (_BamoEdgyGestureRecognitionConfigurationProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ @ 0x18013B290 (-OnPropertiesRefreshedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ.c)
 *     _BamoEdgyGestureRecognitionConfigurationProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18013B2E3 (_BamoEdgyGestureRecognitionConfigurationProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateGestureDirection@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NPEBUVector2@Numerics@Foundation@Windows@@@Z @ 0x1801446C0 (-UpdateGestureDirection@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NPEBUVe.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureDirection_::_1_::dtor$0 @ 0x1801447F3 (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureDirection_--_1_--dtor$.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureDirection_::_1_::dtor$1 @ 0x1801447FF (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureDirection_ea_1801447FF.c)
 *     ?UpdateGestureMinimumDistanceInHimetrics@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180144814 (-UpdateGestureMinimumDistanceInHimetrics@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoIm.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureMinimumDistanceInHimetrics_::_1_::dtor$0 @ 0x180144945 (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureMinimumDistanceInHimet.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureMinimumDistanceInHimetrics_::_1_::dtor$1 @ 0x180144951 (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureMinimumDi_ea_180144951.c)
 *     ?UpdateGestureTimeoutInMilliseconds@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180144F00 (-UpdateGestureTimeoutInMilliseconds@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@Q.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureTimeoutInMilliseconds_::_1_::dtor$0 @ 0x180145031 (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureTimeoutInMilliseconds_.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureTimeoutInMilliseconds_::_1_::dtor$1 @ 0x18014503D (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureTimeoutIn_ea_18014503D.c)
 *     ?UpdateOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NM@Z @ 0x1801469FC (-UpdateOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateOrientationBiasInDegrees_::_1_::dtor$0 @ 0x180146B2C (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateOrientationBiasInDegrees_--_1.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateOrientationBiasInDegrees_::_1_::dtor$1 @ 0x180146B38 (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateOrientationBiasI_ea_180146B38.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl>(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 2) != 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 96LL))(v2 - 16);
      if ( v3 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
