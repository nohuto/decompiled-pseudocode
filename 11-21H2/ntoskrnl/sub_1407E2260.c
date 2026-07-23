/*
 * XREFs of sub_1407E2260 @ 0x1407E2260
 * Callers:
 *     sub_1407E20B8 @ 0x1407E20B8 (sub_1407E20B8.c)
 *     RtlGenerateClass5Guid @ 0x14082E6E0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     sub_1403614E0 @ 0x1403614E0 (sub_1403614E0.c)
 *     sub_1403614FC @ 0x1403614FC (sub_1403614FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1407E2260(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx

  v2 = -1073741822;
  if ( sub_1403614FC((struct _EX_RUNDOWN_REF *)qword_140C1B880) )
  {
    v2 = sub_14042A5E0(a1, v3);
    sub_1403614E0((struct _EX_RUNDOWN_REF *)qword_140C1B880);
  }
  return v2;
}
