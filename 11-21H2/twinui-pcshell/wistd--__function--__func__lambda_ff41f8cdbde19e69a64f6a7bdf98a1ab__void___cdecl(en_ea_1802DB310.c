/*
 * XREFs of wistd::__function::__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1802DB310
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x18005BDBC (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ @ 0x18005BF20 (-_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wistd::__function::__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl_enum_wil::RegistryChangeKind__::operator()(
        __int64 a1)
{
  AcrylicPolicyManager *v1; // rbx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(AcrylicPolicyManager **)(a1 + 8);
  *((_BYTE *)v1 + 354) = AcrylicPolicyManager::_IsTransparencyEnabled();
  updated = AcrylicPolicyManager::UpdateAcrylicState(v1, 0);
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)updated);
}
