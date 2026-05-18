/*
 * XREFs of sub_18007CA00 @ 0x18007CA00
 * Callers:
 *     sub_18007E7DC @ 0x18007E7DC (sub_18007E7DC.c)
 *     sub_180086318 @ 0x180086318 (sub_180086318.c)
 *     sub_180086870 @ 0x180086870 (sub_180086870.c)
 *     sub_18008BAC8 @ 0x18008BAC8 (sub_18008BAC8.c)
 *     sub_18008C4A0 @ 0x18008C4A0 (sub_18008C4A0.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

__int64 __fastcall sub_18007CA00(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180011B24(v3);
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
