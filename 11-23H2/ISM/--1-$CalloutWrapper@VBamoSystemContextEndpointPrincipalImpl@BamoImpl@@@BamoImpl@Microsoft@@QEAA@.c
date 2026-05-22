/*
 * XREFs of ??1?$CalloutWrapper@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18009E450
 * Callers:
 *     ?OnDisconnectedThunk@BamoSystemContextEndpointStubImpl@BamoImpl@@UEAAJXZ @ 0x18009F040 (-OnDisconnectedThunk@BamoSystemContextEndpointStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoSystemContextEndpointStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x18009F0AC (_BamoImpl--BamoSystemContextEndpointStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z @ 0x18009F0C0 (-OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z.c)
 *     _BamoImpl::BamoSystemContextEndpointPrincipalImpl::OnInputConfigChanged_::_1_::dtor$1 @ 0x18009F2F8 (_BamoImpl--BamoSystemContextEndpointPrincipalImpl--OnInputConfigChanged_--_1_--dtor$1.c)
 *     ?OnPropertiesRefreshedThunk@BamoSystemContextEndpointStubImpl@BamoImpl@@UEAAJXZ @ 0x18009F540 (-OnPropertiesRefreshedThunk@BamoSystemContextEndpointStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoSystemContextEndpointStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x18009F5AC (_BamoImpl--BamoSystemContextEndpointStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?UpdateOcclusionRects@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18009FB8C (-UpdateOcclusionRects@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     _BamoImpl::BamoSystemContextEndpointPrincipalImpl::UpdateOcclusionRects_::_1_::dtor$0 @ 0x18009FD88 (_BamoImpl--BamoSystemContextEndpointPrincipalImpl--UpdateOcclusionRects_--_1_--dtor$0.c)
 *     _BamoImpl::BamoSystemContextEndpointPrincipalImpl::UpdateOcclusionRects_::_1_::dtor$1 @ 0x18009FD94 (_BamoImpl--BamoSystemContextEndpointPrincipalImpl--UpdateOcclusionRects_--_1_--dtor$1.c)
 *     ?UpdateTouchpadRects@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18009FDA8 (-UpdateTouchpadRects@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     _BamoImpl::BamoSystemContextEndpointPrincipalImpl::UpdateTouchpadRects_::_1_::dtor$0 @ 0x18009FFA4 (_BamoImpl--BamoSystemContextEndpointPrincipalImpl--UpdateTouchpadRects_--_1_--dtor$0.c)
 *     _BamoImpl::BamoSystemContextEndpointPrincipalImpl::UpdateTouchpadRects_::_1_::dtor$1 @ 0x18009FFB0 (_BamoImpl--BamoSystemContextEndpointPrincipalImpl--UpdateTouchpadRects_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextEndpointPrincipalImpl>(
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
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
