/*
 * XREFs of sub_180011CA0 @ 0x180011CA0
 * Callers:
 *     sub_180011560 @ 0x180011560 (sub_180011560.c)
 *     sub_18001D698 @ 0x18001D698 (sub_18001D698.c)
 *     sub_1800208A0 @ 0x1800208A0 (sub_1800208A0.c)
 *     sub_180025598 @ 0x180025598 (sub_180025598.c)
 *     sub_180026000 @ 0x180026000 (sub_180026000.c)
 *     sub_180026CF0 @ 0x180026CF0 (sub_180026CF0.c)
 *     sub_180026DEC @ 0x180026DEC (sub_180026DEC.c)
 *     sub_180026E50 @ 0x180026E50 (sub_180026E50.c)
 *     sub_180031048 @ 0x180031048 (sub_180031048.c)
 *     sub_1800352C0 @ 0x1800352C0 (sub_1800352C0.c)
 *     sub_1800354F0 @ 0x1800354F0 (sub_1800354F0.c)
 *     sub_1800356DC @ 0x1800356DC (sub_1800356DC.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_180036AD4 @ 0x180036AD4 (sub_180036AD4.c)
 *     sub_180037578 @ 0x180037578 (sub_180037578.c)
 *     sub_180037678 @ 0x180037678 (sub_180037678.c)
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 *     sub_180057C24 @ 0x180057C24 (sub_180057C24.c)
 *     sub_1800748C4 @ 0x1800748C4 (sub_1800748C4.c)
 *     sub_1800A0254 @ 0x1800A0254 (sub_1800A0254.c)
 *     sub_1800A02A4 @ 0x1800A02A4 (sub_1800A02A4.c)
 *     sub_1800A0340 @ 0x1800A0340 (sub_1800A0340.c)
 *     sub_1800A0450 @ 0x1800A0450 (sub_1800A0450.c)
 *     sub_1800A1768 @ 0x1800A1768 (sub_1800A1768.c)
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180011CA0(_QWORD *a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // r9
  _QWORD *result; // rax

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  result = a1;
  *a1 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  return result;
}
