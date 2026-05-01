/*
 * XREFs of sub_180008D10 @ 0x180008D10
 * Callers:
 *     sub_1800061F0 @ 0x1800061F0 (sub_1800061F0.c)
 *     sub_180008C00 @ 0x180008C00 (sub_180008C00.c)
 *     sub_180008C74 @ 0x180008C74 (sub_180008C74.c)
 * Callees:
 *     sub_180008D5C @ 0x180008D5C (sub_180008D5C.c)
 */

BOOLEAN __fastcall sub_180008D10(_QWORD *a1)
{
  sub_180008D5C();
  if ( a1[7] )
    TpReleaseWork();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
