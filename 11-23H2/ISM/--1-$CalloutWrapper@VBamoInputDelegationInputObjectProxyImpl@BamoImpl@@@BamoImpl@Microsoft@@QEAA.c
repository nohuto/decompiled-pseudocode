/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18001507C
 * Callers:
 *     ?OnConnectedCallout@BamoInputDelegationInputObjectProxy@@EEAAJXZ @ 0x180014F50 (-OnConnectedCallout@BamoInputDelegationInputObjectProxy@@EEAAJXZ.c)
 *     _BamoInputDelegationInputObjectProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18006C012 (_BamoInputDelegationInputObjectProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoInputDelegationInputObjectProxy@@EEAAJXZ @ 0x180142BF0 (-OnDisconnectedCallout@BamoInputDelegationInputObjectProxy@@EEAAJXZ.c)
 *     _BamoInputDelegationInputObjectProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180142C43 (_BamoInputDelegationInputObjectProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoInputDelegationInputObjectProxy@@EEAAJXZ @ 0x180142EE0 (-OnPropertiesRefreshedCallout@BamoInputDelegationInputObjectProxy@@EEAAJXZ.c)
 *     _BamoInputDelegationInputObjectProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180142F33 (_BamoInputDelegationInputObjectProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_SetProcessIDDelegation_68@?$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801430B0 (-Thunk_SetProcessIDDelegation_68@-$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegation.c)
 *     _IInputDelegationInputObjectProxy_Receive_BamoImpl::BamoInputDelegationInputObjectProxyImpl_::Thunk_SetProcessIDDelegation_68_::_1_::dtor$0 @ 0x18014312E (_IInputDelegationInputObjectProxy_Receive_BamoImpl--BamoInputDelegationInputObjectProxyImpl_--Th.c)
 *     ?Thunk_SetViewIDDelegation_68@?$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180143150 (-Thunk_SetViewIDDelegation_68@-$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegationInp.c)
 *     _IInputDelegationInputObjectProxy_Receive_BamoImpl::BamoInputDelegationInputObjectProxyImpl_::Thunk_SetViewIDDelegation_68_::_1_::dtor$0 @ 0x1801431CE (_IInputDelegationInputObjectProxy_Receive_BamoImpl--BamoInputDelegationInputObjectP_ea_1801431CE.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>(
        __int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  if ( v2 )
  {
    if ( (a1[2] & 2) != 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 96LL))(v2 - 16);
      if ( v3 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v6);
    }
  }
  v4 = *a1;
  if ( *a1 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 24LL))(*(_QWORD *)(v4 + 16));
    *(_DWORD *)(v4 + 184) = GetCurrentThreadId();
  }
  v5 = a1[1];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
}
