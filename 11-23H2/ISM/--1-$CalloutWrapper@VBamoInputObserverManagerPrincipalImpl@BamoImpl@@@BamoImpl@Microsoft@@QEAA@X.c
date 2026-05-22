/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputObserverManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180027AF8
 * Callers:
 *     ?OnDisconnectedThunk@BamoInputObserverManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180028A50 (-OnDisconnectedThunk@BamoInputObserverManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoInputObserverManagerStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x18006DB16 (_BamoImpl--BamoInputObserverManagerStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoInputObserverManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180147AC0 (-OnPropertiesRefreshedThunk@BamoInputObserverManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoInputObserverManagerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x180147B2C (_BamoImpl--BamoInputObserverManagerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?RegisterObserverClientOfType@BamoInputObserverManagerPrincipalImpl@BamoImpl@@QEAAJW4InputObserverType@InputObservation@@I@Z @ 0x180147C5C (-RegisterObserverClientOfType@BamoInputObserverManagerPrincipalImpl@BamoImpl@@QEAAJW4InputObserv.c)
 *     _BamoImpl::BamoInputObserverManagerPrincipalImpl::RegisterObserverClientOfType_::_1_::dtor$0 @ 0x180147DFF (_BamoImpl--BamoInputObserverManagerPrincipalImpl--RegisterObserverClientOfType_--_1_--dtor$0.c)
 *     ?SuppressInputOfType@BamoInputObserverManagerPrincipalImpl@BamoImpl@@QEAAJW4InputObserverType@InputObservation@@I@Z @ 0x180147E5C (-SuppressInputOfType@BamoInputObserverManagerPrincipalImpl@BamoImpl@@QEAAJW4InputObserverType@In.c)
 *     _BamoImpl::BamoInputObserverManagerPrincipalImpl::SuppressInputOfType_::_1_::dtor$0 @ 0x180147FFF (_BamoImpl--BamoInputObserverManagerPrincipalImpl--SuppressInputOfType_--_1_--dtor$0.c)
 *     ?UnregisterObserverClientOfType@BamoInputObserverManagerPrincipalImpl@BamoImpl@@QEAAJW4InputObserverType@InputObservation@@I@Z @ 0x18014805C (-UnregisterObserverClientOfType@BamoInputObserverManagerPrincipalImpl@BamoImpl@@QEAAJW4InputObse.c)
 *     _BamoImpl::BamoInputObserverManagerPrincipalImpl::UnregisterObserverClientOfType_::_1_::dtor$0 @ 0x1801481FF (_BamoImpl--BamoInputObserverManagerPrincipalImpl--UnregisterObserverClientOfType_--_1_--dtor$0.c)
 *     ?UnsuppressInputOfType@BamoInputObserverManagerPrincipalImpl@BamoImpl@@QEAAJW4InputObserverType@InputObservation@@I@Z @ 0x18014825C (-UnsuppressInputOfType@BamoInputObserverManagerPrincipalImpl@BamoImpl@@QEAAJW4InputObserverType@.c)
 *     _BamoImpl::BamoInputObserverManagerPrincipalImpl::UnsuppressInputOfType_::_1_::dtor$0 @ 0x1801483FF (_BamoImpl--BamoInputObserverManagerPrincipalImpl--UnsuppressInputOfType_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputObserverManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputObserverManagerPrincipalImpl>(
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
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 48LL))(v2 - 16);
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
