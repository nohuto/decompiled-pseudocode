/*
 * XREFs of sub_1405A5628 @ 0x1405A5628
 * Callers:
 *     sub_1405A57F0 @ 0x1405A57F0 (sub_1405A57F0.c)
 *     sub_1405A5DF0 @ 0x1405A5DF0 (sub_1405A5DF0.c)
 * Callees:
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1405A5940 @ 0x1405A5940 (sub_1405A5940.c)
 */

__int64 __fastcall sub_1405A5628(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 i; // rdi
  __int64 v9; // rsi
  ULONG_PTR v10; // rcx

  *(_QWORD *)a3 = 0LL;
  v4 = 0;
  *a4 = -1;
  for ( i = BugCheckParameter2; i < a2; i += 8LL )
  {
    v9 = 48 * (((unsigned __int64)sub_140317A10(i) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( !*(_QWORD *)a3 )
      *(_QWORD *)a3 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
    sub_1405A5940(i);
    v10 = (v9 + 0x220000000000LL) / 48;
    if ( *a4 == -1 )
    {
      *a4 = *((_DWORD *)sub_1402C1550(v10) + 2);
    }
    else if ( *a4 != *((_DWORD *)sub_1402C1550(v10) + 2) )
    {
      v4 = 1;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 4LL) & 8) != 0 && !sub_140277C50(v9) )
      v4 = 1;
  }
  return v4;
}
