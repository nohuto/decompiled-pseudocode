/*
 * XREFs of ?PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ @ 0x1801846A4
 * Callers:
 *     ?Initialize@ISMHeatFrameworkHost@@IEAAJXZ @ 0x1801845BC (-Initialize@ISMHeatFrameworkHost@@IEAAJXZ.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ISMHeatFrameworkHost::PopulateHeatGripServiceHost(ISMHeatFrameworkHost *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  const char *v3; // r9
  void (__fastcall ***v4)(_QWORD); // rax
  void (__fastcall ***v5)(_QWORD); // rbx
  void (__fastcall ***v6)(_QWORD); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( !BamoServerConnection )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      395LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      v3);
  v4 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                       + 29)
                                                                                     + 8LL)
                                                                         + 104LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
  v5 = v4;
  v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 36);
  if ( v6 != v4 )
  {
    if ( v4 )
    {
      (**v4)(v4);
      v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 36);
    }
    *((_QWORD *)this + 36) = v5;
    if ( v6 )
      (*v6)[1](v6);
  }
  return 0LL;
}
