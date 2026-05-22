/*
 * XREFs of ?_Do_digits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAHHH@Z @ 0x1800419D8
 * Callers:
 *     ?_DecimalDigits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x1800419B0 (-_DecimalDigits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180042EA8 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_digits(
        __int64 a1,
        int a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  int v6; // ecx
  unsigned __int16 v7; // ax
  int v9; // ecx

  *(_DWORD *)(a1 + 116) = 0;
  v3 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v6 = *(unsigned __int16 *)(a1 + 120);
      v7 = v6 - 48;
      if ( a2 == 8 )
      {
        if ( v7 > 7u )
          return v3;
      }
      else if ( v7 > 9u )
      {
        if ( a2 != 16 )
          return v3;
        if ( (unsigned __int16)(v6 - 97) > 5u )
        {
          if ( (unsigned __int16)(v6 - 65) > 5u )
            return v3;
          v9 = v6 - 55;
        }
        else
        {
          v9 = v6 - 87;
        }
        goto LABEL_9;
      }
      v9 = v6 - 48;
LABEL_9:
      if ( v9 != -1 )
      {
        *(_DWORD *)(a1 + 116) = v9 + *(_DWORD *)(a1 + 116) * a2;
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
        if ( --v3 )
          continue;
      }
      return v3;
    }
  }
  return v3;
}
