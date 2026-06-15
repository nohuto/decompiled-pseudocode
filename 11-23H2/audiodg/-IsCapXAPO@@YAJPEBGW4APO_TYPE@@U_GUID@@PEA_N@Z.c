/*
 * XREFs of ?IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z @ 0x140065C0C
 * Callers:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@@@Z @ 0x140065668 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateApoInstance@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x140064EDC (-CreateApoInstance@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?TryGetCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects3@@@Z @ 0x140065DC4 (-TryGetCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffect.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall IsCapXAPO(__int64 a1, __int64 a2, IID *a3, bool *a4)
{
  unsigned int v6; // r14d
  int v8; // eax
  unsigned int v9; // ebx
  int CapXAPO; // eax
  IID v12; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  LPVOID v15; // [rsp+88h] [rbp+48h] BYREF

  v6 = a2;
  *a4 = 0;
  v15 = 0LL;
  v12 = *a3;
  v8 = CreateApoInstance(a1, a2, &v12, &v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v14 = 0LL;
    v12 = *a3;
    CapXAPO = TryGetCapXAPO(a1, v6, &v12, v15, &v14);
    v9 = CapXAPO;
    if ( CapXAPO >= 0 )
    {
      *a4 = v14 != 0;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v14);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
        (const char *)(unsigned int)CapXAPO);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
      (const char *)(unsigned int)v8);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v15);
  return v9;
}
