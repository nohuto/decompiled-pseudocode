/*
 * XREFs of sub_180092DC4 @ 0x180092DC4
 * Callers:
 *     sub_180091F9C @ 0x180091F9C (sub_180091F9C.c)
 *     sub_180092300 @ 0x180092300 (sub_180092300.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180092DC4(__int64 a1)
{
  return (*(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 32)) & 0xFFFFFFFC;
}
