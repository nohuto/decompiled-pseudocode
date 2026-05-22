/*
 * XREFs of ?_Wrapped_disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180043BBC
 * Callers:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042D54 (-_Do_capture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z @ 0x1801004C8 (-_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z.c)
 *     ?_Do_assert_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAX_N@Z @ 0x180150568 (-_Do_assert_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAX_N@Z.c)
 *     ?_Do_noncapture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18015071C (-_Do_noncapture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Wrapped_disjunction(
        __int64 a1,
        __int64 a2)
{
  int *v2; // rdi
  int v3; // eax
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx

  ++*(_DWORD *)(a1 + 28);
  v2 = (int *)(a1 + 124);
  v3 = *(_DWORD *)(a1 + 128);
  if ( (v3 & 0x8000000) == 0 && *v2 == 41 )
    std::_Dwm_Xregex_error(a1, a2);
  if ( (v3 & 0x20) == 0 || *v2 != 63 )
  {
    if ( (*(_DWORD *)(a1 + 112) & 0x200) == 0 )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_capture_group(a1);
LABEL_6:
      --*(_DWORD *)(a1 + 28);
      return 1;
    }
LABEL_16:
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_noncapture_group(a1);
    goto LABEL_6;
  }
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
  v6 = *v2;
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)a1);
  switch ( v6 )
  {
    case ':':
      goto LABEL_16;
    case '!':
      LOBYTE(v7) = 1;
      break;
    case '=':
      v7 = 0LL;
      break;
    default:
      std::_Dwm_Xregex_error(v8, v7);
  }
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_assert_group(a1, v7);
  --*(_DWORD *)(a1 + 28);
  return 0;
}
