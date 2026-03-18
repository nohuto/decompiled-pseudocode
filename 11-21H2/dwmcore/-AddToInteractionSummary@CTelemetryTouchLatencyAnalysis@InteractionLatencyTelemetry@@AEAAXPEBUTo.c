/*
 * XREFs of ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTouchScenarioInfo@2@_NGGAEBVInteractionFrameLatency@2@I@Z @ 0x1801D215C
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N1@Z @ 0x180013B7C (-RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenar.c)
 * Callees:
 *     ??4InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAAEAV01@AEBV01@@Z @ 0x180014160 (--4InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ??4InteractionSummaryInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801D1E10 (--4InteractionSummaryInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     InteractionLatencyTelemetry::_anonymous_namespace_::NeedToSendSummary @ 0x1801D5238 (InteractionLatencyTelemetry--_anonymous_namespace_--NeedToSendSummary.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXXZ @ 0x1801D587C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXXZ.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAHPEBUTouchScenarioInfo@2@_N@Z @ 0x1801D5950 (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAHPEB.c)
 *     ?UpdateInteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@_NI@Z @ 0x1801D6114 (-UpdateInteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScen.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        const struct InteractionLatencyTelemetry::TouchScenarioInfo *a2,
        bool a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        const struct InteractionLatencyTelemetry::InteractionFrameLatency *a6,
        __int16 a7)
{
  int v7; // r14d
  bool v8; // si
  const struct InteractionLatencyTelemetry::TouchScenarioInfo *v9; // rdi
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __m128i v13; // xmm2
  __m128i v14; // xmm3
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  __m128i v25; // xmm4
  __m128i v26; // xmm5
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // r10
  __int64 v30; // r8
  __int128 v31; // [rsp+20h] [rbp-E0h]
  __int128 v32; // [rsp+20h] [rbp-E0h]
  __int128 v33; // [rsp+30h] [rbp-D0h]
  __int128 v34; // [rsp+30h] [rbp-D0h]
  __int128 v35; // [rsp+40h] [rbp-C0h]
  __int128 v36; // [rsp+40h] [rbp-C0h]
  __m128i v37; // [rsp+50h] [rbp-B0h]
  __int128 v38; // [rsp+60h] [rbp-A0h]
  __int128 v39; // [rsp+70h] [rbp-90h]
  __int128 v40; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER PerformanceCount; // [rsp+90h] [rbp-70h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v43; // [rsp+B0h] [rbp-50h]
  __int128 v44; // [rsp+C0h] [rbp-40h]
  __m128i v45; // [rsp+D0h] [rbp-30h]
  __int128 v46; // [rsp+E0h] [rbp-20h]
  __int128 v47; // [rsp+F0h] [rbp-10h]
  __int128 v48; // [rsp+100h] [rbp+0h]
  _QWORD v49[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v50[4]; // [rsp+130h] [rbp+30h] BYREF
  char v51[76]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v52; // [rsp+19Ch] [rbp+9Ch]
  int v53; // [rsp+1ACh] [rbp+ACh]
  __int128 v54; // [rsp+1B0h] [rbp+B0h]
  __int64 v55; // [rsp+1C0h] [rbp+C0h]
  char v56; // [rsp+1C8h] [rbp+C8h]
  __int64 v57; // [rsp+1CAh] [rbp+CAh]
  __int16 v58; // [rsp+1D2h] [rbp+D2h]
  __int64 v59; // [rsp+1D4h] [rbp+D4h]
  __int16 v60; // [rsp+1DCh] [rbp+DCh]
  __int128 v61; // [rsp+1E0h] [rbp+E0h]
  __int128 v62; // [rsp+1F0h] [rbp+F0h]
  __int64 v63; // [rsp+200h] [rbp+100h]
  __int128 v64; // [rsp+208h] [rbp+108h]
  __int128 v65; // [rsp+218h] [rbp+118h]
  __int64 v66; // [rsp+228h] [rbp+128h]
  char v67[112]; // [rsp+230h] [rbp+130h] BYREF
  char v68[560]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v69; // [rsp+4D0h] [rbp+3D0h]
  char v70; // [rsp+4D4h] [rbp+3D4h]
  int v71; // [rsp+4D5h] [rbp+3D5h]
  char v72; // [rsp+4D9h] [rbp+3D9h]
  int v73; // [rsp+4DAh] [rbp+3DAh]
  char v74; // [rsp+4DEh] [rbp+3DEh]
  int v75; // [rsp+4DFh] [rbp+3DFh]
  char v76; // [rsp+4E3h] [rbp+3E3h]
  char v77[112]; // [rsp+4E4h] [rbp+3E4h] BYREF
  char v78[560]; // [rsp+554h] [rbp+454h] BYREF
  __int64 v79; // [rsp+784h] [rbp+684h]
  __int16 v80; // [rsp+78Ch] [rbp+68Ch]
  __int64 v81; // [rsp+78Eh] [rbp+68Eh]
  __int16 v82; // [rsp+796h] [rbp+696h]
  __int64 v83; // [rsp+798h] [rbp+698h]
  __int16 v84; // [rsp+7A0h] [rbp+6A0h]
  __int64 v85; // [rsp+7A2h] [rbp+6A2h]
  __int16 v86; // [rsp+7AAh] [rbp+6AAh]
  __int128 v87; // [rsp+7ACh] [rbp+6ACh]
  __int64 v88; // [rsp+7BCh] [rbp+6BCh]
  char v89; // [rsp+7C4h] [rbp+6C4h]
  __int16 v90; // [rsp+7C5h] [rbp+6C5h]
  char v91; // [rsp+7C7h] [rbp+6C7h]
  __int128 v92; // [rsp+7C8h] [rbp+6C8h]
  int v93; // [rsp+7D8h] [rbp+6D8h]
  __int64 v94; // [rsp+7DCh] [rbp+6DCh]
  __int16 v95; // [rsp+7E4h] [rbp+6E4h]
  int v96; // [rsp+7E6h] [rbp+6E6h]
  __int16 v97; // [rsp+7EAh] [rbp+6EAh]
  __int64 v98; // [rsp+7ECh] [rbp+6ECh]
  __int16 v99; // [rsp+7F4h] [rbp+6F4h]
  __int64 v100; // [rsp+7F6h] [rbp+6F6h]
  __int16 v101; // [rsp+7FEh] [rbp+6FEh]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = this;
  if ( !*((_QWORD *)this + 643) )
  {
LABEL_4:
    if ( !InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(this, a2, a3) )
      return;
    goto LABEL_5;
  }
  if ( (unsigned __int8)InteractionLatencyTelemetry::_anonymous_namespace_::NeedToSendSummary(a2, (char *)this + 5128) )
  {
    InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v10);
    a3 = v8;
    a2 = v9;
    this = v10;
    goto LABEL_4;
  }
LABEL_5:
  InteractionLatencyTelemetry::InteractionTraceProvider::UpdateInteractionSummary(
    v9,
    v8,
    *((unsigned __int8 *)v10 + 5256));
  if ( *((_BYTE *)v9 + 192) || ((*((_DWORD *)v10 + 1304) - 4) & 0xFFFFFFFD) == 0 )
  {
    if ( (unsigned int)(*((_DWORD *)v10 + 1304) - 2) <= 4 )
      ++*((_BYTE *)v10 + 5256);
    v11 = 0LL;
    v12 = (unsigned int)*((unsigned __int8 *)v10 + 5256) - 1;
    *((_DWORD *)v10 + v12 + 1317) = v7;
    *((_DWORD *)v10 + v12 + 1322) = a5;
    *((_BYTE *)v10 + v12 + 5308) = *((_BYTE *)v9 + 192);
    *((_WORD *)v10 + v12 + 2657) = a7;
    *((_WORD *)v10 + v12 + 2662) = *((_WORD *)v9 + 104);
    *((_DWORD *)v10 + 1315) += *((unsigned __int16 *)v9 + 104);
    *((_QWORD *)v10 + v12 + 672) = *((_QWORD *)v9 + 20);
    *((_DWORD *)v10 + 1316) += *((unsigned __int16 *)v9 + 105);
    *((_QWORD *)v10 + v12 + 667) = *((_QWORD *)v9 + 15);
    v13 = *(__m128i *)((char *)v10 + 5416);
    v14 = *(__m128i *)((char *)v10 + 5432);
    v15 = *(__m128i *)((char *)v10 + 5448);
    v16 = *(__m128i *)((char *)v10 + 5464);
    v17 = *(_OWORD *)((char *)v10 + 5496);
    v38 = *(_OWORD *)((char *)v10 + 5480);
    v18 = *(_OWORD *)((char *)v10 + 5512);
    LODWORD(v31) = *((_DWORD *)v9 + 54) + _mm_cvtsi128_si32(v13);
    DWORD1(v31) = *((_DWORD *)v9 + 55) + v13.m128i_i32[1];
    DWORD2(v31) = *((_DWORD *)v9 + 56) + v13.m128i_i32[2];
    HIDWORD(v31) = *((_DWORD *)v9 + 57) + v13.m128i_i32[3];
    v37 = v16;
    v39 = v17;
    LODWORD(v33) = *((_DWORD *)v9 + 58) + _mm_cvtsi128_si32(v14);
    DWORD1(v33) = *((_DWORD *)v9 + 59) + v14.m128i_i32[1];
    DWORD2(v33) = *((_DWORD *)v9 + 60) + v14.m128i_i32[2];
    HIDWORD(v33) = *((_DWORD *)v9 + 61) + v14.m128i_i32[3];
    v40 = v18;
    LODWORD(v35) = *((_DWORD *)v9 + 62) + _mm_cvtsi128_si32(v15);
    DWORD1(v35) = *((_DWORD *)v9 + 63) + v15.m128i_i32[1];
    DWORD2(v35) = *((_DWORD *)v9 + 64) + v15.m128i_i32[2];
    HIDWORD(v35) = *((_DWORD *)v9 + 65) + v15.m128i_i32[3];
    v37.m128i_i32[0] = *((_DWORD *)v9 + 66) + _mm_cvtsi128_si32(v16);
    do
    {
      v37.m128i_i32[v11 + 1] += *((_DWORD *)v9 + v11 + 67);
      ++v11;
    }
    while ( v11 < 15 );
    v42 = v31;
    v44 = v35;
    v43 = v33;
    v46 = v38;
    v45 = v37;
    v48 = v40;
    v47 = v39;
    InteractionLatencyTelemetry::InteractionFrameLatency::operator=((__int64)v10 + 5416, (__int64)&v42);
    InteractionLatencyTelemetry::InteractionFrameLatency::operator=((__int64)v10 + 112 * v19 + 5528, v20);
    *((_BYTE *)v10 + v21 + 6088) = *((_BYTE *)v9 + 328);
    v22 = 0LL;
    *((_BYTE *)v10 + v21 + 6093) = *((_BYTE *)v9 + 329);
    *((_BYTE *)v10 + v21 + 6098) = *((_BYTE *)v9 + 330);
    v23 = *(__m128i *)((char *)v10 + 6108);
    v24 = *(__m128i *)((char *)v10 + 6124);
    v25 = *(__m128i *)((char *)v10 + 6140);
    v26 = *(__m128i *)((char *)v10 + 6156);
    v27 = *(_OWORD *)((char *)v10 + 6188);
    v38 = *(_OWORD *)((char *)v10 + 6172);
    v28 = *(_OWORD *)((char *)v10 + 6204);
    LODWORD(v32) = *((_DWORD *)v9 + 83) + _mm_cvtsi128_si32(v23);
    DWORD1(v32) = *((_DWORD *)v9 + 84) + v23.m128i_i32[1];
    DWORD2(v32) = *((_DWORD *)v9 + 85) + v23.m128i_i32[2];
    HIDWORD(v32) = *((_DWORD *)v9 + 86) + v23.m128i_i32[3];
    v37 = v26;
    v39 = v27;
    LODWORD(v34) = *((_DWORD *)v9 + 87) + _mm_cvtsi128_si32(v24);
    DWORD1(v34) = *((_DWORD *)v9 + 88) + v24.m128i_i32[1];
    DWORD2(v34) = *((_DWORD *)v9 + 89) + v24.m128i_i32[2];
    HIDWORD(v34) = *((_DWORD *)v9 + 90) + v24.m128i_i32[3];
    v40 = v28;
    LODWORD(v36) = *((_DWORD *)v9 + 91) + _mm_cvtsi128_si32(v25);
    DWORD1(v36) = *((_DWORD *)v9 + 92) + v25.m128i_i32[1];
    DWORD2(v36) = *((_DWORD *)v9 + 93) + v25.m128i_i32[2];
    HIDWORD(v36) = *((_DWORD *)v9 + 94) + v25.m128i_i32[3];
    v37.m128i_i32[0] = *((_DWORD *)v9 + 95) + _mm_cvtsi128_si32(v26);
    do
    {
      v37.m128i_i32[v22 + 1] += *((_DWORD *)v9 + v22 + 96);
      ++v22;
    }
    while ( v22 < 15 );
    v42 = v32;
    v44 = v36;
    v43 = v34;
    v46 = v38;
    v45 = v37;
    v48 = v40;
    v47 = v39;
    InteractionLatencyTelemetry::InteractionFrameLatency::operator=((__int64)v10 + 6108, (__int64)&v42);
    InteractionLatencyTelemetry::InteractionFrameLatency::operator=((__int64)v10 + v29 + 6220, (__int64)a6);
    *((_WORD *)v10 + v30 + 3390) = *((_WORD *)v9 + 228);
    *((_WORD *)v10 + v30 + 3395) = *((_WORD *)v9 + 229);
    *((_WORD *)v10 + v30 + 3400) = *((_WORD *)v9 + 231);
    *((_WORD *)v10 + v30 + 3405) = *((_WORD *)v9 + 230);
    *((_BYTE *)v10 + v30 + 6103) = *((_BYTE *)v9 + 212);
    *((_DWORD *)v10 + v30 + 1705) = *((_DWORD *)v9 + 119);
  }
  QueryPerformanceCounter(&PerformanceCount);
  if ( (unsigned int)((PerformanceCount.QuadPart - *((_QWORD *)v10 + 656)) / (qword_1803D32C0 / 0x3E8uLL)) >= 0xEA60
    || *((_BYTE *)v10 + 5256) == 5 )
  {
    InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v10);
    v49[2] = 0LL;
    v49[3] = 7LL;
    LOWORD(v49[0]) = 0;
    v50[2] = 0LL;
    v50[3] = 7LL;
    LOWORD(v50[0]) = 0;
    memset_0(v51, 0, sizeof(v51));
    v53 = 0;
    v55 = 0LL;
    v56 = 0;
    v57 = 0LL;
    v58 = 0;
    v52 = 0LL;
    v59 = 0LL;
    v54 = 0LL;
    v60 = 0;
    v61 = 0LL;
    v63 = 0LL;
    v62 = 0LL;
    v66 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    memset_0(v67, 0, sizeof(v67));
    memset_0(v68, 0, sizeof(v68));
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v73 = 0;
    v74 = 0;
    v75 = 0;
    v76 = 0;
    memset_0(v77, 0, sizeof(v77));
    memset_0(v78, 0, sizeof(v78));
    v79 = 0LL;
    v80 = 0;
    v81 = 0LL;
    v82 = 0;
    v83 = 0LL;
    v84 = 0;
    v85 = 0LL;
    v86 = 0;
    v87 = 0LL;
    v88 = 0LL;
    v89 = 0;
    v90 = 0;
    v91 = 0;
    v92 = 0LL;
    v93 = 0;
    v94 = 0LL;
    v95 = 0;
    v96 = 0;
    v97 = 0;
    v98 = 0LL;
    v99 = 0;
    v100 = 0LL;
    v101 = 0;
    InteractionLatencyTelemetry::InteractionSummaryInfo::operator=((__int64)v10 + 5128, (__int64)v49);
    std::wstring::_Tidy_deallocate(v50);
    std::wstring::_Tidy_deallocate(v49);
  }
}
