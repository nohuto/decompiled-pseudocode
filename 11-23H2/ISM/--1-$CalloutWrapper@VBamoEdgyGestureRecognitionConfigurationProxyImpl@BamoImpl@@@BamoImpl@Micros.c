/*
 * XREFs of ??1?$CalloutWrapper@VBamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120C58
 * Callers:
 *     ?OnConnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ @ 0x180129620 (-OnConnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ.c)
 *     _BamoEdgyGestureRecognitionConfigurationProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180129673 (_BamoEdgyGestureRecognitionConfigurationProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ @ 0x18012A7A0 (-OnDisconnectedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ.c)
 *     _BamoEdgyGestureRecognitionConfigurationProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18012A7F3 (_BamoEdgyGestureRecognitionConfigurationProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ @ 0x18012D2A0 (-OnPropertiesRefreshedCallout@BamoEdgyGestureRecognitionConfigurationProxy@@EEAAJXZ.c)
 *     _BamoEdgyGestureRecognitionConfigurationProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18012D2F3 (_BamoEdgyGestureRecognitionConfigurationProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateGestureDirection@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NPEBUVector2@Numerics@Foundation@Windows@@@Z @ 0x1801366D0 (-UpdateGestureDirection@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NPEBUVe.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureDirection_::_1_::dtor$0 @ 0x180136803 (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureDirection_--_1_--dtor$.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureDirection_::_1_::dtor$1 @ 0x18013680F (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureDirection_ea_18013680F.c)
 *     ?UpdateGestureMinimumDistanceInHimetrics@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180136824 (-UpdateGestureMinimumDistanceInHimetrics@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoIm.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureMinimumDistanceInHimetrics_::_1_::dtor$0 @ 0x180136955 (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureMinimumDistanceInHimet.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureMinimumDistanceInHimetrics_::_1_::dtor$1 @ 0x180136961 (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureMinimumDi_ea_180136961.c)
 *     ?UpdateGestureTimeoutInMilliseconds@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180136F10 (-UpdateGestureTimeoutInMilliseconds@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@Q.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureTimeoutInMilliseconds_::_1_::dtor$0 @ 0x180137041 (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureTimeoutInMilliseconds_.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateGestureTimeoutInMilliseconds_::_1_::dtor$1 @ 0x18013704D (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateGestureTimeoutIn_ea_18013704D.c)
 *     ?UpdateOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ_NM@Z @ 0x180138A0C (-UpdateOrientationBiasInDegrees@BamoEdgyGestureRecognitionConfigurationProxyImpl@BamoImpl@@QEAAJ.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateOrientationBiasInDegrees_::_1_::dtor$0 @ 0x180138B3C (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateOrientationBiasInDegrees_--_1.c)
 *     _BamoImpl::BamoEdgyGestureRecognitionConfigurationProxyImpl::UpdateOrientationBiasInDegrees_::_1_::dtor$1 @ 0x180138B48 (_BamoImpl--BamoEdgyGestureRecognitionConfigurationProxyImpl--UpdateOrientationBiasI_ea_180138B48.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
