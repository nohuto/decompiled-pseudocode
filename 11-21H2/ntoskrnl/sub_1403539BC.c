/*
 * XREFs of sub_1403539BC @ 0x1403539BC
 * Callers:
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_140968AF4 @ 0x140968AF4 (sub_140968AF4.c)
 *     sub_140969514 @ 0x140969514 (sub_140969514.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403539BC(unsigned int a1)
{
  _DWORD *v2; // r9

  if ( a1 )
  {
    v2 = (_DWORD *)(qword_140C506D8 + 4LL * (unsigned __int16)word_140D05000 * (a1 - 1));
    if ( v2 < &v2[(unsigned __int16)word_140D05000] )
      return (unsigned int)(*v2 + 1);
  }
  return a1;
}
