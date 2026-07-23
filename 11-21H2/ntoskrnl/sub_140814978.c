/*
 * XREFs of sub_140814978 @ 0x140814978
 * Callers:
 *     sub_140814660 @ 0x140814660 (sub_140814660.c)
 *     sub_1409EB400 @ 0x1409EB400 (sub_1409EB400.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140814978(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 4) != 0
      && *(_DWORD *)(a1 + 4)
      && !*(_DWORD *)(a1 + 1520)
      && *(_QWORD *)(a1 + 48) == a1 + 48;
}
