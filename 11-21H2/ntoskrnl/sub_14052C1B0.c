/*
 * XREFs of sub_14052C1B0 @ 0x14052C1B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14052C1E4 @ 0x14052C1E4 (sub_14052C1E4.c)
 */

__int64 __fastcall sub_14052C1B0(unsigned int a1, __int64 a2)
{
  return sub_14052C1E4(a1, __readmsr(*((_DWORD *)&xmmword_140C49FA0 + a1)), a2);
}
