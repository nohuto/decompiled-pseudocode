/*
 * XREFs of sub_140290B74 @ 0x140290B74
 * Callers:
 *     sub_14020E464 @ 0x14020E464 (sub_14020E464.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_140343DC0 @ 0x140343DC0 (sub_140343DC0.c)
 *     sub_14035C3FC @ 0x14035C3FC (sub_14035C3FC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140290B74(__int64 a1)
{
  return *(_QWORD *)(a1 + 568) == qword_140D06A00 || (*(_DWORD *)(a1 + 116) & 8) != 0;
}
