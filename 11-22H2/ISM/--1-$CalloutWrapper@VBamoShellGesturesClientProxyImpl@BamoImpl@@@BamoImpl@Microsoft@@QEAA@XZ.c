/*
 * XREFs of ??1?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180013B24
 * Callers:
 *     ?UpdateTouchEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x1800138E8 (-UpdateTouchEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     ?OnConnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ @ 0x180051AC0 (-OnConnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ.c)
 *     ?UpdateInputSinkData@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NPEBUInputSinkData@@@Z @ 0x180054E84 (-UpdateInputSinkData@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NPEBUInputSinkData@@@Z.c)
 *     ?UpdateTouchpadEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180055150 (-UpdateTouchpadEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchpadEnabled_::_1_::dtor$1 @ 0x18007FA4B (_BamoImpl--BamoShellGesturesClientProxyImpl--UpdateTouchpadEnabled_--_1_--dtor$1.c)
 *     ?OnDisconnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ @ 0x18017BDE0 (-OnDisconnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ.c)
 *     _BamoShellGesturesClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18017BE33 (_BamoShellGesturesClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoShellGesturesClientProxy@@EEAAJXZ @ 0x18017BE50 (-OnPropertiesRefreshedCallout@BamoShellGesturesClientProxy@@EEAAJXZ.c)
 *     _BamoShellGesturesClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18017BEA3 (_BamoShellGesturesClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
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
