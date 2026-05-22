/*
 * XREFs of ??1?$CalloutWrapper@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18014EDBC
 * Callers:
 *     ?OnConnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ @ 0x18014F0F0 (-OnConnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIHostInputObjectProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18014F143 (_BamoCUIHostInputObjectProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ @ 0x18014F160 (-OnDisconnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIHostInputObjectProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18014F1B3 (_BamoCUIHostInputObjectProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ @ 0x18014F4A0 (-OnPropertiesRefreshedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIHostInputObjectProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18014F4F3 (_BamoCUIHostInputObjectProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_TransferForegroundToComponent_38@?$ICUIHostInputObjectProxy_Receive@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18014F5A0 (-Thunk_TransferForegroundToComponent_38@-$ICUIHostInputObjectProxy_Receive@VBamoCUIHostInputObje.c)
 *     _ICUIHostInputObjectProxy_Receive_BamoImpl::BamoCUIHostInputObjectProxyImpl_::Thunk_TransferForegroundToComponent_38_::_1_::dtor$0 @ 0x18014F60D (_ICUIHostInputObjectProxy_Receive_BamoImpl--BamoCUIHostInputObjectProxyImpl_--Thunk_TransferFore.c)
 *     ?UpdateComponentWindowId@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18014F794 (-UpdateComponentWindowId@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateComponentWindowId_::_1_::dtor$0 @ 0x18014F8C1 (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateComponentWindowId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateComponentWindowId_::_1_::dtor$1 @ 0x18014F8CD (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateComponentWindowId_--_1_--dtor$1.c)
 *     ?UpdateIsInputDisabled@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18014F8E0 (-UpdateIsInputDisabled@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateIsInputDisabled_::_1_::dtor$0 @ 0x18014FA10 (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateIsInputDisabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateIsInputDisabled_::_1_::dtor$1 @ 0x18014FA1C (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateIsInputDisabled_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCUIHostInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoCUIHostInputObjectProxyImpl>(
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
