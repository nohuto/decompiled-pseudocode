/*
 * XREFs of _lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator() @ 0x1801EAD6C
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801EE79C (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800BD898 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 */

LSTATUS __fastcall lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(__int64 a1, const WCHAR *a2, __int64 a3)
{
  LSTATUS result; // eax
  const char *v6; // r9
  int *v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __m128i v10; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+8h]

  result = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\ISM\\6dof",
             a2,
             0x10u,
             0LL,
             *(PVOID *)a1,
             *(LPDWORD *)(a1 + 8));
  if ( !result )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v6);
    v7 = *(int **)a1;
    BYTE4(v12) = 2;
    v10.m128i_i64[0] = a3;
    v8 = *v7;
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a3 + 2 * v9) );
    v10.m128i_i64[1] = v9;
    *(float *)&v12 = (float)v8 / 1000.0;
    return MPCConstantManager::ChangeConstant((__int64)MPCConstantManager::s_instance, 0x2000LL, &v10, v12);
  }
  return result;
}
