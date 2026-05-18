/*
 * XREFs of sub_1800A0E14 @ 0x1800A0E14
 * Callers:
 *     sub_1800A0CE8 @ 0x1800A0CE8 (sub_1800A0CE8.c)
 *     sub_1800A2BB0 @ 0x1800A2BB0 (sub_1800A2BB0.c)
 *     sub_1800A3948 @ 0x1800A3948 (sub_1800A3948.c)
 *     sub_1800EB5C0 @ 0x1800EB5C0 (sub_1800EB5C0.c)
 * Callees:
 *     sub_1800A1C58 @ 0x1800A1C58 (sub_1800A1C58.c)
 *     sub_1800E0DB0 @ 0x1800E0DB0 (sub_1800E0DB0.c)
 */

void **__fastcall sub_1800A0E14(_QWORD *a1)
{
  void **result; // rax

  sub_1800A1C58(a1 + 27);
  sub_1800A1C58(a1 + 4);
  sub_1800E0DB0(a1 + 1);
  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
