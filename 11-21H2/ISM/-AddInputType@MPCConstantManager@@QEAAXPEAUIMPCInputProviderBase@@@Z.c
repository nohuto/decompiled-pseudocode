/*
 * XREFs of ?AddInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800948DC
 * Callers:
 *     std::call_once__lambda_8c4ed463577f4da5b58359432c7ff390___ @ 0x1801CA44C (std--call_once__lambda_8c4ed463577f4da5b58359432c7ff390___.c)
 *     std::call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___ @ 0x1801CA990 (std--call_once__lambda_0768ca99b5f0498451ffc3dbd3bcf85b___.c)
 * Callees:
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x180038CEC (--$_Try_emplace@AEBW4InputType@@$$V@-$map@W4InputType@@V-$map@V-$basic_string@GU-$char_traits@G@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z @ 0x180094E60 (-CheckTypeExistence@MPCConstantManager@@QEAA_NW4InputType@@@Z.c)
 */

void __fastcall MPCConstantManager::AddInputType(MPCConstantManager *this, struct IMPCInputProviderBase *a2)
{
  const char *v3; // r9
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2);
  if ( (unsigned __int8)MPCConstantManager::CheckTypeExistence(this, v6) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      139LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v3);
  std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::_Try_emplace<enum InputType const &,>(
    (_QWORD *)this + 7,
    (__int64)v4,
    &v6);
}
