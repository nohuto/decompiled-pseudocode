/*
 * XREFs of sub_14055A5BC @ 0x14055A5BC
 * Callers:
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 * Callees:
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     sub_140584F10 @ 0x140584F10 (sub_140584F10.c)
 */

__int64 __fastcall sub_14055A5BC(_DWORD *a1, char a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  sub_14029C5B0(a1, a2 != 0, a3 != 0);
  result = (unsigned int)dword_140D06994;
  if ( (dword_140D06994 & 1) != 0 )
    return sub_140584F10(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
