/*
 * XREFs of ??$call_and_wait_for_completion@UIIdentityManager@ContentManagement@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@$$Z$$V@wil@@YA?A_PPEAUIIdentityManager@ContentManagement@@P812@EAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z@Z @ 0x18006DC0C
 * Callers:
 *     ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006F694 (-FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@V?$ComPtr@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18006DF10 (--$wait_for_completion@PEAU-$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collectio.c)
 *     ??_9IIdentityManager@ContentManagement@@$BDI@AA @ 0x18006EC90 (--_9IIdentityManager@ContentManagement@@$BDI@AA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___call_and_wait_for_completion_UIIdentityManager_ContentManagement__PEAPEAU__IAsyncOperation_PEAU__IVectorView_PEAVWebAccount_Credentials_Security_Windows___Collections_Foundation_Windows___Foundation_Windows____Z__V_wil__YA_A_PPEAUIIdentityManager_ContentManagement__P812_EAAJPEAPEAU__IAsyncOperation_PEAU__IVectorView_PEAVWebAccount_Credentials_Security_Windows___Collections_Foundation_Windows___Foundation_Windows___Z_Z(
        __int64 a1,
        __int64 a2)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  v4 =  ContentManagement::IIdentityManager::`vcall'{56,{flat}}(a2, &v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x687,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4,
      v6);
  wil::wait_for_completion<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *,Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>>(
    a1,
    v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return a1;
}
