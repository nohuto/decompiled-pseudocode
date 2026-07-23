/*
 * XREFs of sub_1403AAB4C @ 0x1403AAB4C
 * Callers:
 *     sub_140509C90 @ 0x140509C90 (sub_140509C90.c)
 *     sub_140A53718 @ 0x140A53718 (sub_140A53718.c)
 * Callees:
 *     sub_1403AAB98 @ 0x1403AAB98 (sub_1403AAB98.c)
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_140509960 @ 0x140509960 (sub_140509960.c)
 */

__int64 __fastcall sub_1403AAB4C(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx

  result = sub_1403AAE50();
  if ( (_BYTE)result == 2 )
  {
    LOBYTE(v7) = a2;
    return sub_1403AAB98(a1, v7, a3);
  }
  else if ( (_BYTE)result == 1 )
  {
    LOBYTE(v7) = a2;
    return sub_140509960(a1, v7, a3);
  }
  return result;
}
