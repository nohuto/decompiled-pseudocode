/*
 * XREFs of ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x18005BDBC
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18005BC60 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ @ 0x18005BD80 (-OnCompositionCapabilitiesChanged@AcrylicPolicyManager@@UEAAJXZ.c)
 *     ?OnBatterySaverStateChanged@AcrylicPolicyManager@@UEAAJ_N@Z @ 0x180181870 (-OnBatterySaverStateChanged@AcrylicPolicyManager@@UEAAJ_N@Z.c)
 *     wistd::__function::__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1802DB310 (wistd--__function--__func__lambda_ff41f8cdbde19e69a64f6a7bdf98a1ab__void___cdecl(en_ea_1802DB310.c)
 *     ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x1802DB840 (-OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AcrylicPolicyManager::UpdateAcrylicState(AcrylicPolicyManager *this, char a2)
{
  unsigned __int8 v3; // di
  int v5; // eax
  unsigned int v6; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !*((_BYTE *)this + 353) && !*((_BYTE *)this + 355) && *((_BYTE *)this + 354) )
    v3 = *((_BYTE *)this + 356) != 0;
  if ( *((_BYTE *)this + 352) == v3 && !a2 )
    return 0LL;
  v8 = v3;
  v5 = RtlPublishWnfStateData(WNF_IMSN_TRANSPARENCYPOLICY, 0LL, &v8, 4LL);
  v6 = v5 | 0x10000000;
  if ( v5 >= 0 )
  {
    *((_BYTE *)this + 352) = v3;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11C,
    (unsigned int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
    (const char *)v6,
    0);
  return v6;
}
