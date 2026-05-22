/*
 * XREFs of ??1?$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18008ECE0
 * Callers:
 *     ?UpdateLuid@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x1800115CC (-UpdateLuid@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z.c)
 *     ?UpdateId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180011720 (-UpdateId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?UpdateAutoForwardId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180011814 (-UpdateAutoForwardId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoActivationControllerProxyImpl::UpdateLuid_::_1_::dtor$1 @ 0x180054D98 (_BamoImpl--BamoActivationControllerProxyImpl--UpdateLuid_--_1_--dtor$1.c)
 *     ?OnDisconnectedCallout@BamoActivationControllerProxy@@EEAAJXZ @ 0x18008EE80 (-OnDisconnectedCallout@BamoActivationControllerProxy@@EEAAJXZ.c)
 *     _BamoActivationControllerProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18008EED3 (_BamoActivationControllerProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoActivationControllerProxy@@EEAAJXZ @ 0x18008EEF0 (-OnPropertiesRefreshedCallout@BamoActivationControllerProxy@@EEAAJXZ.c)
 *     _BamoActivationControllerProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18008EF43 (_BamoActivationControllerProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_RequestActivation_14@?$IActivationControllerProxy_Receive@VBamoActivationControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18008F170 (-Thunk_RequestActivation_14@-$IActivationControllerProxy_Receive@VBamoActivationControllerProxyI.c)
 *     _IActivationControllerProxy_Receive_BamoImpl::BamoActivationControllerProxyImpl_::Thunk_RequestActivation_14_::_1_::dtor$0 @ 0x18008F1D7 (_IActivationControllerProxy_Receive_BamoImpl--BamoActivationControllerProxyImpl_--Thunk_RequestA.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>(
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
