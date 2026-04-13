/*
 * XREFs of ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18005B438
 * Callers:
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180052258 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@st.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800523D8 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_1800523D8.c)
 *     ??$HandleEvent@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180052558 (--$HandleEvent@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliver_ea_180052558.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_1_std::shared_ptr_ContentDeliveryManager::Background::CorrelationVectorWrapper___ @ 0x1800526D8 (_anonymous_namespace_--PlacementHealth--HandleEvent_1_std--shared_ptr_ContentDeliveryManager--Ba.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180045F44 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180053218 (--$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ??$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x1800533EC (--$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ??$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x1800534F0 (--$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@C.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800630C4 (-ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180063164 (-ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18006682C (-WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@QEAA_NXZ @ 0x180069864 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@Q.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180069F34 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Health::details::BaseScenarioEvents::Evaluate(
        CreativeFramework::Health::details::BaseScenarioEvents *this,
        __int64 a2)
{
  _DWORD *v4; // rdi
  __int16 v5; // si
  const WCHAR *v6; // rdx
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int8 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // r8
  void **v15; // rax
  void **v16; // rax
  char *v17; // rdi
  char *v18; // rax
  __int16 v19; // r13
  unsigned int v20; // edx
  unsigned __int64 v21; // rdx
  char v22; // cl
  char v23; // dl
  void **v24; // rax
  void **v25; // rax
  void **v26; // rax
  LPDWORD pcbData; // [rsp+30h] [rbp-E0h]
  DWORD v29[2]; // [rsp+90h] [rbp-80h] BYREF
  _QWORD *v30; // [rsp+98h] [rbp-78h] BYREF
  char *v31; // [rsp+A0h] [rbp-70h] BYREF
  void **v32; // [rsp+A8h] [rbp-68h]
  void **v33; // [rsp+B0h] [rbp-60h]
  __int64 v34; // [rsp+B8h] [rbp-58h]
  void **v35; // [rsp+C0h] [rbp-50h]
  void **v36; // [rsp+C8h] [rbp-48h]
  __int64 v37; // [rsp+D0h] [rbp-40h]
  void *v38[2]; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-28h]
  unsigned __int64 v40; // [rsp+F0h] [rbp-20h]
  void *v41[2]; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v42; // [rsp+108h] [rbp-8h]
  unsigned __int64 v43; // [rsp+110h] [rbp+0h]
  unsigned __int16 Src[512]; // [rsp+120h] [rbp+10h] BYREF
  unsigned __int16 v45[512]; // [rsp+520h] [rbp+410h] BYREF

  v37 = a2;
  CreativeFramework::Health::details::BaseScenarioEvents::ReadTrackingInfo(this);
  CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(this);
  v4 = (_DWORD *)((char *)this + 144);
  v5 = 0;
  *(_WORD *)((char *)this + 253) = 256;
  v29[0] = 36;
  v6 = (const WCHAR *)((char *)this + 216);
  if ( *((_QWORD *)this + 30) >= 8uLL )
    v6 = *(const WCHAR **)v6;
  if ( RegGetValueW(HKEY_CURRENT_USER, v6, L"HealthEvaluation", 8u, 0LL, (char *)this + 144, v29)
    || v29[0] <= 4
    || *(_BYTE *)v4 != 4 )
  {
    *v4 = 0;
    *(_BYTE *)v4 = 4;
    *(_OWORD *)((char *)this + 152) = 0LL;
    *(_OWORD *)((char *)this + 168) = 0LL;
  }
  GetSystemTimeAsFileTime((LPFILETIME)v29);
  v7 = v29[0] + ((unsigned __int64)v29[1] << 32);
  v33 = (void **)*((_QWORD *)this + 19);
  v32 = v33;
  v8 = (*(__int64 (__fastcall **)(CreativeFramework::Health::details::BaseScenarioEvents *))(*(_QWORD *)this + 8LL))(this);
  v34 = v8;
  if ( (v8 & 2) != 0 )
  {
    v5 = 2;
  }
  else if ( (v8 & 1) != 0 )
  {
    v5 = 1;
  }
  GetSystemTimeAsFileTime((LPFILETIME)v29);
  v9 = v29[0] + ((unsigned __int64)v29[1] << 32);
  v10 = (unsigned __int64 *)((char *)this + 168);
  if ( *((_WORD *)this + 81) != v5 || (v11 = *v10) == 0 )
  {
    *((_WORD *)this + 81) = v5;
    *((_BYTE *)this + 176) = 0;
    *v10 = v9;
    *((_BYTE *)this + 253) = 1;
    v11 = v9;
  }
  v12 = *((_BYTE *)this + 176);
  if ( v12 != 0xFF )
  {
    *((_BYTE *)this + 176) = ++v12;
    *((_BYTE *)this + 253) = 1;
  }
  if ( v5 != 2 && (v11 + 144000000000LL > v9 || v12 <= 3u) )
    v5 = *((_WORD *)this + 80);
  StringCchPrintfW(
    Src,
    512LL,
    L"{ %llu; %llu; %llu; %llu; %llu; %llu; %llu; %llu; %u; %u; %u; %u; %u; %u; %u }",
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 4),
    *((_QWORD *)this + 5),
    *((_QWORD *)this + 6),
    *((_QWORD *)this + 7),
    *((_QWORD *)this + 8),
    *((_QWORD *)this + 9),
    *((_DWORD *)this + 20),
    *((_DWORD *)this + 21),
    *((_DWORD *)this + 22),
    *((_DWORD *)this + 23),
    *((_BYTE *)this + 96) != 0,
    *((_BYTE *)this + 97) != 0,
    *((_BYTE *)this + 98) != 0);
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(v41[0]) = 0;
  v13 = -1LL;
  if ( Src[0] )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( Src[v14] );
  }
  std::wstring::assign(v41, Src);
  LODWORD(pcbData) = *((_DWORD *)this + 34);
  StringCchPrintfW(
    v45,
    512LL,
    L"{ %llu; %llu; %llu; %u }",
    *((_QWORD *)this + 14),
    *((_QWORD *)this + 15),
    *((_QWORD *)this + 16),
    pcbData);
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38[0]) = 0;
  if ( v45[0] )
  {
    do
      ++v13;
    while ( v45[v13] );
  }
  std::wstring::assign(v38, v45);
  v15 = v38;
  if ( v40 >= 8 )
    v15 = (void **)v38[0];
  v35 = v15;
  v16 = v41;
  if ( v43 >= 8 )
    v16 = (void **)v41[0];
  v36 = v16;
  v30 = (_QWORD *)v8;
  LOWORD(v29[0]) = v5;
  v17 = (char *)this + 184;
  if ( *((_QWORD *)this + 26) < 8uLL )
    v18 = (char *)this + 184;
  else
    v18 = *(char **)v17;
  v31 = v18;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
    (__int64 *)&v31,
    v29,
    (__int64 *)&v30);
  v19 = *((_WORD *)this + 80);
  v20 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlight>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlight>::GetImpl'::`2'::impl) != 0
      ? 1
      : 10;
  if ( *((_QWORD *)this + 19) <= *v10 )
  {
    v20 = 1;
  }
  else if ( *((unsigned __int8 *)this + 177) < v20 )
  {
    v20 = *((unsigned __int8 *)this + 177);
  }
  v21 = 711573504 * v20
      + (unsigned int)v33
      + ((864000000000LL * v20 + (unsigned int)v33 + ((unsigned __int64)HIDWORD(v32) << 32)) & 0xFFFFFFFF00000000uLL);
  if ( v19 != v5 || !v33 || v21 <= v7 )
  {
    *((_WORD *)this + 80) = v5;
    *((_QWORD *)this + 19) = v7;
    if ( v19 == v5 )
    {
      v22 = *((_BYTE *)this + 177);
      v23 = v22 + 1;
      if ( v22 == -1 )
        v23 = -1;
    }
    else
    {
      v23 = 1;
    }
    *((_BYTE *)this + 177) = v23;
    *((_BYTE *)this + 253) = 1;
    v24 = v38;
    LOWORD(v29[0]) = v5;
    if ( *((_BYTE *)this + 248) )
    {
      if ( v40 >= 8 )
        v24 = (void **)v38[0];
      v33 = v24;
      v25 = v41;
      if ( v43 >= 8 )
        v25 = (void **)v41[0];
      v32 = v25;
      v31 = (char *)v34;
      if ( *((_QWORD *)this + 26) >= 8uLL )
        v17 = *(char **)v17;
      v30 = v17;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (__int64 *)&v30,
        v29,
        (__int64 *)&v31);
    }
    else
    {
      if ( v40 >= 8 )
        v24 = (void **)v38[0];
      v33 = v24;
      v26 = v41;
      if ( v43 >= 8 )
        v26 = (void **)v41[0];
      v32 = v26;
      v31 = (char *)v34;
      if ( *((_QWORD *)this + 26) >= 8uLL )
        v17 = *(char **)v17;
      v30 = v17;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportSampledPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (__int64 *)&v30,
        v29,
        (__int64 *)&v31);
    }
  }
  CreativeFramework::Health::details::BaseScenarioEvents::WriteHealthEvaluationInfo(this);
  if ( v40 >= 8 )
    operator delete(v38[0]);
  v40 = 7LL;
  v39 = 0LL;
  LOWORD(v38[0]) = 0;
  if ( v43 >= 8 )
    operator delete(v41[0]);
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(v41[0]) = 0;
  return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2);
}
