/*
 * XREFs of ??1?$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18001525C
 * Callers:
 *     ?OnConnectedCallout@BamoActivationControllerProxy@@EEAAJXZ @ 0x180015130 (-OnConnectedCallout@BamoActivationControllerProxy@@EEAAJXZ.c)
 *     ?UpdateLuid@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x18001A4D4 (-UpdateLuid@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z.c)
 *     ?UpdateId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18001A570 (-UpdateId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     ?UpdateAutoForwardId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18001A608 (-UpdateAutoForwardId@BamoActivationControllerProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoActivationControllerProxyImpl::UpdateLuid_::_1_::dtor$1 @ 0x18006C024 (_BamoImpl--BamoActivationControllerProxyImpl--UpdateLuid_--_1_--dtor$1.c)
 *     ?OnDisconnectedCallout@BamoActivationControllerProxy@@EEAAJXZ @ 0x1800A59E0 (-OnDisconnectedCallout@BamoActivationControllerProxy@@EEAAJXZ.c)
 *     _BamoActivationControllerProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x1800A5A33 (_BamoActivationControllerProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoActivationControllerProxy@@EEAAJXZ @ 0x1800A5A50 (-OnPropertiesRefreshedCallout@BamoActivationControllerProxy@@EEAAJXZ.c)
 *     _BamoActivationControllerProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x1800A5AA3 (_BamoActivationControllerProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_RequestActivation_14@?$IActivationControllerProxy_Receive@VBamoActivationControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800A5CA0 (-Thunk_RequestActivation_14@-$IActivationControllerProxy_Receive@VBamoActivationControllerProxyI.c)
 *     _IActivationControllerProxy_Receive_BamoImpl::BamoActivationControllerProxyImpl_::Thunk_RequestActivation_14_::_1_::dtor$0 @ 0x1800A5D07 (_IActivationControllerProxy_Receive_BamoImpl--BamoActivationControllerProxyImpl_--Thunk_RequestA.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>(
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
