/*
 * XREFs of ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18006F7A8
 * Callers:
 *     ?FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAPEAVICDPActivity@@PEAPEAVICDPActivityStore@@@Z @ 0x18006F510 (-FindActivityAndStore@ActivityToastNotificationCallback@ToastNotification@@AEAA_NAEBU_GUID@@PEAP.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA?AVvector_iterator@?$vector_range@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAU?$IVectorView@PEAUHSTRING__@@@012@@Z @ 0x18006DD1C (--$end@PEAUHSTRING__@@@Collections@Foundation@Windows@@YA-AVvector_iterator@-$vector_range@U-$IV.c)
 *     ??0?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVICDPActivityStore@@@Z @ 0x18006E3B0 (--0-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVICDPActivityStore@@.c)
 *     ?GetActivityStoreForCDPAccountCanBeNull@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@PEAVICDPAccount@@@Z @ 0x18006F738 (-GetActivityStoreForCDPAccountCanBeNull@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@V.c)
 *     ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x180071044 (-TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@.c)
 *     ?_Reserve@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x18007177C (-_Reserve@-$vector@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V-$allocato.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rsi
  int i; // eax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  const char *v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  unsigned int v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v17[4]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v18[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF
  __int64 v23; // [rsp+98h] [rbp+20h] BYREF

  v2 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v14 = a2;
  v15 = 0;
  v16 = 0LL;
  Windows::Foundation::Collections::end<HSTRING__ *>((__int64)v17, a2);
  for ( i = 0; i != v17[2]; i = ++v15 )
  {
    v4 = v14;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    v6 = v5(v4, v15, &v16);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1815,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v6,
        1);
    v7 = v16;
    v13 = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(&v23, v7);
    if ( v23 )
    {
      try
      {
        MobilityExperience::CDPActivityHelper::GetActivityStoreForCDPAccountCanBeNull(&v22, v23);
        v8 = v22;
        if ( v22 )
        {
          v9 = v2[1];
          if ( (unsigned __int64)&v22 >= v9 || *v2 > (unsigned __int64)&v22 )
          {
            if ( v9 == v2[2] )
            {
              std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reserve(v2);
              v8 = v22;
            }
          }
          else
          {
            v10 = ((__int64)&v22 - *v2) >> 3;
            if ( v9 == v2[2] )
              std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reserve(v2);
            v8 = *(_QWORD *)(*v2 + 8 * v10);
          }
          wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>(
            (_QWORD *)v2[1],
            v8);
          v2[1] += 8LL;
        }
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v22);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtExceptionMsg(
          retaddr,
          (void *)0x1ED,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
          "Failed to get activity store",
          v12);
        v2 = a1;
      }
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v23);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return v2;
}
