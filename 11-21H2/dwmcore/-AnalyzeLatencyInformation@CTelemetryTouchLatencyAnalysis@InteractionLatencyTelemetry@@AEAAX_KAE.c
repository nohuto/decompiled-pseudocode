/*
 * XREFs of ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III0@Z @ 0x18001B5E8
 * Callers:
 *     ?UpdateScenarioLatency@TouchUpdateInfo@InteractionLatencyTelemetry@@QEAAX_K000@Z @ 0x18001AA44 (-UpdateScenarioLatency@TouchUpdateInfo@InteractionLatencyTelemetry@@QEAAX_K000@Z.c)
 * Callees:
 *     ??4InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAAEAV01@AEBV01@@Z @ 0x180014160 (--4InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@_K@Z @ 0x18001B5A8 (-FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioI.c)
 *     ?DetectInputGlitch@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEBAXAEAUTouchScenarioInfo@2@AEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III_K@Z @ 0x18001B790 (-DetectInputGlitch@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEBAXAEAUTouchSce.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@877@Z @ 0x1801CFAF4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_1801CFAF4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44333333333333333333333333333@Z @ 0x1801D1530 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U.c)
 *     ?FrameLatencies@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@II_KAEBVInteractionFrameLatency@2@@Z @ 0x1801D2F28 (-FrameLatencies@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2.c)
 *     ?TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyData@@_N_K@Z @ 0x1801D7ECC (-TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyDa.c)
 *     ??0InteractionFrameLatency@InteractionLatencyTelemetry@@QEAA@AEBUTELEMETRY_INTERACTION_FRAME_TIMES@@@Z @ 0x1801E1B68 (--0InteractionFrameLatency@InteractionLatencyTelemetry@@QEAA@AEBUTELEMETRY_INTERACTION_FRAME_TIM.c)
 *     ?IsSet@InteractionFrameLatency@InteractionLatencyTelemetry@@QEBA_NXZ @ 0x1801E25E4 (-IsSet@InteractionFrameLatency@InteractionLatencyTelemetry@@QEBA_NXZ.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        __int64 a2,
        const struct TELEMETRY_INTERACTION_FRAME_TIMES *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  __int64 v7; // rdi
  unsigned int v9; // esi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  _OWORD *v22; // rbx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // r12
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *v28; // rcx
  struct InteractionLatencyTelemetry::TouchScenarioInfo *Scenario; // rbx
  unsigned int v30; // r10d
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  bool v34; // zf
  __int64 v35; // r8
  __m128i *v36; // rdx
  __int64 v37; // rcx
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  __m128i v40; // xmm4
  __m128i v41; // xmm5
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int64 *v45; // [rsp+28h] [rbp-178h]
  unsigned int v46; // [rsp+128h] [rbp-78h] BYREF
  unsigned int v47; // [rsp+12Ch] [rbp-74h] BYREF
  unsigned int v48; // [rsp+130h] [rbp-70h] BYREF
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *v49; // [rsp+138h] [rbp-68h]
  __int64 v50; // [rsp+140h] [rbp-60h] BYREF
  __int64 v51; // [rsp+148h] [rbp-58h] BYREF
  unsigned __int64 v52; // [rsp+150h] [rbp-50h] BYREF
  _QWORD *v53; // [rsp+158h] [rbp-48h] BYREF
  _QWORD *v54; // [rsp+160h] [rbp-40h] BYREF
  char *v55; // [rsp+168h] [rbp-38h] BYREF
  __int64 v56; // [rsp+170h] [rbp-30h] BYREF
  unsigned __int64 v57; // [rsp+178h] [rbp-28h] BYREF
  __m128i v58; // [rsp+180h] [rbp-20h] BYREF
  __m256i v59; // [rsp+190h] [rbp-10h]
  __m128i v60; // [rsp+1B0h] [rbp+10h]
  __int128 v61; // [rsp+1C0h] [rbp+20h]
  __int128 v62; // [rsp+1D0h] [rbp+30h]
  __int128 v63; // [rsp+1E0h] [rbp+40h]
  __int64 v64; // [rsp+1F0h] [rbp+50h] BYREF
  __int64 v65; // [rsp+1F8h] [rbp+58h] BYREF
  __int64 v66; // [rsp+200h] [rbp+60h] BYREF
  __int64 v67; // [rsp+208h] [rbp+68h] BYREF
  __int64 v68; // [rsp+210h] [rbp+70h] BYREF
  __int64 v69; // [rsp+218h] [rbp+78h] BYREF
  __int64 v70; // [rsp+220h] [rbp+80h] BYREF
  __int64 v71; // [rsp+228h] [rbp+88h] BYREF
  __int64 v72; // [rsp+230h] [rbp+90h] BYREF
  __int64 v73; // [rsp+238h] [rbp+98h] BYREF
  __int64 v74; // [rsp+240h] [rbp+A0h] BYREF
  __int64 v75; // [rsp+248h] [rbp+A8h] BYREF
  __int64 v76; // [rsp+250h] [rbp+B0h] BYREF
  __int64 v77; // [rsp+258h] [rbp+B8h] BYREF
  __int64 v78; // [rsp+260h] [rbp+C0h] BYREF
  __int64 v79; // [rsp+268h] [rbp+C8h] BYREF
  __int64 v80; // [rsp+270h] [rbp+D0h] BYREF
  __int64 v81; // [rsp+278h] [rbp+D8h] BYREF
  __int64 v82; // [rsp+280h] [rbp+E0h] BYREF
  __int64 v83; // [rsp+288h] [rbp+E8h] BYREF
  __m128i v84; // [rsp+290h] [rbp+F0h] BYREF
  __m256i v85; // [rsp+2A0h] [rbp+100h]
  __m128i v86; // [rsp+2C0h] [rbp+120h]
  __int128 v87; // [rsp+2D0h] [rbp+130h]
  __int128 v88; // [rsp+2E0h] [rbp+140h]
  __int128 v89; // [rsp+2F0h] [rbp+150h]
  _DWORD v90[28]; // [rsp+300h] [rbp+160h] BYREF
  _OWORD v91[10]; // [rsp+370h] [rbp+1D0h] BYREF
  __int128 v92; // [rsp+410h] [rbp+270h]
  __int128 v93; // [rsp+420h] [rbp+280h]
  __int128 v94; // [rsp+430h] [rbp+290h]

  v7 = 0LL;
  v9 = a5;
  v49 = this;
  if ( (unsigned int)dword_1803D0EB8 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 2LL) )
    {
      v51 = *((_QWORD *)a3 + 25);
      v50 = *((_QWORD *)a3 + 24);
      v76 = *((_QWORD *)a3 + 23);
      v77 = *((_QWORD *)a3 + 22);
      v78 = *((_QWORD *)a3 + 21);
      v79 = *((_QWORD *)a3 + 20);
      v80 = *((_QWORD *)a3 + 19);
      v82 = *((_QWORD *)a3 + 18);
      v83 = *((_QWORD *)a3 + 17);
      v64 = *((_QWORD *)a3 + 16);
      v65 = *((_QWORD *)a3 + 15);
      v66 = *((_QWORD *)a3 + 14);
      v67 = *((_QWORD *)a3 + 13);
      v68 = *((_QWORD *)a3 + 12);
      v69 = *((_QWORD *)a3 + 11);
      v70 = *((_QWORD *)a3 + 10);
      v71 = *((_QWORD *)a3 + 9);
      v72 = *((_QWORD *)a3 + 8);
      v73 = *((_QWORD *)a3 + 7);
      v74 = *((_QWORD *)a3 + 6);
      v75 = *((_QWORD *)a3 + 5);
      v81 = *((_QWORD *)a3 + 4);
      v53 = (_QWORD *)*((_QWORD *)a3 + 3);
      v54 = (_QWORD *)*((_QWORD *)a3 + 2);
      v55 = (char *)*((_QWORD *)a3 + 1);
      v56 = *(_QWORD *)a3;
      v47 = a6;
      v52 = a7;
      v46 = a5;
      v48 = a4;
      v57 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v12,
        (unsigned int)&unk_18036CBFB,
        v13,
        v14,
        (__int64)&v57,
        (__int64)&v48,
        (__int64)&v46,
        (__int64)&v47,
        (__int64)&v52,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v81,
        (__int64)&v75,
        (__int64)&v74,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64,
        (__int64)&v83,
        (__int64)&v82,
        (__int64)&v80,
        (__int64)&v79,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v50,
        (__int64)&v51);
    }
    this = v49;
  }
  v15 = *((_OWORD *)a3 + 1);
  v91[0] = *(_OWORD *)a3;
  v16 = *((_OWORD *)a3 + 2);
  v91[1] = v15;
  v17 = *((_OWORD *)a3 + 3);
  v91[2] = v16;
  v18 = *((_OWORD *)a3 + 4);
  v91[3] = v17;
  v19 = *((_OWORD *)a3 + 5);
  v91[4] = v18;
  v20 = *((_OWORD *)a3 + 6);
  v91[5] = v19;
  v91[6] = v20;
  v21 = *((_OWORD *)a3 + 7);
  v22 = (_OWORD *)((char *)a3 + 128);
  v91[7] = v21;
  v23 = v22[1];
  v91[8] = *v22;
  v24 = v22[2];
  v91[9] = v23;
  v25 = v22[3];
  v92 = v24;
  v26 = v22[4];
  v93 = v25;
  v94 = v26;
  v27 = *(_QWORD *)&v91[0];
  if ( (unsigned __int64)v25 >= *(_QWORD *)&v91[0] )
  {
    if ( (_QWORD)v93 )
    {
      Scenario = InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
      if ( Scenario )
      {
        if ( v30 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
        {
          v52 = *((_QWORD *)Scenario + 1);
          LOWORD(v46) = *((_WORD *)Scenario + 65);
          LOWORD(v47) = *((_WORD *)Scenario + 64);
          v56 = *((_QWORD *)Scenario + 15);
          v55 = (char *)Scenario + 100;
          v32 = (_QWORD *)((char *)Scenario + 48);
          v57 = a7;
          if ( *((_QWORD *)Scenario + 9) >= v31 )
            v32 = (_QWORD *)*v32;
          v54 = v32;
          v33 = (_QWORD *)((char *)Scenario + 16);
          if ( *((_QWORD *)Scenario + 5) >= v31 )
            v33 = (_QWORD *)*v33;
          v53 = v33;
          v48 = *((_DWORD *)Scenario + 37);
          LODWORD(v50) = *((_DWORD *)Scenario + 35);
          LODWORD(v51) = *((_DWORD *)Scenario + 34);
          LODWORD(v49) = *((_DWORD *)Scenario + 33);
          v45 = &v51;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v28,
            &unk_18036CF1E);
        }
        if ( *(_QWORD *)(*((_QWORD *)g_pComposition + 32) + 8LL)
          && CTelemetryComputeScribbleAggregator::TryGetDataForInteraction(
               a6,
               (struct ComputeScribbleLatencyData *)&v58,
               *((_DWORD *)Scenario + 24) == 2,
               *((_QWORD *)Scenario + 1)) )
        {
          v34 = *((_DWORD *)Scenario + 24) == 2;
          v92 = *(_OWORD *)&v59.m256i_u64[1];
          *(_QWORD *)&v93 = v59.m256i_i64[2];
          if ( v34 )
          {
            v9 = v58.m128i_i32[0];
            *((_QWORD *)Scenario + 15) = v60.m128i_i64[0];
          }
          else
          {
            *((_DWORD *)Scenario + 24) = 1;
          }
        }
        if ( v27 )
        {
          InteractionLatencyTelemetry::InteractionFrameLatency::InteractionFrameLatency(
            (InteractionLatencyTelemetry::InteractionFrameLatency *)v90,
            (const struct TELEMETRY_INTERACTION_FRAME_TIMES *)v91);
          if ( InteractionLatencyTelemetry::InteractionFrameLatency::IsSet((struct InteractionLatencyTelemetry::TouchScenarioInfo *)((char *)Scenario + 216)) )
          {
            v37 = (__int64)Scenario + 332;
            v38 = *(__m128i *)((char *)Scenario + 332);
            v39 = *(__m128i *)((char *)Scenario + 348);
            v40 = *(__m128i *)((char *)Scenario + 364);
            v41 = *(__m128i *)((char *)Scenario + 380);
            v42 = *(_OWORD *)((char *)Scenario + 396);
            v43 = *(_OWORD *)((char *)Scenario + 412);
            v58 = v38;
            *(__m128i *)v59.m256i_i8 = v39;
            *(__m128i *)&v59.m256i_u64[2] = v40;
            v61 = v42;
            v44 = *(_OWORD *)((char *)Scenario + 428);
            v58.m128i_i32[0] = v90[0] + _mm_cvtsi128_si32(v38);
            v58.m128i_i32[1] = v90[1] + v38.m128i_i32[1];
            v58.m128i_i32[2] = v90[2] + v38.m128i_i32[2];
            v58.m128i_i32[3] = v90[3] + v38.m128i_i32[3];
            v60 = v41;
            v62 = v43;
            v59.m256i_i32[0] = v90[4] + _mm_cvtsi128_si32(v39);
            v59.m256i_i32[1] = v90[5] + v39.m128i_i32[1];
            v59.m256i_i32[2] = v90[6] + v39.m128i_i32[2];
            v59.m256i_i32[3] = v90[7] + v39.m128i_i32[3];
            v63 = v44;
            v59.m256i_i32[4] = v90[8] + _mm_cvtsi128_si32(v40);
            v59.m256i_i32[5] = v90[9] + v40.m128i_i32[1];
            v59.m256i_i32[6] = v90[10] + v40.m128i_i32[2];
            v59.m256i_i32[7] = v90[11] + v40.m128i_i32[3];
            v60.m128i_i32[0] = v90[12] + _mm_cvtsi128_si32(v41);
            do
            {
              v60.m128i_i32[v7 + 1] += v90[v7 + 13];
              ++v7;
            }
            while ( v7 < 15 );
            v36 = &v84;
            v84 = v58;
            v85 = v59;
            v87 = v61;
            v86 = v60;
            v89 = v63;
            v88 = v62;
          }
          else
          {
            v36 = (__m128i *)v90;
            v37 = v35;
          }
          InteractionLatencyTelemetry::InteractionFrameLatency::operator=(v37, (__int64)v36);
          InteractionLatencyTelemetry::InteractionTraceProvider::FrameLatencies(
            Scenario,
            a4,
            v9,
            a7,
            (const struct InteractionLatencyTelemetry::InteractionFrameLatency *)v90);
          ++*((_WORD *)Scenario + 105);
        }
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::DetectInputGlitch(
          v28,
          Scenario,
          (const struct TELEMETRY_INTERACTION_FRAME_TIMES *)v91,
          a4,
          v9,
          (unsigned int)v45,
          a7);
        ++*((_WORD *)Scenario + 104);
      }
    }
  }
}
