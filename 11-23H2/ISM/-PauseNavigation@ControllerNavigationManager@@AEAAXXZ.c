/*
 * XREFs of ?PauseNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x1801915CC
 * Callers:
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x1801924A0 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800F9C60 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1801994E4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

void __fastcall ControllerNavigationManager::PauseNavigation(ControllerNavigationManager *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *i; // rbx
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, a2);
  if ( InputETW::IsEnabled(v3) )
  {
    v5 = wil::details::static_lazy<InputETW>::get(v4, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
      tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1802282AF, 0LL, 0LL, 2u, &v8);
  }
  v6 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
    ControllerProcessor::UpdateNavigationState(i[3], 1LL, 0LL);
}
