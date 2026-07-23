/*
 * XREFs of sub_1406EB784 @ 0x1406EB784
 * Callers:
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140A81214 @ 0x140A81214 (sub_140A81214.c)
 * Callees:
 *     sub_14029C6DC @ 0x14029C6DC (sub_14029C6DC.c)
 */

_BOOL8 sub_1406EB784()
{
  __int64 v0; // rcx

  return sub_14029C6DC() && (*(_DWORD *)(v0 + 104) & 0x80u) != 0;
}
