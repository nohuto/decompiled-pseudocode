/*
 * XREFs of ??1?$CalloutWrapper@VBamoMPCInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180121228
 * Callers:
 *     ?OnConnectedCallout@BamoMPCInputObjectProxy@@EEAAJXZ @ 0x180129B60 (-OnConnectedCallout@BamoMPCInputObjectProxy@@EEAAJXZ.c)
 *     _BamoMPCInputObjectProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180129BB3 (_BamoMPCInputObjectProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoMPCInputObjectProxy@@EEAAJXZ @ 0x18012ACE0 (-OnDisconnectedCallout@BamoMPCInputObjectProxy@@EEAAJXZ.c)
 *     _BamoMPCInputObjectProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18012AD33 (_BamoMPCInputObjectProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoMPCInputObjectProxy@@EEAAJXZ @ 0x18012D7E0 (-OnPropertiesRefreshedCallout@BamoMPCInputObjectProxy@@EEAAJXZ.c)
 *     _BamoMPCInputObjectProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18012D833 (_BamoMPCInputObjectProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateCalledGetDetectedSourcesAtTimestampRecently@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180134DA4 (-UpdateCalledGetDetectedSourcesAtTimestampRecently@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJ_N.c)
 *     _BamoImpl::BamoMPCInputObjectProxyImpl::UpdateCalledGetDetectedSourcesAtTimestampRecently_::_1_::dtor$0 @ 0x180134ED4 (_BamoImpl--BamoMPCInputObjectProxyImpl--UpdateCalledGetDetectedSourcesAtTimestampRecently_--_1_-.c)
 *     _BamoImpl::BamoMPCInputObjectProxyImpl::UpdateCalledGetDetectedSourcesAtTimestampRecently_::_1_::dtor$1 @ 0x180134EE0 (_BamoImpl--BamoMPCInputObjectProxyImpl--UpdateCalledGetDetectedSourcesAtTimestampRe_ea_180134EE0.c)
 *     ?UpdateEventSubscriptions@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180136584 (-UpdateEventSubscriptions@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoMPCInputObjectProxyImpl::UpdateEventSubscriptions_::_1_::dtor$0 @ 0x1801366AF (_BamoImpl--BamoMPCInputObjectProxyImpl--UpdateEventSubscriptions_--_1_--dtor$0.c)
 *     _BamoImpl::BamoMPCInputObjectProxyImpl::UpdateEventSubscriptions_::_1_::dtor$1 @ 0x1801366BB (_BamoImpl--BamoMPCInputObjectProxyImpl--UpdateEventSubscriptions_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoMPCInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoMPCInputObjectProxyImpl>(
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
