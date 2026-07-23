/*
 * XREFs of sub_1409B03B4 @ 0x1409B03B4
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_14068578C @ 0x14068578C (sub_14068578C.c)
 *     sub_1409B0C74 @ 0x1409B0C74 (sub_1409B0C74.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1409B03B4(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C1BEE0) )
  {
    v3 = sub_14042A5E0(a1, v2);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140C1BEE0);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
