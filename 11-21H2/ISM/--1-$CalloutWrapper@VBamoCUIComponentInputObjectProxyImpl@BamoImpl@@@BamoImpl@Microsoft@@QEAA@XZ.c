/*
 * XREFs of ??1?$CalloutWrapper@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801266D0
 * Callers:
 *     ?OnConnectedCallout@BamoCUIComponentInputObjectProxy@@EEAAJXZ @ 0x180126A00 (-OnConnectedCallout@BamoCUIComponentInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIComponentInputObjectProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180126A53 (_BamoCUIComponentInputObjectProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoCUIComponentInputObjectProxy@@EEAAJXZ @ 0x180126A70 (-OnDisconnectedCallout@BamoCUIComponentInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIComponentInputObjectProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180126AC3 (_BamoCUIComponentInputObjectProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoCUIComponentInputObjectProxy@@EEAAJXZ @ 0x180126F10 (-OnPropertiesRefreshedCallout@BamoCUIComponentInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIComponentInputObjectProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180126F63 (_BamoCUIComponentInputObjectProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_TransferForegroundToHost_33@?$ICUIComponentInputObjectProxy_Receive@VBamoCUIComponentInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180127070 (-Thunk_TransferForegroundToHost_33@-$ICUIComponentInputObjectProxy_Receive@VBamoCUIComponentInpu.c)
 *     _ICUIComponentInputObjectProxy_Receive_BamoImpl::BamoCUIComponentInputObjectProxyImpl_::Thunk_TransferForegroundToHost_33_::_1_::dtor$0 @ 0x1801270DD (_ICUIComponentInputObjectProxy_Receive_BamoImpl--BamoCUIComponentInputObjectProxyImpl_--Thunk_Tr.c)
 *     ?UpdateComponentWindowId@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x1801272E8 (-UpdateComponentWindowId@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoCUIComponentInputObjectProxyImpl::UpdateComponentWindowId_::_1_::dtor$0 @ 0x1801273FB (_BamoImpl--BamoCUIComponentInputObjectProxyImpl--UpdateComponentWindowId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoCUIComponentInputObjectProxyImpl::UpdateComponentWindowId_::_1_::dtor$1 @ 0x180127407 (_BamoImpl--BamoCUIComponentInputObjectProxyImpl--UpdateComponentWindowId_--_1_--dtor$1.c)
 *     ?UpdateIsInputDisabled@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18012741C (-UpdateIsInputDisabled@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoCUIComponentInputObjectProxyImpl::UpdateIsInputDisabled_::_1_::dtor$0 @ 0x180127532 (_BamoImpl--BamoCUIComponentInputObjectProxyImpl--UpdateIsInputDisabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoCUIComponentInputObjectProxyImpl::UpdateIsInputDisabled_::_1_::dtor$1 @ 0x18012753E (_BamoImpl--BamoCUIComponentInputObjectProxyImpl--UpdateIsInputDisabled_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCUIComponentInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoCUIComponentInputObjectProxyImpl>(
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
