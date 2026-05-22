/*
 * XREFs of ?PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ @ 0x1801A37B4
 * Callers:
 *     ?Initialize@ISMHeatFrameworkHost@@IEAAJXZ @ 0x1801A36D0 (-Initialize@ISMHeatFrameworkHost@@IEAAJXZ.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ISMHeatFrameworkHost::PopulateHeatGripServiceHost(ISMHeatFrameworkHost *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  const char *v3; // r9
  void (__fastcall ***v4)(_QWORD); // rax
  void (__fastcall ***v5)(_QWORD); // rbx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( !BamoServerConnection )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      v3);
  v4 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection
                                                                                       + 31)
                                                                                     + 8LL)
                                                                         + 104LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v5 = v4;
  if ( *((void (__fastcall ****)(_QWORD))this + 36) != v4 )
  {
    if ( v4 )
      (**v4)(v4);
    v6 = *((_QWORD *)this + 36);
    *((_QWORD *)this + 36) = v5;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return 0LL;
}
