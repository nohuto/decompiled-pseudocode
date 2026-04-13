/*
 * XREFs of ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180077DF0
 * Callers:
 *     ??R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ @ 0x180076920 (--R_lambda_141232aca07f559541c51213e97da677_@@QEBAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x18006984C (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x18007B18C (-TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@.c)
 *     ?_Reallocate@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x18007B700 (-_Reallocate@-$vector@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  int v5; // r13d
  unsigned int v6; // r14d
  __int64 i; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD *); // r15
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // r14d
  unsigned int v15; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  int v33; // [rsp+20h] [rbp-78h]
  _QWORD v34[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  unsigned int v36; // [rsp+40h] [rbp-58h]
  _QWORD v37[2]; // [rsp+48h] [rbp-50h] BYREF
  int v38; // [rsp+58h] [rbp-40h]
  __int64 v39; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v41; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v42; // [rsp+B8h] [rbp+20h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v35 = a2;
  v36 = 0;
  v37[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v41);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1222LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4,
      1);
  v37[1] = a2;
  v5 = v41;
  v38 = v41;
  v39 = 0LL;
  v6 = 3;
  v33 = 3;
  for ( i = v36; (_DWORD)i != v5; i = ++v36 )
  {
    v8 = v35;
    v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v35 + 48LL);
    v10 = v37[0];
    if ( v37[0] )
    {
      v37[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      i = v36;
    }
    v11 = v9(v8, i, v37);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v11,
        v33);
    v12 = v37[0];
    v34[1] = v37[0];
    if ( v37[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v37[0] + 8LL))(v37[0]);
    MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(v34, v12);
    v13 = v34[0];
    if ( v34[0] )
    {
      v14 = v6 | 4;
      v42 = 0LL;
      v15 = CDPGetActivityStoreForAccount(v34[0], &v42);
      if ( (int)(v15 + 0x80000000) >= 0 && v15 != -2147221243 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          69LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
          (const char *)v15,
          v14);
      v17 = v42;
      if ( v42 )
      {
        v18 = a1[1];
        if ( (unsigned __int64)&v42 >= v18 || *a1 > (unsigned __int64)&v42 )
        {
          v26 = a1[2];
          if ( v18 == v26 && !((__int64)(v26 - v18) >> 3) )
          {
            v27 = (__int64)(v18 - *a1) >> 3;
            if ( v27 == 0x1FFFFFFFFFFFFFFFLL )
              std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
            v28 = v27 + 1;
            v29 = (v26 - *a1) >> 3;
            v30 = 0LL;
            if ( 0x1FFFFFFFFFFFFFFFLL - (v29 >> 1) >= v29 )
              v30 = v29 + (v29 >> 1);
            if ( v30 >= v28 )
              v28 = v30;
            std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reallocate(a1, v28);
            v17 = v42;
          }
          *(_QWORD *)a1[1] = v17;
          if ( v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
        }
        else
        {
          v19 = ((__int64)&v42 - *a1) >> 3;
          v20 = a1[2];
          if ( v18 == v20 && !((__int64)(v20 - v18) >> 3) )
          {
            v21 = (__int64)(v18 - *a1) >> 3;
            if ( v21 == 0x1FFFFFFFFFFFFFFFLL )
              std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
            v22 = v21 + 1;
            v23 = (v20 - *a1) >> 3;
            v24 = 0LL;
            if ( 0x1FFFFFFFFFFFFFFFLL - (v23 >> 1) >= v23 )
              v24 = v23 + (v23 >> 1);
            if ( v24 >= v22 )
              v22 = v24;
            std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reallocate(a1, v22);
          }
          v25 = *(_QWORD *)(*a1 + 8 * v19);
          *(_QWORD *)a1[1] = v25;
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        }
        v17 = v42;
        a1[1] += 8LL;
      }
      v6 = v14 & 0xFFFFFFFB;
      v33 = v6;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v13 = v34[0];
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v31 = v37[0];
  if ( v37[0] )
  {
    v37[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return a1;
}
