/*
 * XREFs of sub_1406E7820 @ 0x1406E7820
 * Callers:
 *     sub_140793B84 @ 0x140793B84 (sub_140793B84.c)
 *     sub_14085EB0C @ 0x14085EB0C (sub_14085EB0C.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406E7820(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v4; // ebx

  v2 = (struct _EX_RUNDOWN_REF *)qword_140C10D18;
  if ( a2 )
    v2 = (struct _EX_RUNDOWN_REF *)qword_140C10D20;
  if ( sub_1403614FC(v2) )
  {
    v4 = sub_14042A5E0(0LL, a2);
    sub_1403614E0(v2);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
