/*
 * XREFs of ??1?$CalloutWrapper@VBamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801B88D8
 * Callers:
 *     ?OnDisconnectedThunk@BamoSimpleHapticsControllerStubImpl@BamoImpl@@UEAAJXZ @ 0x1801B9B10 (-OnDisconnectedThunk@BamoSimpleHapticsControllerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoSimpleHapticsControllerStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x1801B9B7C (_BamoImpl--BamoSimpleHapticsControllerStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoSimpleHapticsControllerStubImpl@BamoImpl@@UEAAJXZ @ 0x1801B9D20 (-OnPropertiesRefreshedThunk@BamoSimpleHapticsControllerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoSimpleHapticsControllerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x1801B9D8C (_BamoImpl--BamoSimpleHapticsControllerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMI@Z @ 0x1801BA778 (-SendHapticFeedbackForDuration@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMI@Z.c)
 *     _BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::SendHapticFeedbackForDuration_::_1_::dtor$0 @ 0x1801BA8B0 (_BamoImpl--BamoSimpleHapticsControllerPrincipalImpl--SendHapticFeedbackForDuration_--_1_--dtor$0.c)
 *     ?SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMII@Z @ 0x1801BA984 (-SendHapticFeedbackForPlayCount@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJGMII@Z.c)
 *     _BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::SendHapticFeedbackForPlayCount_::_1_::dtor$0 @ 0x1801BAAD4 (_BamoImpl--BamoSimpleHapticsControllerPrincipalImpl--SendHapticFeedbackForPlayCount_--_1_--dtor$.c)
 *     ?StopFeedback@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJXZ @ 0x1801BB30C (-StopFeedback@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@QEAAJXZ.c)
 *     _BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::StopFeedback_::_1_::dtor$0 @ 0x1801BB41C (_BamoImpl--BamoSimpleHapticsControllerPrincipalImpl--StopFeedback_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerPrincipalImpl>(
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
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
