/*
 * XREFs of ??1?$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012F5F8
 * Callers:
 *     ?OnConnectedCallout@BamoSystemCursorControllerProxy@@EEAAJXZ @ 0x180137ED0 (-OnConnectedCallout@BamoSystemCursorControllerProxy@@EEAAJXZ.c)
 *     _BamoSystemCursorControllerProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180137F23 (_BamoSystemCursorControllerProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoSystemCursorControllerProxy@@EEAAJXZ @ 0x180139050 (-OnDisconnectedCallout@BamoSystemCursorControllerProxy@@EEAAJXZ.c)
 *     _BamoSystemCursorControllerProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x1801390A3 (_BamoSystemCursorControllerProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoSystemCursorControllerProxy@@EEAAJXZ @ 0x18013BB50 (-OnPropertiesRefreshedCallout@BamoSystemCursorControllerProxy@@EEAAJXZ.c)
 *     _BamoSystemCursorControllerProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18013BBA3 (_BamoSystemCursorControllerProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateScaleOverride@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_NM@Z @ 0x180147C80 (-UpdateScaleOverride@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_NM@Z.c)
 *     _BamoImpl::BamoSystemCursorControllerProxyImpl::UpdateScaleOverride_::_1_::dtor$0 @ 0x180147DAD (_BamoImpl--BamoSystemCursorControllerProxyImpl--UpdateScaleOverride_--_1_--dtor$0.c)
 *     _BamoImpl::BamoSystemCursorControllerProxyImpl::UpdateScaleOverride_::_1_::dtor$1 @ 0x180147DB9 (_BamoImpl--BamoSystemCursorControllerProxyImpl--UpdateScaleOverride_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>(
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
