/*
 * XREFs of ??4InteractionSummaryInfo@InteractionLatencyTelemetry@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801D1E10
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTouchScenarioInfo@2@_NGGAEBVInteractionFrameLatency@2@I@Z @ 0x1801D215C (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTo.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAHPEBUTouchScenarioInfo@2@_N@Z @ 0x1801D5950 (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAHPEB.c)
 * Callees:
 *     ??4InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAAEAV01@AEBV01@@Z @ 0x180014160 (--4InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::InteractionSummaryInfo::operator=(__int64 a1, __int64 a2)
{
  _OWORD *v4; // rsi
  _DWORD *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  _WORD *v12; // rcx
  __int64 v13; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r11
  __int64 v24; // rcx
  __int64 v25; // r10
  _BYTE *v26; // rcx
  __int64 v27; // rdx
  _BYTE *v28; // rcx
  __int64 v29; // rdx
  _BYTE *v30; // rcx
  __int64 v31; // rdx
  _BYTE *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r11
  __int64 v38; // rcx
  __int64 v39; // r10
  _WORD *v40; // rcx
  __int64 v41; // rdx
  _WORD *v42; // rcx
  __int64 v43; // rdx
  _WORD *v44; // rcx
  __int64 v45; // rdx
  _WORD *v46; // rcx
  __int64 v47; // rdx
  _DWORD *v48; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)a1);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
  }
  v4 = (_OWORD *)(a2 + 32);
  if ( a1 + 32 != a2 + 32 )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 32));
    *(_OWORD *)(a1 + 32) = *v4;
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_QWORD *)(a2 + 56) = 7LL;
    *(_WORD *)v4 = 0;
  }
  v5 = (_DWORD *)(a1 + 140);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
  v6 = a2 - a1;
  v7 = 5LL;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_BYTE *)(a1 + 80) = *(_BYTE *)(a2 + 80);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 100);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
  *(_BYTE *)(a1 + 128) = *(_BYTE *)(a2 + 128);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  do
  {
    *v5 = *(_DWORD *)((char *)v5 + v6);
    ++v5;
    --v7;
  }
  while ( v7 );
  v8 = (_DWORD *)(a1 + 160);
  v9 = 5LL;
  do
  {
    *v8 = *(_DWORD *)((char *)v8 + v6);
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = (_BYTE *)(a1 + 180);
  v11 = 5LL;
  do
  {
    *v10 = v10[v6];
    ++v10;
    --v11;
  }
  while ( v11 );
  v12 = (_WORD *)(a1 + 186);
  v13 = 5LL;
  do
  {
    *v12 = *(_WORD *)((char *)v12 + v6);
    ++v12;
    --v13;
  }
  while ( v13 );
  v14 = (_WORD *)(a1 + 196);
  v15 = 5LL;
  do
  {
    *v14 = *(_WORD *)((char *)v14 + v6);
    ++v14;
    --v15;
  }
  while ( v15 );
  v16 = (_QWORD *)(a1 + 208);
  v17 = 5LL;
  do
  {
    *v16 = *(_QWORD *)((char *)v16 + v6);
    ++v16;
    --v17;
  }
  while ( v17 );
  v18 = (_QWORD *)(a1 + 248);
  v19 = 5LL;
  do
  {
    *v18 = *(_QWORD *)((char *)v18 + v6);
    ++v18;
    --v19;
  }
  while ( v19 );
  InteractionLatencyTelemetry::InteractionFrameLatency::operator=(a1 + 288, a2 + 288);
  v21 = a1 + 400;
  do
  {
    InteractionLatencyTelemetry::InteractionFrameLatency::operator=(v21, v20 + v21);
    v21 = v24 + 112;
  }
  while ( v25 != v23 );
  v26 = (_BYTE *)(a1 + 960);
  v27 = v22;
  do
  {
    *v26 = v26[v20];
    v26 += v23;
    v27 -= v23;
  }
  while ( v27 );
  v28 = (_BYTE *)(a1 + 965);
  v29 = v22;
  do
  {
    *v28 = v28[v20];
    v28 += v23;
    v29 -= v23;
  }
  while ( v29 );
  v30 = (_BYTE *)(a1 + 970);
  v31 = v22;
  do
  {
    *v30 = v30[v20];
    v30 += v23;
    v31 -= v23;
  }
  while ( v31 );
  v32 = (_BYTE *)(a1 + 975);
  v33 = v22;
  do
  {
    *v32 = v32[v20];
    v32 += v23;
    v33 -= v23;
  }
  while ( v33 );
  InteractionLatencyTelemetry::InteractionFrameLatency::operator=(a1 + 980, a2 + 980);
  v35 = a1 + 1092;
  do
  {
    InteractionLatencyTelemetry::InteractionFrameLatency::operator=(v35, v34 + v35);
    v35 = v38 + 112;
  }
  while ( v39 != v37 );
  v40 = (_WORD *)(a1 + 1652);
  v41 = v36;
  do
  {
    *v40 = *(_WORD *)((char *)v40 + v34);
    ++v40;
    v41 -= v37;
  }
  while ( v41 );
  v42 = (_WORD *)(a1 + 1662);
  v43 = v36;
  do
  {
    *v42 = *(_WORD *)((char *)v42 + v34);
    ++v42;
    v43 -= v37;
  }
  while ( v43 );
  v44 = (_WORD *)(a1 + 1672);
  v45 = v36;
  do
  {
    *v44 = *(_WORD *)((char *)v44 + v34);
    ++v44;
    v45 -= v37;
  }
  while ( v45 );
  v46 = (_WORD *)(a1 + 1682);
  v47 = v36;
  do
  {
    *v46 = *(_WORD *)((char *)v46 + v34);
    ++v46;
    v47 -= v37;
  }
  while ( v47 );
  v48 = (_DWORD *)(a1 + 1692);
  do
  {
    *v48 = *(_DWORD *)((char *)v48 + v34);
    ++v48;
    v36 -= v37;
  }
  while ( v36 );
  result = a1;
  *(_OWORD *)(a1 + 1712) = *(_OWORD *)(a2 + 1712);
  *(_OWORD *)(a1 + 1728) = *(_OWORD *)(a2 + 1728);
  *(_OWORD *)(a1 + 1744) = *(_OWORD *)(a2 + 1744);
  *(_OWORD *)(a1 + 1760) = *(_OWORD *)(a2 + 1760);
  return result;
}
