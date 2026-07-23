/*
 * XREFs of sub_14051B360 @ 0x14051B360
 * Callers:
 *     sub_14051B384 @ 0x14051B384 (sub_14051B384.c)
 *     sub_14051B4F4 @ 0x14051B4F4 (sub_14051B4F4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14051B360(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a2 + 8) == 1 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 472LL) & 0x100) == 0;
}
