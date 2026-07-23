/*
 * XREFs of sub_14038D3A0 @ 0x14038D3A0
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14038D3A0(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C54DC0 )
  {
    if ( qword_140C54E18 )
      return sub_14042A5E0(a1, qword_140C54E18);
  }
  return result;
}
