/*
 * XREFs of sub_140204AE4 @ 0x140204AE4
 * Callers:
 *     sub_140204954 @ 0x140204954 (sub_140204954.c)
 *     sub_140204B30 @ 0x140204B30 (sub_140204B30.c)
 *     sub_140376790 @ 0x140376790 (sub_140376790.c)
 *     sub_14064A300 @ 0x14064A300 (sub_14064A300.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140204AE4(__int64 a1, __int64 a2, char a3, char a4)
{
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  _QWORD *v7; // r8

  if ( a4 && (*(_DWORD *)(a2 + 32) & 2) == 0 )
  {
    v5 = *(_QWORD **)(a1 + 104);
    v6 = (_QWORD *)(a2 + 16);
    if ( *v5 != a1 + 96 )
      goto FatalListEntryError_0;
    *v6 = a1 + 96;
    *(_QWORD *)(a2 + 24) = v5;
    *v5 = v6;
    *(_QWORD *)(a1 + 104) = v6;
    *(_DWORD *)(a2 + 32) |= 2u;
    ++*(_DWORD *)(a1 + 88);
  }
  if ( a3 && (*(_DWORD *)(a2 + 32) & 1) == 0 )
  {
    v7 = *(_QWORD **)(a1 + 80);
    if ( *v7 == a1 + 72 )
    {
      *(_QWORD *)a2 = a1 + 72;
      *(_QWORD *)(a2 + 8) = v7;
      *v7 = a2;
      *(_QWORD *)(a1 + 80) = a2;
      *(_DWORD *)(a2 + 32) |= 1u;
      ++*(_DWORD *)(a1 + 60);
      return;
    }
FatalListEntryError_0:
    __fastfail(3u);
  }
}
