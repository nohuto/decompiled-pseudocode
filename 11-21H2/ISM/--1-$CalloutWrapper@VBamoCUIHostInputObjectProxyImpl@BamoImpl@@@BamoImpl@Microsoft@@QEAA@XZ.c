/*
 * XREFs of ??1?$CalloutWrapper@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180127698
 * Callers:
 *     ?OnConnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ @ 0x1801279B0 (-OnConnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIHostInputObjectProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180127A03 (_BamoCUIHostInputObjectProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ @ 0x180127A20 (-OnDisconnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIHostInputObjectProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180127A73 (_BamoCUIHostInputObjectProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ @ 0x180127D40 (-OnPropertiesRefreshedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIHostInputObjectProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180127D93 (_BamoCUIHostInputObjectProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_TransferForegroundToComponent_33@?$ICUIHostInputObjectProxy_Receive@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180127E40 (-Thunk_TransferForegroundToComponent_33@-$ICUIHostInputObjectProxy_Receive@VBamoCUIHostInputObje.c)
 *     _ICUIHostInputObjectProxy_Receive_BamoImpl::BamoCUIHostInputObjectProxyImpl_::Thunk_TransferForegroundToComponent_33_::_1_::dtor$0 @ 0x180127EAD (_ICUIHostInputObjectProxy_Receive_BamoImpl--BamoCUIHostInputObjectProxyImpl_--Thunk_TransferFore.c)
 *     ?UpdateComponentWindowId@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180128030 (-UpdateComponentWindowId@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateComponentWindowId_::_1_::dtor$0 @ 0x180128143 (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateComponentWindowId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateComponentWindowId_::_1_::dtor$1 @ 0x18012814F (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateComponentWindowId_--_1_--dtor$1.c)
 *     ?UpdateIsInputDisabled@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180128164 (-UpdateIsInputDisabled@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateIsInputDisabled_::_1_::dtor$0 @ 0x18012827A (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateIsInputDisabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateIsInputDisabled_::_1_::dtor$1 @ 0x180128286 (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateIsInputDisabled_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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
