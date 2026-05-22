/*
 * XREFs of ?_Do_ffn@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NG@Z @ 0x180042FA4
 * Callers:
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180042EA8 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x1800430C4 (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ffn(
        __int64 a1,
        __int16 a2)
{
  switch ( a2 )
  {
    case 'f':
      *(_DWORD *)(a1 + 116) = 12;
      break;
    case 'n':
      *(_DWORD *)(a1 + 116) = 10;
      break;
    case 'r':
      *(_DWORD *)(a1 + 116) = 13;
      break;
    case 't':
      *(_DWORD *)(a1 + 116) = 9;
      break;
    case 'v':
      *(_DWORD *)(a1 + 116) = 11;
      break;
    default:
      return 0;
  }
  return 1;
}
