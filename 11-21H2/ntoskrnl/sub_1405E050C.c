/*
 * XREFs of sub_1405E050C @ 0x1405E050C
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405E050C(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx

  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140D06AA8) )
  {
    v4 = sub_14042A5E0(a1, a2);
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(qword_140D06AA8 + 64));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
