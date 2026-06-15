/*
 * XREFs of ?IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z @ 0x14002C6C0
 * Callers:
 *     ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG4PEA_N@Z @ 0x140008030 (-GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG4PEA_N@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects3@@@Z @ 0x14002C774 (-TryGetCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffect.c)
 *     ?CreateApoInstance@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14002C7D4 (-CreateApoInstance@@YAJPEBGW4APO_TYPE@@U_GUID@@PEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall IsCapXAPO(__int64 a1, __int64 a2, __int128 *a3, bool *a4)
{
  unsigned int v6; // r14d
  int v8; // eax
  unsigned int v9; // ebx
  int CapXAPO; // eax
  __int128 v12; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v14; // [rsp+80h] [rbp+40h] BYREF
  __int64 v15; // [rsp+88h] [rbp+48h] BYREF

  v6 = a2;
  *a4 = 0;
  v15 = 0LL;
  v12 = *a3;
  v8 = CreateApoInstance(a1, a2, &v12, &v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v14 = 0LL;
    v12 = *a3;
    CapXAPO = TryGetCapXAPO(a1, v6, &v12, v15, &v14);
    v9 = CapXAPO;
    if ( CapXAPO < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
        (const char *)(unsigned int)CapXAPO);
    }
    else
    {
      *a4 = v14 != 0;
      v9 = 0;
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v14);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
  return v9;
}
