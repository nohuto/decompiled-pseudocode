/*
 * XREFs of ?IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18014D6DC
 * Callers:
 *     ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18014AD2C (-AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV-$shared_ptr@$$CBUEff.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___::_lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___ @ 0x18014A650 (wil--details--lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___--_lambda_call__lambda_b854.c)
 *     _lambda_b854a98ca4cb4485b0d062c9ed209b97_::operator() @ 0x18014AC44 (_lambda_b854a98ca4cb4485b0d062c9ed209b97_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::IsEffectPackConfigurationApplicableToEndpoint(
        __int64 a1,
        __int64 *a2,
        _BYTE *a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v9; // rax
  char v10; // bl
  LPCWCH *v11; // rsi
  LPCWCH *v12; // r15
  PROPVARIANT *v13; // rcx
  PROPVARIANT *v14; // rdx
  char *v15; // rax
  unsigned __int64 v16; // rax
  int v17; // [rsp+30h] [rbp-50h] BYREF
  __int128 v18; // [rsp+38h] [rbp-48h] BYREF
  int *v19; // [rsp+48h] [rbp-38h]
  char v20; // [rsp+50h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-28h] BYREF
  int *v22; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a3 = 0;
  pvar[0] = (PROPVARIANT)a1;
  pvar[1] = a2;
  v22 = &v17;
  v18 = *(_OWORD *)pvar;
  v19 = &v17;
  v20 = 1;
  v17 = 1;
  if ( *(_DWORD *)(a1 + 64) == 3 )
    goto LABEL_38;
  v17 = 4;
  if ( *(_DWORD *)(a1 + 408) && !*(_DWORD *)(a1 + 412) )
  {
    v6 = *(_QWORD *)*a2 - *(_QWORD *)&CLSID_MEPAudioEffectPackID.Data1;
    if ( !v6 )
      v6 = *(_QWORD *)(*a2 + 8) - *(_QWORD *)CLSID_MEPAudioEffectPackID.Data4;
    if ( v6 )
      goto LABEL_38;
  }
  v17 = 7;
  v7 = *(int *)(a1 + 212);
  if ( v7 >= 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A2,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8000FFFFLL);
    wil::details::lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___::_lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___((__int64)&v18);
    return 2147549183LL;
  }
  v9 = *a2;
  if ( !*(_BYTE *)(v7 + *a2 + 1795) )
    goto LABEL_38;
  v10 = 0;
  v17 = 2;
  v11 = *(LPCWCH **)(v9 + 1768);
  v12 = *(LPCWCH **)(v9 + 1776);
  while ( v11 != v12 )
  {
    if ( *(_QWORD *)(a1 + 384)
      && (CompareStringOrdinal(*v11, -1, L"*", -1, 1) == 2
       || CompareStringOrdinal(*v11, -1, *(LPCWCH *)(a1 + 384), -1, 1) == 2) )
    {
      v10 = 1;
      break;
    }
    ++v11;
  }
  if ( *(_BYTE *)(*a2 + 1792) )
  {
    v17 = 6;
    *(_OWORD *)pvar = 0LL;
    v22 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
           *(_QWORD *)(a1 + 72),
           &PKEY_Endpoint_IsBluetooth,
           pvar) >= 0
      && LOWORD(pvar[0]) == 11
      && LOWORD(pvar[1]) )
    {
      v10 = 1;
    }
    PropVariantClear(pvar);
  }
  if ( *(_BYTE *)(*a2 + 1793) )
  {
    v17 = 5;
    *(_OWORD *)pvar = 0LL;
    v22 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
           *(_QWORD *)(a1 + 72),
           &PKEY_Endpoint_IsUSB,
           pvar) >= 0
      && LOWORD(pvar[0]) == 11
      && LOWORD(pvar[1]) )
    {
      v10 = 1;
    }
    PropVariantClear(pvar);
  }
  if ( !v10 || (v17 = 3, v13 = *(PROPVARIANT **)(*a2 + 1728), v14 = *(PROPVARIANT **)(*a2 + 1736), v13 == v14) )
  {
LABEL_38:
    wil::details::lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___::_lambda_call__lambda_b854a98ca4cb4485b0d062c9ed209b97___((__int64)&v18);
  }
  else
  {
    *(GUID *)pvar = GUID_00000000_0000_0000_0000_000000000000;
    while ( 1 )
    {
      v15 = (char *)*v13 - *(_QWORD *)(a1 + 392);
      if ( *v13 == *(PROPVARIANT *)(a1 + 392) )
        v15 = (char *)v13[1] - *(_QWORD *)(a1 + 400);
      if ( !v15 )
        break;
      v16 = (_BYTE *)*v13 - (char *)pvar[0];
      if ( *v13 == pvar[0] )
        v16 = (_BYTE *)v13[1] - (char *)pvar[1];
      if ( !v16 )
        break;
      v13 += 2;
      if ( v13 == v14 )
        goto LABEL_38;
    }
    v17 = 0;
    *a3 = 1;
    v20 = 0;
    lambda_b854a98ca4cb4485b0d062c9ed209b97_::operator()((__int64)&v18);
  }
  return 0LL;
}
