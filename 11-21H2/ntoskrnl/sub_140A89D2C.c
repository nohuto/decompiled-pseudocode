/*
 * XREFs of sub_140A89D2C @ 0x140A89D2C
 * Callers:
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_140A8ABF8 @ 0x140A8ABF8 (sub_140A8ABF8.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A910FC @ 0x140A910FC (sub_140A910FC.c)
 *     sub_140A9466C @ 0x140A9466C (sub_140A9466C.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140A89D2C(unsigned __int64 a1)
{
  return qword_140C1ACC8 && a1 >= qword_140C1ACC8 && a1 < qword_140C1AD28;
}
