/*
 * XREFs of KeProfileInterruptWithSource @ 0x140571540
 * Callers:
 *     sub_14050FCB0 @ 0x14050FCB0 (sub_14050FCB0.c)
 *     sub_140520920 @ 0x140520920 (sub_140520920.c)
 *     sub_14052C290 @ 0x14052C290 (sub_14052C290.c)
 * Callees:
 *     sub_140571980 @ 0x140571980 (sub_140571980.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  sub_140571980(a1, a2, *((_QWORD *)KeGetCurrentThread() + 23) + 24LL);
  return sub_140571980(a1, v2, &qword_140C2BB80);
}
