/*
 * XREFs of sub_1409C5CC4 @ 0x1409C5CC4
 * Callers:
 *     sub_14055E2F4 @ 0x14055E2F4 (sub_14055E2F4.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1409C5CC4(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741822;
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C1B880) )
  {
    v2 = sub_14042A5E0(a1, 0LL);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140C1B880);
  }
  return v2;
}
