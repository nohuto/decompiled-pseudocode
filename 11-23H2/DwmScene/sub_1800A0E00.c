/*
 * XREFs of sub_1800A0E00 @ 0x1800A0E00
 * Callers:
 *     sub_1800EB4A6 @ 0x1800EB4A6 (sub_1800EB4A6.c)
 *     sub_1800EB521 @ 0x1800EB521 (sub_1800EB521.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800A0E00(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
