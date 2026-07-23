/*
 * XREFs of sub_14067A4A0 @ 0x14067A4A0
 * Callers:
 *     sub_14067B998 @ 0x14067B998 (sub_14067B998.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 *     sub_140A80A58 @ 0x140A80A58 (sub_140A80A58.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14067A4A0(__int64 a1)
{
  return !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) && (*(_DWORD *)(a1 + 16) & 2) != 0;
}
