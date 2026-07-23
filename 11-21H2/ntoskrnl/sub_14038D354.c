/*
 * XREFs of sub_14038D354 @ 0x14038D354
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A4C960 @ 0x140A4C960 (sub_140A4C960.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14038D354(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( qword_140C54DC0 )
  {
    if ( qword_140C54DE8 )
      return sub_14042A5E0(a1, 0LL);
  }
  return result;
}
