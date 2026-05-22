/*
 * XREFs of ??1?$CalloutWrapper@VBamoEdgyDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012EBCC
 * Callers:
 *     ?OnConnectedCallout@BamoEdgyDragSourceClientProxy@@EEAAJXZ @ 0x1801375A0 (-OnConnectedCallout@BamoEdgyDragSourceClientProxy@@EEAAJXZ.c)
 *     _BamoEdgyDragSourceClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x1801375F3 (_BamoEdgyDragSourceClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoEdgyDragSourceClientProxy@@EEAAJXZ @ 0x180138720 (-OnDisconnectedCallout@BamoEdgyDragSourceClientProxy@@EEAAJXZ.c)
 *     _BamoEdgyDragSourceClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180138773 (_BamoEdgyDragSourceClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoEdgyDragSourceClientProxy@@EEAAJXZ @ 0x18013B220 (-OnPropertiesRefreshedCallout@BamoEdgyDragSourceClientProxy@@EEAAJXZ.c)
 *     _BamoEdgyDragSourceClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18013B273 (_BamoEdgyDragSourceClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateControlPoints@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z @ 0x180143478 (-UpdateControlPoints@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z.c)
 *     _BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateControlPoints_::_1_::dtor$0 @ 0x180143601 (_BamoImpl--BamoEdgyDragSourceClientProxyImpl--UpdateControlPoints_--_1_--dtor$0.c)
 *     _BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateControlPoints_::_1_::dtor$1 @ 0x18014360D (_BamoImpl--BamoEdgyDragSourceClientProxyImpl--UpdateControlPoints_--_1_--dtor$1.c)
 *     ?UpdateGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180144964 (-UpdateGestureRecognitionConfiguration@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateGestureRecognitionConfiguration_::_1_::dtor$0 @ 0x180144B0E (_BamoImpl--BamoEdgyDragSourceClientProxyImpl--UpdateGestureRecognitionConfiguration_--_1_--dtor$.c)
 *     _BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateGestureRecognitionConfiguration_::_1_::dtor$1 @ 0x180144B1A (_BamoImpl--BamoEdgyDragSourceClientProxyImpl--UpdateGestureRecognitionConfiguration_ea_180144B1A.c)
 *     ?UpdateId@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180145850 (-UpdateId@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateId_::_1_::dtor$0 @ 0x180145980 (_BamoImpl--BamoEdgyDragSourceClientProxyImpl--UpdateId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateId_::_1_::dtor$1 @ 0x18014598C (_BamoImpl--BamoEdgyDragSourceClientProxyImpl--UpdateId_--_1_--dtor$1.c)
 *     ?UpdateType@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18014920C (-UpdateType@BamoEdgyDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x18014933E (_BamoImpl--BamoEdgyDragSourceClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoEdgyDragSourceClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x18014934A (_BamoImpl--BamoEdgyDragSourceClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyDragSourceClientProxyImpl>(
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
