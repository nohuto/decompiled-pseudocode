/*
 * XREFs of ?GetActivityStoreForCDPAccountCanBeNull@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@PEAVICDPAccount@@@Z @ 0x18006F738
 * Callers:
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18006F7A8 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::GetActivityStoreForCDPAccountCanBeNull(
        _QWORD *a1,
        __int64 a2)
{
  unsigned int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v3 = CDPGetActivityStoreForAccount(a2, a1);
  if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2147221243 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)v3,
      1);
  return a1;
}
