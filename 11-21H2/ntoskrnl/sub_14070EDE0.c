/*
 * XREFs of sub_14070EDE0 @ 0x14070EDE0
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14070EDE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C1B970;
  if ( qword_140C1B970 )
    return sub_14042A5E0(a1, a2);
  return result;
}
