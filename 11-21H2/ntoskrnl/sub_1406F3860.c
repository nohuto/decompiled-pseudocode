/*
 * XREFs of sub_1406F3860 @ 0x1406F3860
 * Callers:
 *     sub_1406F3800 @ 0x1406F3800 (sub_1406F3800.c)
 *     sub_14097023C @ 0x14097023C (sub_14097023C.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1406F3860(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 16);
  return v2 && *(_QWORD *)(v2 + 8LL * a2 + 56);
}
