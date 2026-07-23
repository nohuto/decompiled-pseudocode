/*
 * XREFs of sub_140A9C7F8 @ 0x140A9C7F8
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_140A9AC40 @ 0x140A9AC40 (sub_140A9AC40.c)
 */

__int64 __fastcall sub_140A9C7F8(const UNICODE_STRING *a1)
{
  if ( (_QWORD)xmmword_140C1B2B0 )
    return sub_140A9AC40(a1);
  else
    return 3221225659LL;
}
