/*
 * XREFs of sub_14050EE94 @ 0x14050EE94
 * Callers:
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050EE94(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C4C4A0 )
    return sub_14042A5E0(qword_140C4C4A0, a2);
  return result;
}
