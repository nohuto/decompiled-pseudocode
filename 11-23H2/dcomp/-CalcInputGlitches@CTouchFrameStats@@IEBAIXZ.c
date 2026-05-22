/*
 * XREFs of ?CalcInputGlitches@CTouchFrameStats@@IEBAIXZ @ 0x1801A8154
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ?InputGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0006@@PEBV12@@Z @ 0x1801A8704 (-InputGlitch@CInteractionInfo@CTouchFrameStats@@QEBA_NW4__MIDL___MIDL_itf_touchtelemetry_0000_00.c)
 */

__int64 __fastcall CTouchFrameStats::CalcInputGlitches(CTouchFrameStats *this)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // r8
  unsigned int v5; // ebp
  char v6; // al
  unsigned int v7; // ecx

  v1 = *((_QWORD *)this + 31);
  v2 = 0;
  v3 = *((_QWORD *)this + 30);
  v4 = 0LL;
  if ( v3 != v1 )
  {
    v5 = *((_DWORD *)this + 78);
    do
    {
      v6 = CTouchFrameStats::CInteractionInfo::InputGlitch(v3, v5, v4);
      v7 = v2 + 1;
      v4 = v3;
      if ( !v6 )
        v7 = v2;
      v3 += 224LL;
      v2 = v7;
    }
    while ( v3 != v1 );
  }
  return v2;
}
