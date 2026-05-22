/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputObserverClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012CC4C
 * Callers:
 *     ?OnConnectedCallout@BamoInputObserverClientProxy@@EEAAJXZ @ 0x18012CDC0 (-OnConnectedCallout@BamoInputObserverClientProxy@@EEAAJXZ.c)
 *     _BamoInputObserverClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18012CE13 (_BamoInputObserverClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoInputObserverClientProxy@@EEAAJXZ @ 0x18012CE70 (-OnDisconnectedCallout@BamoInputObserverClientProxy@@EEAAJXZ.c)
 *     _BamoInputObserverClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18012CEC3 (_BamoInputObserverClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoInputObserverClientProxy@@EEAAJXZ @ 0x18012D0C0 (-OnPropertiesRefreshedCallout@BamoInputObserverClientProxy@@EEAAJXZ.c)
 *     _BamoInputObserverClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18012D113 (_BamoInputObserverClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>(
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
