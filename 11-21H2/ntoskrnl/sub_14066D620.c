/*
 * XREFs of sub_14066D620 @ 0x14066D620
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14066D620(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C1B978;
  if ( qword_140C1B978 )
    return sub_14042A5E0(a1, a2);
  return result;
}
