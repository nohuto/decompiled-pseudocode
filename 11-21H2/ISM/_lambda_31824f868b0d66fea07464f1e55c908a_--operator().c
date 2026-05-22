/*
 * XREFs of _lambda_31824f868b0d66fea07464f1e55c908a_::operator() @ 0x1800A6760
 * Callers:
 *     ?ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800A8694 (-ShouldRequestPrimary@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5A74 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

bool __fastcall lambda_31824f868b0d66fea07464f1e55c908a_::operator()(__int64 *a1)
{
  const char *v2; // r9
  char v3; // bl
  float v4; // xmm6_4
  __int64 v5; // rdx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0;
  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 840) == 512 )
  {
    v4 = *(float *)(*(_QWORD *)a1[1] + 1072LL);
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v2);
    v5 = *a1;
    *(_QWORD *)&v7 = L"HandGuidanceScoreForPrimary";
    *((_QWORD *)&v7 + 1) = 27LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (v5 + 24) & -(__int64)(v5 != 0),
      &v7);
    return v4 >= COERCE_FLOAT(L"HandGuidanceScoreForPrimary");
  }
  return v3;
}
