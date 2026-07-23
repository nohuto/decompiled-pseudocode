/*
 * XREFs of sub_14080B778 @ 0x14080B778
 * Callers:
 *     sub_1403A0800 @ 0x1403A0800 (sub_1403A0800.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14080B778(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C5ADD0;
  if ( qword_140C5ADD0 )
    return sub_14042A5E0(a1, a2);
  return result;
}
