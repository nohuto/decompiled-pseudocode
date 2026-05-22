/*
 * XREFs of ??1?$CalloutWrapper@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800505E4
 * Callers:
 *     ?OnConnectedCallout@BamoSystemButtonEventControllerProxy@@EEAAJXZ @ 0x1800504B0 (-OnConnectedCallout@BamoSystemButtonEventControllerProxy@@EEAAJXZ.c)
 *     ?Thunk_OnContinueProcessing_367@?$ISystemButtonEventControllerProxy_Receive@VBamoSystemButtonEventControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800762F0 (-Thunk_OnContinueProcessing_367@-$ISystemButtonEventControllerProxy_Receive@VBamoSystemButtonEve.c)
 *     _ISystemButtonEventControllerProxy_Receive_BamoImpl::BamoSystemButtonEventControllerProxyImpl_::Thunk_OnContinueProcessing_367_::_1_::dtor$0 @ 0x18007635A (_ISystemButtonEventControllerProxy_Receive_BamoImpl--BamoSystemButtonEventControllerProxyImpl_--.c)
 *     _BamoSystemButtonEventControllerProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180083591 (_BamoSystemButtonEventControllerProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoSystemButtonEventControllerProxy@@EEAAJXZ @ 0x18017F390 (-OnDisconnectedCallout@BamoSystemButtonEventControllerProxy@@EEAAJXZ.c)
 *     _BamoSystemButtonEventControllerProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18017F3E3 (_BamoSystemButtonEventControllerProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoSystemButtonEventControllerProxy@@EEAAJXZ @ 0x18017F4A0 (-OnPropertiesRefreshedCallout@BamoSystemButtonEventControllerProxy@@EEAAJXZ.c)
 *     _BamoSystemButtonEventControllerProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18017F4F3 (_BamoSystemButtonEventControllerProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemButtonEventControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoSystemButtonEventControllerProxyImpl>(
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
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
