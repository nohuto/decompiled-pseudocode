/*
 * XREFs of sub_1800FD04C @ 0x1800FD04C
 * Callers:
 *     sub_1800FC4BC @ 0x1800FC4BC (sub_1800FC4BC.c)
 *     sub_1800FC660 @ 0x1800FC660 (sub_1800FC660.c)
 *     sub_1800FC800 @ 0x1800FC800 (sub_1800FC800.c)
 *     sub_1800FC9DC @ 0x1800FC9DC (sub_1800FC9DC.c)
 *     sub_1800FCBB0 @ 0x1800FCBB0 (sub_1800FCBB0.c)
 *     sub_1800FCDCC @ 0x1800FCDCC (sub_1800FCDCC.c)
 *     sub_1800FE9AC @ 0x1800FE9AC (sub_1800FE9AC.c)
 *     sub_1800FEA64 @ 0x1800FEA64 (sub_1800FEA64.c)
 * Callees:
 *     sub_18001D8E4 @ 0x18001D8E4 (sub_18001D8E4.c)
 */

_QWORD *__fastcall sub_1800FD04C(_QWORD *a1, const char *a2)
{
  sub_18001D8E4((__int64)a1, a2, 0);
  *a1 = &Spectre::Framework::GeometryProcessingException::`vftable';
  return a1;
}
