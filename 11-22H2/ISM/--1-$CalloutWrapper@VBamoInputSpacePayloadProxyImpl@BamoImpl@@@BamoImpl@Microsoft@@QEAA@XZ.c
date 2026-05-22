/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012F0A4
 * Callers:
 *     ?OnConnectedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ @ 0x180137A00 (-OnConnectedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ.c)
 *     _BamoInputSpacePayloadProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180137A53 (_BamoInputSpacePayloadProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ @ 0x180138B80 (-OnDisconnectedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ.c)
 *     _BamoInputSpacePayloadProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180138BD3 (_BamoInputSpacePayloadProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ @ 0x18013B680 (-OnPropertiesRefreshedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ.c)
 *     _BamoInputSpacePayloadProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18013B6D3 (_BamoInputSpacePayloadProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateInputSpace@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE@@@Z @ 0x1801461C8 (-UpdateInputSpace@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE@@@Z.c)
 *     _BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateInputSpace_::_1_::dtor$0 @ 0x180146300 (_BamoImpl--BamoInputSpacePayloadProxyImpl--UpdateInputSpace_--_1_--dtor$0.c)
 *     _BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateInputSpace_::_1_::dtor$1 @ 0x18014630C (_BamoImpl--BamoInputSpacePayloadProxyImpl--UpdateInputSpace_--_1_--dtor$1.c)
 *     ?UpdateRegions@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE_REGION@@I@Z @ 0x180147638 (-UpdateRegions@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE_REGION@@I@Z.c)
 *     _BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateRegions_::_1_::dtor$0 @ 0x1801477BE (_BamoImpl--BamoInputSpacePayloadProxyImpl--UpdateRegions_--_1_--dtor$0.c)
 *     _BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateRegions_::_1_::dtor$1 @ 0x1801477CA (_BamoImpl--BamoInputSpacePayloadProxyImpl--UpdateRegions_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>(
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
