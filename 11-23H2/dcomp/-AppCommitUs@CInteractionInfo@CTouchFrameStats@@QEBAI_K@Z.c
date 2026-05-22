/*
 * XREFs of ?AppCommitUs@CInteractionInfo@CTouchFrameStats@@QEBAI_K@Z @ 0x1801A6BF0
 * Callers:
 *     ?CalcAverageAppCommitLatency@CTouchFrameStats@@IEBAMXZ @ 0x1801A6CF8 (-CalcAverageAppCommitLatency@CTouchFrameStats@@IEBAMXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CTouchFrameStats::CInteractionInfo::AppCommitUs(
        CTouchFrameStats::CInteractionInfo *this,
        unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 8LL)
    && *(_QWORD *)(v2 + 16)
    && (v3 = *(_QWORD *)(v2 + 16), v4 = *((_QWORD *)this + 21), v3 > v4) )
  {
    return (v3 - v4) / (a2 / 0xF4240);
  }
  else
  {
    return 0LL;
  }
}
