/*
 * XREFs of ??1?$CalloutWrapper@VBamoHeatGripServicePrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180027888
 * Callers:
 *     ?OnDisconnectedThunk@BamoHeatGripServiceStubImpl@BamoImpl@@UEAAJXZ @ 0x180028330 (-OnDisconnectedThunk@BamoHeatGripServiceStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoHeatGripServiceStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x18006DAAA (_BamoImpl--BamoHeatGripServiceStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoHeatGripServiceStubImpl@BamoImpl@@UEAAJXZ @ 0x1801A1800 (-OnPropertiesRefreshedThunk@BamoHeatGripServiceStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoHeatGripServiceStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x1801A186C (_BamoImpl--BamoHeatGripServiceStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?RequestGripStatusForPanel@BamoHeatGripServicePrincipalImpl@BamoImpl@@QEAAJPEBUHeatPanelInfo@@@Z @ 0x1801A1980 (-RequestGripStatusForPanel@BamoHeatGripServicePrincipalImpl@BamoImpl@@QEAAJPEBUHeatPanelInfo@@@Z.c)
 *     _BamoImpl::BamoHeatGripServicePrincipalImpl::RequestGripStatusForPanel_::_1_::dtor$0 @ 0x1801A1AA1 (_BamoImpl--BamoHeatGripServicePrincipalImpl--RequestGripStatusForPanel_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>::~CalloutWrapper<BamoImpl::BamoHeatGripServicePrincipalImpl>(
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
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 48LL))(v2 - 16);
      if ( v3 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
