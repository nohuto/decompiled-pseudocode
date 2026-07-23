/*
 * XREFs of sub_14052CB98 @ 0x14052CB98
 * Callers:
 *     sub_14052CA64 @ 0x14052CA64 (sub_14052CA64.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall sub_14052CB98(char a1, char a2))(unsigned __int16 a1)
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
          return sub_140372CE0;
        case 2:
          return sub_140372CF0;
        case 4:
          return (__int64 (__fastcall *)(unsigned __int16))sub_1403728E0;
      }
    }
  }
  else
  {
    switch ( a2 )
    {
      case 1:
        return (__int64 (__fastcall *)(unsigned __int16))sub_1402F6EC0;
      case 2:
        return (__int64 (__fastcall *)(unsigned __int16))ExQueryDepthSList;
      case 4:
        return (__int64 (__fastcall *)(unsigned __int16))sub_140372B50;
    }
  }
  return (__int64 (__fastcall *)(unsigned __int16))v2;
}
