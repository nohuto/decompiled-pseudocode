/*
 * XREFs of sub_1406AB544 @ 0x1406AB544
 * Callers:
 *     RtlCreateAtomTableEx @ 0x14022EB30 (RtlCreateAtomTableEx.c)
 *     sub_140232EF0 @ 0x140232EF0 (sub_140232EF0.c)
 *     sub_140232FC4 @ 0x140232FC4 (sub_140232FC4.c)
 *     sub_140233054 @ 0x140233054 (sub_140233054.c)
 *     RtlAddAtomToAtomTableEx @ 0x1402F1090 (RtlAddAtomToAtomTableEx.c)
 *     sub_1403547BC @ 0x1403547BC (sub_1403547BC.c)
 *     RtlDestroyAtomTable @ 0x1406AB410 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1409B8CC0 (RtlEmptyAtomTable.c)
 * Callees:
 *     sub_140724DC8 @ 0x140724DC8 (sub_140724DC8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406AB544(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  sub_140724DC8(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
