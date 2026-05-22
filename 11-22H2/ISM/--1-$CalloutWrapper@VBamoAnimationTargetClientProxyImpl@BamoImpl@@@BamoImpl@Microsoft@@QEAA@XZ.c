/*
 * XREFs of ??1?$CalloutWrapper@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180050924
 * Callers:
 *     ?OnConnectedCallout@BamoAnimationTargetClientProxy@@EEAAJXZ @ 0x1800507F0 (-OnConnectedCallout@BamoAnimationTargetClientProxy@@EEAAJXZ.c)
 *     ?UpdateData@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180054FBC (-UpdateData@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBUGestureAnimationData@Input@I.c)
 *     ?UpdateId@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x1800553F0 (-UpdateId@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoAnimationTargetClientProxyImpl::UpdateId_::_1_::dtor$1 @ 0x1800835B5 (_BamoImpl--BamoAnimationTargetClientProxyImpl--UpdateId_--_1_--dtor$1.c)
 *     ?OnDisconnectedCallout@BamoAnimationTargetClientProxy@@EEAAJXZ @ 0x180164010 (-OnDisconnectedCallout@BamoAnimationTargetClientProxy@@EEAAJXZ.c)
 *     _BamoAnimationTargetClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180164063 (_BamoAnimationTargetClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoAnimationTargetClientProxy@@EEAAJXZ @ 0x180164080 (-OnPropertiesRefreshedCallout@BamoAnimationTargetClientProxy@@EEAAJXZ.c)
 *     _BamoAnimationTargetClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x1801640D3 (_BamoAnimationTargetClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>(
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
