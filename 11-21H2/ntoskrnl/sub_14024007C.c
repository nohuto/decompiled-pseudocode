/*
 * XREFs of sub_14024007C @ 0x14024007C
 * Callers:
 *     sub_140240020 @ 0x140240020 (sub_140240020.c)
 *     sub_140240050 @ 0x140240050 (sub_140240050.c)
 * Callees:
 *     sub_14034FED0 @ 0x14034FED0 (sub_14034FED0.c)
 *     sub_140351450 @ 0x140351450 (sub_140351450.c)
 */

__int64 __fastcall sub_14024007C(__int64 a1, unsigned int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // eax
  __int64 v9; // rax
  __int64 v10; // rsi

  v6 = a3 | 4;
  if ( a2 < 0x10000 )
    v6 = a3;
  v9 = sub_14034FED0(a1, a2, a2, 0, v6);
  *a4 = 0;
  v10 = v9;
  *a5 = 0;
  if ( v9
    && ((dword_140C1BBE0 & 0x80u) != 0 && BYTE1(*(_OWORD *)(a1 + 40)) >= 2u
     || (dword_140C1BBE0 & 0x100) != 0 && (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)sub_140351450(a1, v9, a2) <= 1) )
  {
    *a4 |= 1u;
  }
  return v10;
}
