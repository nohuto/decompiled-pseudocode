/*
 * XREFs of ?CurrentThreadIsDispatcher@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180087924
 * Callers:
 *     ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x180087A80 (-FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 *     ??$EnumerateStubs@W4InputType@@PEBGUtagPROPVARIANT@@U2@@BamoMPCConstantManagerClientPrincipal@@QEAAJP6AJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGUtagPROPVARIANT@@3@Z_N1233@Z @ 0x180093C1C (--$EnumerateStubs@W4InputType@@PEBGUtagPROPVARIANT@@U2@@BamoMPCConstantManagerClientPrincipal@@Q.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadIsDispatcher(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 6) )
    return *((_DWORD *)this + 6) == GetCurrentThreadId();
  if ( *((_DWORD *)this + 47) )
    return 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7), &v6);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x245,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v3,
      v4);
  return v6 == GetCurrentThreadId();
}
