/*
 * XREFs of sub_1800B2CD4 @ 0x1800B2CD4
 * Callers:
 *     sub_180107B69 @ 0x180107B69 (sub_180107B69.c)
 * Callees:
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 *     sub_1800FC250 @ 0x1800FC250 (sub_1800FC250.c)
 */

void **__fastcall sub_1800B2CD4(_QWORD *a1)
{
  void **result; // rax

  sub_1800B3DDC(a1 + 27);
  sub_1800B3DDC(a1 + 4);
  sub_1800FC250(a1 + 1);
  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
