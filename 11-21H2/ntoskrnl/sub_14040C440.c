/*
 * XREFs of sub_14040C440 @ 0x14040C440
 * Callers:
 *     <none>
 * Callees:
 *     sub_14040F0D0 @ 0x14040F0D0 (sub_14040F0D0.c)
 *     sub_140410840 @ 0x140410840 (sub_140410840.c)
 */

__int64 __fastcall sub_14040C440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  sub_14040F0D0(a2, a3, *(unsigned int *)(a1 + 4), a5);
  return sub_140410840(a1, a5, a4);
}
