/*
 * XREFs of sub_14040CA30 @ 0x14040CA30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14040F450 @ 0x14040F450 (sub_14040F450.c)
 *     sub_140410840 @ 0x140410840 (sub_140410840.c)
 */

__int64 __fastcall sub_14040CA30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  sub_14040F450(a2, *(unsigned int *)(a1 + 4), a4);
  return sub_140410840(a1, a4, a3);
}
