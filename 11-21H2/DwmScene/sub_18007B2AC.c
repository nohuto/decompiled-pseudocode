/*
 * XREFs of sub_18007B2AC @ 0x18007B2AC
 * Callers:
 *     sub_18007B2D0 @ 0x18007B2D0 (sub_18007B2D0.c)
 *     sub_18007B774 @ 0x18007B774 (sub_18007B774.c)
 * Callees:
 *     sub_1800A7CA4 @ 0x1800A7CA4 (sub_1800A7CA4.c)
 */

bool __fastcall sub_18007B2AC(_QWORD *a1, __int64 a2)
{
  return sub_1800A7CA4(a2) == *a1;
}
