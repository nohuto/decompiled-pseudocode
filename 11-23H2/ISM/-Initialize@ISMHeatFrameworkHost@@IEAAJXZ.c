/*
 * XREFs of ?Initialize@ISMHeatFrameworkHost@@IEAAJXZ @ 0x1801A36D0
 * Callers:
 *     ?Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z @ 0x1801A3538 (-Create@ISMHeatFrameworkHost@@SAJPEAUIInputProcessorHost@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ @ 0x1801A37B4 (-PopulateHeatGripServiceHost@ISMHeatFrameworkHost@@AEAAJXZ.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::Initialize(ISMHeatFrameworkHost *this, __int64 a2, __int64 a3, const char *a4)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  if ( *(_DWORD *)ISMScenarios::s_instance
    || (v5 = ISMHeatFrameworkHost::PopulateHeatGripServiceHost(this), v6 = v5, v5 >= 0) )
  {
    v8 = *((_QWORD *)this + 36);
    if ( v8 )
    {
      if ( *(_QWORD *)(v8 + 56) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x37,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatgripservicehost.cpp",
          a4);
      *(_QWORD *)(v8 + 56) = this;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
