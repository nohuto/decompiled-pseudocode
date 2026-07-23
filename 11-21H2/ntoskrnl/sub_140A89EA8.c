/*
 * XREFs of sub_140A89EA8 @ 0x140A89EA8
 * Callers:
 *     sub_1409644D8 @ 0x1409644D8 (sub_1409644D8.c)
 * Callees:
 *     sub_140A8A088 @ 0x140A8A088 (sub_140A8A088.c)
 */

__int64 __fastcall sub_140A89EA8(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r11

  result = sub_140A8A088(&off_140D50040, a2, a1);
  if ( !result )
  {
    result = sub_140A8A088(&off_140D4E690, v3, v4);
    if ( !result )
    {
      result = sub_140A8A088(&off_140D4E190, v5, v6);
      if ( !result )
        return sub_140A8A088(&off_140D4F470, v7, v8);
    }
  }
  return result;
}
