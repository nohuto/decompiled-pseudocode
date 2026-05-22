/*
 * XREFs of ??1?$CalloutWrapper@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028E48
 * Callers:
 *     ?OnDisconnectedThunk@BamoSystemCursorControllerStubImpl@BamoImpl@@UEAAJXZ @ 0x180029FE0 (-OnDisconnectedThunk@BamoSystemCursorControllerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoSystemCursorControllerStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x180081CE8 (_BamoImpl--BamoSystemCursorControllerStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?AttachApplication2@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18010FCDC (-AttachApplication2@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     _BamoImpl::BamoSystemCursorControllerPrincipalImpl::AttachApplication2_::_1_::dtor$0 @ 0x18010FE72 (_BamoImpl--BamoSystemCursorControllerPrincipalImpl--AttachApplication2_--_1_--dtor$0.c)
 *     ?CreateCursorForDevice@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K@Z @ 0x180110064 (-CreateCursorForDevice@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     _BamoImpl::BamoSystemCursorControllerPrincipalImpl::CreateCursorForDevice_::_1_::dtor$0 @ 0x180110185 (_BamoImpl--BamoSystemCursorControllerPrincipalImpl--CreateCursorForDevice_--_1_--dtor$0.c)
 *     ?CreateCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1801102A0 (-CreateCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0PEBUCursorBitmapDat.c)
 *     _BamoImpl::BamoSystemCursorControllerPrincipalImpl::CreateCursorShape_::_1_::dtor$0 @ 0x18011040A (_BamoImpl--BamoSystemCursorControllerPrincipalImpl--CreateCursorShape_--_1_--dtor$0.c)
 *     ?DestroyCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0@Z @ 0x1801106F8 (-DestroyCursorShape@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K0@Z.c)
 *     _BamoImpl::BamoSystemCursorControllerPrincipalImpl::DestroyCursorShape_::_1_::dtor$0 @ 0x180110820 (_BamoImpl--BamoSystemCursorControllerPrincipalImpl--DestroyCursorShape_--_1_--dtor$0.c)
 *     ?EnsureServiceAndRegisterClient@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180110B8C (-EnsureServiceAndRegisterClient@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     _BamoImpl::BamoSystemCursorControllerPrincipalImpl::EnsureServiceAndRegisterClient_::_1_::dtor$0 @ 0x180110D1F (_BamoImpl--BamoSystemCursorControllerPrincipalImpl--EnsureServiceAndRegisterClient_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoSystemCursorControllerStubImpl@BamoImpl@@UEAAJXZ @ 0x180111190 (-OnPropertiesRefreshedThunk@BamoSystemCursorControllerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoSystemCursorControllerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x1801111FC (_BamoImpl--BamoSystemCursorControllerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?SetCursorShellMagnification@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_KM@Z @ 0x1801114B4 (-SetCursorShellMagnification@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_KM@Z.c)
 *     _BamoImpl::BamoSystemCursorControllerPrincipalImpl::SetCursorShellMagnification_::_1_::dtor$0 @ 0x1801115E4 (_BamoImpl--BamoSystemCursorControllerPrincipalImpl--SetCursorShellMagnification_--_1_--dtor$0.c)
 *     ?SetCursorShellVisibility@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K_N@Z @ 0x180111710 (-SetCursorShellVisibility@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJ_K_N@Z.c)
 *     _BamoImpl::BamoSystemCursorControllerPrincipalImpl::SetCursorShellVisibility_::_1_::dtor$0 @ 0x180111835 (_BamoImpl--BamoSystemCursorControllerPrincipalImpl--SetCursorShellVisibility_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemCursorControllerPrincipalImpl>(
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
