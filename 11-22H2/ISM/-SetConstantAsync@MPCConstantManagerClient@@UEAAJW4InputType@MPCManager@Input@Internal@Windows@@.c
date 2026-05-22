/*
 * XREFs of ?SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x180199530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&SetConstantAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_a408cc100a5b103155a70fabf7a2049b___ @ 0x18018F3D4 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-SetConstantAsyncCasual.c)
 *     ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z @ 0x1801944B8 (-CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@W.c)
 */

__int64 __fastcall MPCConstantManagerClient::SetConstantAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        struct Windows::Foundation::IPropertyValue *a4,
        __int64 a5)
{
  int v9; // eax
  __int128 v10; // xmm0
  __int64 v11; // r8
  tagPROPVARIANT v12; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v13[2]; // [rsp+38h] [rbp-38h] BYREF
  BYTE *pData; // [rsp+58h] [rbp-18h]
  HSTRING v15; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  HSTRING newString; // [rsp+80h] [rbp+10h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 248LL) )
  {
    v9 = MPCConstantManagerClient::CreatePROPVARIANTFromPropertyValue(a4, &v12);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v9,
        *(int *)&v12.vt);
    WindowsDuplicateString(a3, &newString);
    v10 = *(_OWORD *)&v12.vt;
    v12.lVal = 0;
    v13[1] = v10;
    *(_QWORD *)&v13[0] = a1;
    DWORD2(v13[0]) = a2;
    pData = v12.bstrblobVal.pData;
    v15 = newString;
    *(_QWORD *)&v12.vt = 4LL;
    return Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions__SetConstantAsyncCasualityName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_a408cc100a5b103155a70fabf7a2049b___(
             (int)&v12,
             a5,
             v11,
             v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
