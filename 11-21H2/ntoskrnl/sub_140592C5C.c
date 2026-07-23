/*
 * XREFs of sub_140592C5C @ 0x140592C5C
 * Callers:
 *     sub_140592964 @ 0x140592964 (sub_140592964.c)
 * Callees:
 *     sub_140593064 @ 0x140593064 (sub_140593064.c)
 *     sub_140593218 @ 0x140593218 (sub_140593218.c)
 */

__int64 __fastcall sub_140592C5C(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  if ( *(_WORD *)(a2 + 2) )
  {
    v4 = *(unsigned __int16 *)(a2 + 2);
    if ( !(unsigned int)sub_140593064(*(_QWORD *)(a2 + 8), v4) )
      return 3221225473LL;
    sub_140593218(a1, *(_QWORD *)(a2 + 8), v4);
  }
  return 0LL;
}
