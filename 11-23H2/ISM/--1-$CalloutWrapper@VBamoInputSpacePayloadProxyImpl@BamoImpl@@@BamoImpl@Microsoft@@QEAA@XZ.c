/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801210B4
 * Callers:
 *     ?OnConnectedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ @ 0x180129A10 (-OnConnectedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ.c)
 *     _BamoInputSpacePayloadProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180129A63 (_BamoInputSpacePayloadProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ @ 0x18012AB90 (-OnDisconnectedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ.c)
 *     _BamoInputSpacePayloadProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18012ABE3 (_BamoInputSpacePayloadProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ @ 0x18012D690 (-OnPropertiesRefreshedCallout@BamoInputSpacePayloadProxy@@EEAAJXZ.c)
 *     _BamoInputSpacePayloadProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18012D6E3 (_BamoInputSpacePayloadProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateInputSpace@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE@@@Z @ 0x1801381D8 (-UpdateInputSpace@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE@@@Z.c)
 *     _BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateInputSpace_::_1_::dtor$0 @ 0x180138310 (_BamoImpl--BamoInputSpacePayloadProxyImpl--UpdateInputSpace_--_1_--dtor$0.c)
 *     _BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateInputSpace_::_1_::dtor$1 @ 0x18013831C (_BamoImpl--BamoInputSpacePayloadProxyImpl--UpdateInputSpace_--_1_--dtor$1.c)
 *     ?UpdateRegions@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE_REGION@@I@Z @ 0x180139648 (-UpdateRegions@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE_REGION@@I@Z.c)
 *     _BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateRegions_::_1_::dtor$0 @ 0x1801397CE (_BamoImpl--BamoInputSpacePayloadProxyImpl--UpdateRegions_--_1_--dtor$0.c)
 *     _BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateRegions_::_1_::dtor$1 @ 0x1801397DA (_BamoImpl--BamoInputSpacePayloadProxyImpl--UpdateRegions_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
