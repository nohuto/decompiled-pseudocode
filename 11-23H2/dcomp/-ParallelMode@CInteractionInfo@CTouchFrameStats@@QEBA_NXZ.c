/*
 * XREFs of ?ParallelMode@CInteractionInfo@CTouchFrameStats@@QEBA_NXZ @ 0x1801A88CC
 * Callers:
 *     ?SendTelemetry@CInteractionFrameStats@@MEAAXXZ @ 0x1801A59E0 (-SendTelemetry@CInteractionFrameStats@@MEAAXXZ.c)
 *     ?SendTelemetry@CTouchFrameStats@@MEAAXXZ @ 0x1801A8B60 (-SendTelemetry@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTouchFrameStats::CInteractionInfo::ParallelMode(CTouchFrameStats::CInteractionInfo *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  return *(_QWORD *)(*(_QWORD *)this + 8LL) && *(_QWORD *)(v1 + 16) && *(_DWORD *)(v1 + 40) >= 2u;
}
