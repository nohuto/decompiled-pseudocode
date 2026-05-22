/*
 * XREFs of ??1?$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800024B8
 * Callers:
 *     ?UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180013BA0 (-UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     ?UpdateEatPolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1800196E4 (-UpdateEatPolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateEatPolicy_::_1_::dtor$1 @ 0x18006BEAE (_BamoImpl--BamoActivationConfigurationInputObjectProxyImpl--UpdateEatPolicy_--_1_--dtor$1.c)
 *     ?OnDisconnectedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ @ 0x18012A030 (-OnDisconnectedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ.c)
 *     _BamoActivationConfigurationInputObjectProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18012A083 (_BamoActivationConfigurationInputObjectProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ @ 0x18012CB30 (-OnPropertiesRefreshedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ.c)
 *     _BamoActivationConfigurationInputObjectProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18012CB83 (_BamoActivationConfigurationInputObjectProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>(
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
