/*
 * XREFs of ?InputGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@PEBV12@@Z @ 0x1801A8704
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?CalcInputGlitches@CTouchFrameStats@@IEBAIXZ @ 0x1801A8154 (-CalcInputGlitches@CTouchFrameStats@@IEBAIXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?StartTime@CInteractionInfo@CTouchFrameStats@@QEBA_KW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@@Z @ 0x1801A94B0 (-StartTime@CInteractionInfo@CTouchFrameStats@@QEBA_KW4__MIDL___MIDL_itf_touchtelemetry_0000_0000.c)
 */

bool __fastcall CTouchFrameStats::CInteractionInfo::InputGlitch(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  float v5; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm0_4
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 started; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8

  v2 = *a1;
  if ( !*(_QWORD *)(*a1 + 8) || !*(_QWORD *)(v2 + 16) )
    return 0;
  v4 = *(_QWORD *)(v2 + 32);
  if ( v4 < 0 )
  {
    v6 = *(_QWORD *)(v2 + 32) & 1LL | (*(_QWORD *)(v2 + 32) >> 1);
    v5 = (float)(int)v6 + (float)(int)v6;
  }
  else
  {
    v5 = (float)(int)v4;
  }
  v7 = v5 * 1.5;
  v8 = 0LL;
  if ( v7 >= 9.223372e18 )
  {
    v7 = v7 - 9.223372e18;
    if ( v7 < 9.223372e18 )
      v8 = 0x8000000000000000uLL;
  }
  v9 = v8 + (unsigned int)(int)v7;
  started = CTouchFrameStats::CInteractionInfo::StartTime(a1, a2);
  v14 = *(_QWORD *)(v13 + 16);
  if ( v14 > started && v14 - started > v9 )
    return 1;
  if ( v12
    && (!*(_QWORD *)(v11 + 16) || *(_DWORD *)(v11 + 200) == *(_DWORD *)(v12 + 200) + 1)
    && (v16 = CTouchFrameStats::CInteractionInfo::StartTime(v12, a2), v17 > v16) )
  {
    return v17 - v16 > v9;
  }
  else
  {
    return 0;
  }
}
