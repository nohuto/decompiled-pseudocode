/*
 * XREFs of sub_1800B2CC0 @ 0x1800B2CC0
 * Callers:
 *     sub_180107A3D @ 0x180107A3D (sub_180107A3D.c)
 *     sub_180107AB8 @ 0x180107AB8 (sub_180107AB8.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800B2CC0(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
