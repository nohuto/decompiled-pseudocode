/*
 * XREFs of sub_14029135C @ 0x14029135C
 * Callers:
 *     sub_1402447EC @ 0x1402447EC (sub_1402447EC.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140307660 @ 0x140307660 (sub_140307660.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14029135C(__int64 a1)
{
  return *(_DWORD *)(a1 + 34896) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 34880);
}
