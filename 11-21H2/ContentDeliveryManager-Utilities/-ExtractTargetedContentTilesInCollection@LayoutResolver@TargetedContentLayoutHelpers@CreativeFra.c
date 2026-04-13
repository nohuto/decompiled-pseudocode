/*
 * XREFs of ?ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800DD570
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E0F64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005C544 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_STest03@@@details@wil@@A.c)
 *     _lambda_4643dae5d5d0a07f7786c8f2505767e9_::operator() @ 0x1800DC8AC (_lambda_4643dae5d5d0a07f7786c8f2505767e9_--operator().c)
 *     CreativeFramework::EnumerateTargetedContentTiles @ 0x1800DCF78 (CreativeFramework--EnumerateTargetedContentTiles.c)
 *     ?GetStartDefaultPins@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@PEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z @ 0x1800DF490 (-GetStartDefaultPins@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScre.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInCollection(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this,
        const wchar_t *a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  __int64 v5; // rcx
  int StartDefaultPins; // eax
  __int64 (__fastcall **v7)(); // rbx
  int v8; // eax
  int v9; // edi
  __int64 i; // rdx
  __int64 (__fastcall **v11)(); // rsi
  __int64 (__fastcall *v12)(__int64 (__fastcall **)(), __int64, _QWORD); // r14
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rcx
  int v14; // eax
  __int64 (__fastcall **v15)(_QWORD, GUID *, int *); // rax
  int v16; // eax
  int v17; // eax
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v19)(); // rcx
  __int64 (__fastcall ***v20)(); // rdx
  __int64 (__fastcall ***v21)(); // rdx
  int v22; // [rsp+28h] [rbp-49h]
  int v23[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+50h] [rbp-21h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+58h] [rbp-19h]
  unsigned int v26; // [rsp+60h] [rbp-11h]
  __int64 (__fastcall ***v27)(_QWORD, GUID *, int *); // [rsp+68h] [rbp-9h] BYREF
  int v28; // [rsp+70h] [rbp-1h] BYREF
  int v29; // [rsp+74h] [rbp+3h] BYREF
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v30; // [rsp+78h] [rbp+7h] BYREF
  signed __int32 v31; // [rsp+80h] [rbp+Fh] BYREF
  __int64 (__fastcall **v32)(); // [rsp+88h] [rbp+17h] BYREF
  CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *v33; // [rsp+90h] [rbp+1Fh]
  __int64 v34; // [rsp+98h] [rbp+27h]
  __int64 (__fastcall ***v35)(); // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v30 = this;
  v3 = `wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v24 = *(__int64 (__fastcall ***)())wil::details::FeatureImpl<__WilFeatureTraits_Feature_STest03>::GetCachedFeatureEnabledState(
                                         &`wil::Feature<__WilFeatureTraits_Feature_STest03>::GetImpl'::`2'::impl,
                                         &v31);
    v3 = (unsigned int)v24;
  }
  v23[0] = 0;
  LOBYTE(v23[1]) = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF1B8,
    0x1C563ECu,
    (v3 >> 8) & 1,
    (v3 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)v23,
    1,
    0);
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    v24 = 0LL;
    *(_QWORD *)v23 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    StartDefaultPins = StartDocked::GetStartDefaultPins(v23, &v24);
    if ( StartDefaultPins < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        200LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)StartDefaultPins,
        v22);
    v7 = v24;
    v25 = v24;
    v26 = 0;
    v27 = 0LL;
    v8 = (*((__int64 (__fastcall **)(__int64 (__fastcall **)(), int *))*v24 + 7))(v24, &v28);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1222LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)v8,
        v22);
    v32 = v7;
    v9 = v28;
    LODWORD(v33) = v28;
    v34 = 0LL;
    for ( i = v26; (_DWORD)i != v9; i = ++v26 )
    {
      v11 = v25;
      v12 = (__int64 (__fastcall *)(__int64 (__fastcall **)(), __int64, _QWORD))*((_QWORD *)*v25 + 6);
      v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
      if ( v27 )
      {
        v27 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v13)[2])(v13);
        i = v26;
      }
      v14 = v12(v11, i, &v27);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          6136LL,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
          (const char *)(unsigned int)v14,
          v22);
      *(_QWORD *)v23 = 0LL;
      v15 = *v27;
      *(_QWORD *)v23 = 0LL;
      v16 = (*v15)(v27, &GUID_d3653510_4fff_4bfa_905b_ea038b142fa5, v23);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          205LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v16,
          v22);
      v17 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v23 + 48LL))(*(_QWORD *)v23, &v29);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          207LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v17,
          v22);
      if ( v29 == 3 )
        lambda_4643dae5d5d0a07f7786c8f2505767e9_::operator()(
          (__int64 *)&v30,
          *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v23);
      if ( *(_QWORD *)v23 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v23 + 16LL))(*(_QWORD *)v23);
    }
    v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
    if ( v27 )
    {
      v27 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v18)[2])(v18);
    }
    (*((void (__fastcall **)(__int64 (__fastcall **)()))*v7 + 2))(v7);
  }
  else
  {
    v32 = off_180108A68;
    v33 = this;
    v35 = &v32;
    CreativeFramework::EnumerateTargetedContentTiles(0LL, (__int64)&v32, v4);
    v19 = v35;
    if ( v35 )
    {
      v20 = &v32;
      LOBYTE(v20) = v35 != &v32;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v35)[4])(v35, v20);
      v19 = 0LL;
      v35 = 0LL;
    }
    if ( v19 )
    {
      v21 = &v32;
      LOBYTE(v21) = v19 != &v32;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v19)[4])(v19, v21);
    }
  }
}
