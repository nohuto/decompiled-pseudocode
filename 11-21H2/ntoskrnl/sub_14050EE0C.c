/*
 * XREFs of sub_14050EE0C @ 0x14050EE0C
 * Callers:
 *     sub_140390D20 @ 0x140390D20 (sub_140390D20.c)
 *     sub_14050AABC @ 0x14050AABC (sub_14050AABC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050EE0C(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4C498 )
    return sub_14042A5E0(a1, qword_140C4C498);
  return result;
}
