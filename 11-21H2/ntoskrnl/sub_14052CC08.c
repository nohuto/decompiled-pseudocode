/*
 * XREFs of sub_14052CC08 @ 0x14052CC08
 * Callers:
 *     sub_14052CA64 @ 0x14052CA64 (sub_14052CA64.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall sub_14052CC08(char a1, char a2))(unsigned __int16 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      switch ( a2 )
      {
        case 1:
          return sub_140372D00;
        case 2:
          return sub_140372D10;
        case 4:
          return sub_140372900;
      }
    }
  }
  else
  {
    switch ( a2 )
    {
      case 1:
        return (__int64 (__fastcall *)(unsigned __int16, unsigned int))sub_140372B60;
      case 2:
        return (__int64 (__fastcall *)(unsigned __int16, unsigned int))sub_140372B90;
      case 4:
        return (__int64 (__fastcall *)(unsigned __int16, unsigned int))sub_140372B70;
    }
  }
  return (__int64 (__fastcall *)(unsigned __int16, unsigned int))v2;
}
