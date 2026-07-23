/*
 * XREFs of sub_1407E23BC @ 0x1407E23BC
 * Callers:
 *     sub_1407E20B8 @ 0x1407E20B8 (sub_1407E20B8.c)
 *     RtlGenerateClass5Guid @ 0x14082E6E0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1407E23BC(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx

  v4 = -1073741822;
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C1B880) )
  {
    v4 = sub_14042A5E0(a1, a2);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140C1B880);
  }
  return v4;
}
