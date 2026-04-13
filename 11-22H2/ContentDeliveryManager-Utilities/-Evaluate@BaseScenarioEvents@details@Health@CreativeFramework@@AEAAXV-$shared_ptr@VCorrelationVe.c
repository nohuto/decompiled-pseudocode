/*
 * XREFs of ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180055F14
 * Callers:
 *     ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18004EA14 (--$SetEventValue@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180040C4C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x18004E654 (--$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ??$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x18004E824 (--$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ??$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x18004E91C (--$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@C.c)
 *     ??$WriteInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXAEAUHealthInfoHeader@123@AEAUHealthEvaluationInfo@123@AEA_N2PEBG@Z @ 0x18004F1FC (--$WriteInfo@UHealthEvaluationInfo@details@Health@CreativeFramework@@@BaseScenarioEvents@details.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x180051928 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?ResolveHealthResultWithTolerance@BaseScenarioEvents@details@Health@CreativeFramework@@AEAA?AW4HealthEvaluationResult@234@W45234@@Z @ 0x18005D4A4 (-ResolveHealthResultWithTolerance@BaseScenarioEvents@details@Health@CreativeFramework@@AEAA-AW4H.c)
 *     ?ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18005F6B4 (-ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char_tr.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::Evaluate(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  const WCHAR *v5; // rdi
  const WCHAR *v6; // rdx
  _DWORD *v7; // rsi
  const WCHAR *v8; // rdx
  _DWORD *v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r12
  unsigned __int16 v12; // di
  unsigned __int16 v13; // r13
  _QWORD *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rax
  HKEY v18; // r8
  __int64 v19; // rdx
  char v20; // cl
  char v21; // dl
  _BYTE *v22; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  std::_Ref_count_base *v28; // rcx
  LPDWORD pcbData; // [rsp+30h] [rbp-D0h]
  DWORD v30[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v34; // [rsp+60h] [rbp-A0h]
  _QWORD *v35; // [rsp+68h] [rbp-98h]
  _QWORD v36[3]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v37; // [rsp+88h] [rbp-78h]
  _QWORD v38[3]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v39; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v40[512]; // [rsp+B0h] [rbp-50h] BYREF

  v31 = (_QWORD *)a2;
  v4 = (_DWORD *)(a1 + 8);
  *(_WORD *)(a1 + 249) = 256;
  v30[0] = 92;
  v5 = (const WCHAR *)(a1 + 216);
  if ( *(_QWORD *)(a1 + 240) < 8uLL )
    v6 = (const WCHAR *)(a1 + 216);
  else
    v6 = *(const WCHAR **)v5;
  if ( RegGetValueW(HKEY_CURRENT_USER, v6, 0LL, 8u, 0LL, (PVOID)(a1 + 8), v30) || v30[0] <= 4 || *(_BYTE *)v4 != 4 )
  {
    *v4 = 0;
    *(_BYTE *)v4 = 4;
    memset_0((void *)(a1 + 16), 0, 0x58uLL);
  }
  v7 = (_DWORD *)(a1 + 104);
  *(_WORD *)(a1 + 251) = 256;
  v30[0] = 36;
  if ( *((_QWORD *)v5 + 3) < 8uLL )
    v8 = v5;
  else
    v8 = *(const WCHAR **)v5;
  if ( RegGetValueW(HKEY_CURRENT_USER, v8, L"PlacementReported", 8u, 0LL, (PVOID)(a1 + 104), v30)
    || v30[0] <= 4
    || *(_BYTE *)v7 != 4 )
  {
    *v7 = 0;
    *(_BYTE *)v7 = 4;
    *(_OWORD *)(a1 + 112) = 0LL;
    *(_OWORD *)(a1 + 128) = 0LL;
  }
  v9 = (_DWORD *)(a1 + 144);
  *(_WORD *)(a1 + 253) = 256;
  v30[0] = 36;
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v5 = *(const WCHAR **)v5;
  if ( RegGetValueW(HKEY_CURRENT_USER, v5, L"HealthEvaluation", 8u, 0LL, (PVOID)(a1 + 144), v30)
    || v30[0] <= 4
    || *(_BYTE *)v9 != 4 )
  {
    *v9 = 0;
    *(_BYTE *)v9 = 4;
    *(_OWORD *)(a1 + 152) = 0LL;
    *(_OWORD *)(a1 + 168) = 0LL;
  }
  GetSystemTimeAsFileTime((LPFILETIME)v30);
  v10 = v30[0] + ((unsigned __int64)v30[1] << 32);
  v34 = *(_QWORD **)(a1 + 152);
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  if ( (v11 & 2) != 0 )
    v12 = 2;
  else
    v12 = (v11 & 1) != 0;
  v13 = CreativeFramework::Health::details::BaseScenarioEvents::ResolveHealthResultWithTolerance(a1, v12);
  CreativeFramework::Health::details::HealthTrackingInfo::ToString(a1 + 16, v38);
  LODWORD(pcbData) = *(_DWORD *)(a1 + 136);
  StringCchPrintfW(
    v40,
    0x200uLL,
    (size_t *)L"{ %llu; %llu; %llu; %u }",
    *(_QWORD *)(a1 + 112),
    *(_QWORD *)(a1 + 120),
    *(_QWORD *)(a1 + 128),
    pcbData);
  std::wstring::wstring((__int64)v36);
  v14 = v36;
  if ( v37 >= 8 )
    v14 = (_QWORD *)v36[0];
  v35 = v14;
  v15 = v38;
  if ( v39 >= 8 )
    v15 = (__int64 *)v38[0];
  v32 = v15;
  v33 = v11;
  LOWORD(v30[0]) = v13;
  v16 = (__int64 *)(a1 + 184);
  if ( *(_QWORD *)(a1 + 208) < 8uLL )
    v17 = a1 + 184;
  else
    v17 = *v16;
  v31 = (_QWORD *)v17;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
    (__int64 *)&v31,
    v30,
    &v33);
  LOBYTE(v18) = *(_WORD *)(a1 + 160) != v13;
  if ( *(_QWORD *)(a1 + 152) <= *(_QWORD *)(a1 + 168) || (v19 = *(unsigned __int8 *)(a1 + 177), *(_BYTE *)(a1 + 177)) )
    v19 = 1LL;
  if ( *(_WORD *)(a1 + 160) == v13 && v34 && (unsigned __int64)&v34[108000000000LL * v19] > v10 )
  {
    v22 = (_BYTE *)(a1 + 253);
  }
  else
  {
    *(_WORD *)(a1 + 160) = v13;
    *(_QWORD *)(a1 + 152) = v10;
    if ( (_BYTE)v18 )
    {
      v21 = 1;
    }
    else
    {
      v20 = *(_BYTE *)(a1 + 177);
      v21 = v20 + 1;
      if ( v20 == -1 )
        v21 = -1;
    }
    *(_BYTE *)(a1 + 177) = v21;
    v22 = (_BYTE *)(a1 + 253);
    *(_BYTE *)(a1 + 253) = 1;
    v23 = v36;
    v33 = v11;
    LOWORD(v30[0]) = v13;
    if ( *(_BYTE *)(a1 + 248) )
    {
      if ( v37 >= 8 )
        v23 = (_QWORD *)v36[0];
      v34 = v23;
      v24 = v38;
      if ( v39 >= 8 )
        v24 = (_QWORD *)v38[0];
      v31 = v24;
      if ( *(_QWORD *)(a1 + 208) >= 8uLL )
        v16 = (__int64 *)*v16;
      v32 = v16;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (__int64 *)&v32,
        v30,
        &v33);
    }
    else
    {
      if ( v37 >= 8 )
        v23 = (_QWORD *)v36[0];
      v34 = v23;
      v25 = v38;
      if ( v39 >= 8 )
        v25 = (_QWORD *)v38[0];
      v31 = v25;
      if ( *(_QWORD *)(a1 + 208) >= 8uLL )
        v16 = (__int64 *)*v16;
      v32 = v16;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportSampledPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (__int64 *)&v32,
        v30,
        &v33);
    }
  }
  CreativeFramework::Health::details::BaseScenarioEvents::WriteInfo<CreativeFramework::Health::details::HealthEvaluationInfo>(
    a1,
    (const BYTE *)(a1 + 144),
    v18,
    v22,
    (_BYTE *)(a1 + 254));
  LOBYTE(v26) = 1;
  std::wstring::_Tidy(v36, v26, 0LL);
  LOBYTE(v27) = 1;
  std::wstring::_Tidy(v38, v27, 0LL);
  v28 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v28 )
    std::_Ref_count_base::_Decref(v28);
}
