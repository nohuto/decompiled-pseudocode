/*
 * XREFs of sub_18008511C @ 0x18008511C
 * Callers:
 *     sub_180084738 @ 0x180084738 (sub_180084738.c)
 *     sub_180084A30 @ 0x180084A30 (sub_180084A30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008511C(__int64 a1)
{
  return (*(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 32)) & 0xFFFFFFFC;
}
