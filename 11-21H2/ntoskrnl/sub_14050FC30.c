/*
 * XREFs of sub_14050FC30 @ 0x14050FC30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14050DFA4 @ 0x14050DFA4 (sub_14050DFA4.c)
 */

__int64 __fastcall sub_14050FC30(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  if ( a1 || a2 )
    return 3221225659LL;
  *a4 = 0;
  *a5 = 0;
  *a3 = 1;
  return sub_14050DFA4();
}
