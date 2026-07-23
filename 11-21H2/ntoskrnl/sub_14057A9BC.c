/*
 * XREFs of sub_14057A9BC @ 0x14057A9BC
 * Callers:
 *     sub_140207A84 @ 0x140207A84 (sub_140207A84.c)
 *     sub_140207CCC @ 0x140207CCC (sub_140207CCC.c)
 * Callees:
 *     sub_140207A84 @ 0x140207A84 (sub_140207A84.c)
 *     sub_140207CCC @ 0x140207CCC (sub_140207CCC.c)
 */

char __fastcall sub_14057A9BC(_QWORD **a1, char a2)
{
  _QWORD *v2; // rbx
  unsigned __int16 *v5; // rcx
  char result; // al

  v2 = *a1;
  do
  {
    v5 = (unsigned __int16 *)(v2 - 7);
    if ( (*((_DWORD *)v2 - 13) & 1) != 0 )
      result = sub_140207CCC(v5, a2);
    else
      result = sub_140207A84(v5, a2);
    v2 = (_QWORD *)*v2;
  }
  while ( v2 != a1 );
  return result;
}
