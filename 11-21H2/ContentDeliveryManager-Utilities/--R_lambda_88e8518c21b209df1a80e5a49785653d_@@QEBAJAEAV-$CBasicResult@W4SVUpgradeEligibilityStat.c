/*
 * XREFs of ??R_lambda_88e8518c21b209df1a80e5a49785653d_@@QEBAJAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@@Z @ 0x18002AA98
 * Callers:
 *     ?Run@?$COperationLambdaVar@$0A@V_lambda_88e8518c21b209df1a80e5a49785653d_@@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@23@@Z @ 0x1800449F0 (-Run@-$COperationLambdaVar@$0A@V_lambda_88e8518c21b209df1a80e5a49785653d_@@V-$CBasicResult@W4SVU.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180023DEC (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180034D30 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UpgradeEligibilitySessio.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall _lambda_88e8518c21b209df1a80e5a49785653d_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  HRESULT v4; // eax
  int v5; // eax
  int v6; // esi
  __int64 v7; // rax
  int v8; // eax
  HRESULT v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  int ActivationFactory; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  const char *v17; // r9
  unsigned int i; // r14d
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, PVOID, __int64 *); // rdi
  HSTRING_HEADER *v26; // rax
  int v27; // eax
  unsigned int v28; // r8d
  __int64 v29; // rbx
  int (__fastcall *v30)(__int64, PVOID, char *); // rdi
  HSTRING_HEADER *v31; // rax
  int v32; // esi
  unsigned int v33; // r8d
  char v34; // al
  __int64 v35; // rbx
  int (__fastcall *v36)(__int64, PVOID, double *); // rdi
  HSTRING_HEADER *v37; // rax
  char v38; // al
  int ppv; // [rsp+20h] [rbp-D8h]
  char v41[4]; // [rsp+40h] [rbp-B8h] BYREF
  int v42; // [rsp+44h] [rbp-B4h] BYREF
  char v43; // [rsp+48h] [rbp-B0h]
  __int64 v44; // [rsp+50h] [rbp-A8h] BYREF
  BSTR bstrString; // [rsp+58h] [rbp-A0h] BYREF
  __int64 *v46; // [rsp+60h] [rbp-98h] BYREF
  double v47; // [rsp+68h] [rbp-90h] BYREF
  __int64 *v48; // [rsp+70h] [rbp-88h] BYREF
  __int64 *v49; // [rsp+78h] [rbp-80h] BYREF
  LPVOID v50; // [rsp+80h] [rbp-78h] BYREF
  unsigned int v51; // [rsp+88h] [rbp-70h] BYREF
  __int64 v52; // [rsp+90h] [rbp-68h] BYREF
  __int64 *v53; // [rsp+98h] [rbp-60h] BYREF
  const WCHAR *v54; // [rsp+A0h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-50h] BYREF
  HSTRING string; // [rsp+C0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  try
  {
    v42 = 0;
    v54 = L"UsePromotionalUxSurfaces";
    v3 = `wil::Feature<__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext>::GetImpl'::`2'::impl & 2) == 0 )
    {
      v47 = *(double *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext>::GetCachedFeatureEnabledState(
                         &`wil::Feature<__WilFeatureTraits_Feature_UpgradeEligibilitySessionContext>::GetImpl'::`2'::impl,
                         &v50);
      v3 = LODWORD(v47);
    }
    v42 = 0;
    v43 = 3;
    wil::details::ReportUsageToService(&unk_1801AF468, 31842301LL, (v3 >> 8) & 1, (v3 >> 9) & 1, &v42, 1, 3);
    v42 = 8;
    v50 = 0LL;
    v4 = CoCreateInstance(
           &GUID_b91d5831_b1bd_4608_8198_d72e155020f7,
           0LL,
           4u,
           &GUID_07f3afac_7c8a_4ce7_a5e0_3d24ee8a77e0,
           &v50);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17F8,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v4,
        ppv);
    if ( !v50 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x24B,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)0x80004005LL,
        ppv);
    v53 = 0LL;
    v5 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 **))v50)(
           v50,
           &GUID_c57692f8_8f5f_47cb_9381_34329b40285a,
           &v53);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x17F8,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v5,
        ppv);
    v6 = 20;
    v49 = 0LL;
    v7 = *v53;
    v49 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *, __int64 **))(v7 + 40))(
           v53,
           L"ContentDeliveryManager",
           &v49);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x24E,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v8,
        ppv);
    v52 = 0LL;
    string = 0LL;
    v9 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
    if ( v9 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
    }
    else
    {
      ActivationFactory = RoGetActivationFactory(string, &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v52);
      v13 = retaddr;
      if ( ActivationFactory >= 0 )
      {
        v48 = 0LL;
        v14 = *v49;
        v48 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v14 + 56))(v49, &v48);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x253,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v15,
            ppv);
        v16 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v48 + 32))(v48, &v51);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x255,
            (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v16,
            ppv);
        v41[0] = 0;
        for ( i = 0; ; ++i )
        {
          if ( i >= v51 )
            goto LABEL_41;
          v46 = 0LL;
          v19 = *v48;
          v46 = 0LL;
          v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v19 + 24))(v48, i, &v46);
          if ( v20 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x25A,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v20,
              ppv);
          bstrString = 0LL;
          v21 = *v46;
          bstrString = 0LL;
          v22 = (*(__int64 (__fastcall **)(__int64 *, BSTR *))(v21 + 264))(v46, &bstrString);
          if ( v22 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x25D,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v22,
              ppv);
          v44 = 0LL;
          v24 = v52;
          v25 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v52 + 48LL);
          v44 = 0LL;
          v47 = *(double *)&bstrString;
          v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&v47, v23);
          v27 = v25(v24, v26[1].Reserved.Reserved1, &v44);
          if ( v27 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x25F,
              (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)(unsigned int)v27,
              ppv);
          v29 = v44;
          v30 = *(int (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v44 + 96LL);
          v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v54, v28);
          v32 = v6 | 1;
          v42 = v32;
          if ( v30(v29, v31[1].Reserved.Reserved1, v41) < 0 || (v34 = 1, !v41[0]) )
            v34 = 0;
          if ( (v32 & 1) != 0 )
            v32 &= ~1u;
          if ( v34 )
            break;
          v47 = 0.0;
          v35 = v44;
          v36 = *(int (__fastcall **)(__int64, PVOID, double *))(*(_QWORD *)v44 + 88LL);
          v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v54, v33);
          v6 = v32 | 2;
          v42 = v6;
          if ( v36(v35, v37[1].Reserved.Reserved1, &v47) < 0 || (v38 = 1, v47 <= 0.0) )
            v38 = 0;
          if ( (v6 & 2) != 0 )
            v6 &= ~2u;
          if ( v38 )
          {
            v41[0] = 1;
            if ( v44 )
              (*(void (**)(void))(*(_QWORD *)v44 + 16LL))();
            if ( bstrString )
              SysFreeString(bstrString);
            if ( v46 )
              goto LABEL_40;
            goto LABEL_41;
          }
          if ( v44 )
            (*(void (**)(void))(*(_QWORD *)v44 + 16LL))();
          if ( bstrString )
            SysFreeString(bstrString);
          if ( v46 )
            (*(void (**)(void))(*v46 + 16))();
        }
        if ( v44 )
          (*(void (**)(void))(*(_QWORD *)v44 + 16LL))();
        if ( bstrString )
          SysFreeString(bstrString);
        if ( v46 )
LABEL_40:
          (*(void (**)(void))(*v46 + 16))();
LABEL_41:
        *(_DWORD *)(a2 + 16) = 2 - (v41[0] != 0);
        if ( v48 )
          (*(void (**)(void))(*v48 + 16))();
        if ( v52 )
          (*(void (**)(void))(*(_QWORD *)v52 + 16LL))();
        if ( v49 )
          (*(void (**)(void))(*v49 + 16))();
        if ( v53 )
          (*(void (**)(void))(*v53 + 16))();
        if ( v50 )
          (*(void (**)(void))(*(_QWORD *)v50 + 16LL))();
        return 0LL;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x250,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory,
      ppv);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x273,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      v17);
  }
  return 0LL;
}
