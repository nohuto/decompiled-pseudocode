/*
 * XREFs of sub_14097896C @ 0x14097896C
 * Callers:
 *     sub_1405B4EA0 @ 0x1405B4EA0 (sub_1405B4EA0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14097896C(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0 && (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
}
