/*
 * XREFs of sub_14023947C @ 0x14023947C
 * Callers:
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14023947C(__int64 a1, int a2, int a3, int a4, __int16 a5)
{
  int v5; // eax

  if ( a2 != *(_DWORD *)(a1 + 32) )
    return 0LL;
  v5 = 0;
  if ( a3 )
    v5 = a4 | dword_140016150[a3];
  return v5 == *(_DWORD *)(a1 + 36) && a5 == *(_WORD *)(a1 + 20);
}
