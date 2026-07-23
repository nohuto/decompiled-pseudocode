/*
 * XREFs of sub_140808BE8 @ 0x140808BE8
 * Callers:
 *     sub_1408091FC @ 0x1408091FC (sub_1408091FC.c)
 *     sub_140995D10 @ 0x140995D10 (sub_140995D10.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140808BE8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C5ADB0 )
    return sub_14042A5E0(qword_140C5ADB0, a2);
  return result;
}
