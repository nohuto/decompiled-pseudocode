/*
 * XREFs of ??1?$CalloutWrapper@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180140D0C
 * Callers:
 *     ?OnConnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ @ 0x180141040 (-OnConnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIHostInputObjectProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180141093 (_BamoCUIHostInputObjectProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ @ 0x1801410B0 (-OnDisconnectedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIHostInputObjectProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180141103 (_BamoCUIHostInputObjectProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ @ 0x1801413F0 (-OnPropertiesRefreshedCallout@BamoCUIHostInputObjectProxy@@EEAAJXZ.c)
 *     _BamoCUIHostInputObjectProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180141443 (_BamoCUIHostInputObjectProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_TransferForegroundToComponent_38@?$ICUIHostInputObjectProxy_Receive@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801414F0 (-Thunk_TransferForegroundToComponent_38@-$ICUIHostInputObjectProxy_Receive@VBamoCUIHostInputObje.c)
 *     _ICUIHostInputObjectProxy_Receive_BamoImpl::BamoCUIHostInputObjectProxyImpl_::Thunk_TransferForegroundToComponent_38_::_1_::dtor$0 @ 0x18014155D (_ICUIHostInputObjectProxy_Receive_BamoImpl--BamoCUIHostInputObjectProxyImpl_--Thunk_TransferFore.c)
 *     ?UpdateComponentWindowId@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x1801416E4 (-UpdateComponentWindowId@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateComponentWindowId_::_1_::dtor$0 @ 0x180141811 (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateComponentWindowId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateComponentWindowId_::_1_::dtor$1 @ 0x18014181D (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateComponentWindowId_--_1_--dtor$1.c)
 *     ?UpdateIsInputDisabled@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180141830 (-UpdateIsInputDisabled@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateIsInputDisabled_::_1_::dtor$0 @ 0x180141960 (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateIsInputDisabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateIsInputDisabled_::_1_::dtor$1 @ 0x18014196C (_BamoImpl--BamoCUIHostInputObjectProxyImpl--UpdateIsInputDisabled_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
