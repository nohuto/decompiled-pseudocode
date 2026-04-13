/*
 * XREFs of ?FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAPEAVICDPActivity@@PEAPEAVICDPActivityStore@@@Z @ 0x18006F560
 * Callers:
 *     ??R_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_@@QEBA@XZ @ 0x18006E9DC (--R_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_@@QEBA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindActivityAndStore@CDPActivityHelper@MobilityExperience@@YA_NAEBU_GUID@@AEBV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAPEAVICDPActivity@@PEAPEAVICDPActivityStore@@@Z @ 0x18006F604 (-FindActivityAndStore@CDPActivityHelper@MobilityExperience@@YA_NAEBU_GUID@@AEBV-$vector@V-$com_p.c)
 *     ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006F6E4 (-FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVW.c)
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18006F7F8 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAXPEAV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x180071534 (-_Destroy@-$vector@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall ToastNotification::ActivityToastNotificationCallback::FindActivityAndStore(
        ToastNotification::ActivityToastNotificationCallback *this,
        const struct _GUID *a2,
        struct ICDPActivity **a3,
        struct ICDPActivityStore **a4)
{
  __int64 v7; // rcx
  char ActivityAndStore; // bl
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  ToastNotification::ActivityToastNotificationCallback *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = this;
  MobilityExperience::CDPActivityHelper::FindAllUserAccounts(&v12);
  MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(&v10, v12);
  ActivityAndStore = MobilityExperience::CDPActivityHelper::FindActivityAndStore(a2, &v10, a3, a4);
  if ( (_QWORD)v10 )
  {
    std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Destroy(v7, v10, *((_QWORD *)&v10 + 1));
    operator delete((void *)v10);
    v10 = 0LL;
    v11 = 0LL;
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v12);
  return ActivityAndStore;
}
