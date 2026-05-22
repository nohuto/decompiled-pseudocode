/*
 * XREFs of ?_Add_str_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042C00
 * Callers:
 *     ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18004184C (-_Add_char@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_str_node(
        __int64 a1)
{
  _QWORD *v2; // rax

  v2 = operator new(0x30uLL);
  if ( v2 )
  {
    v2[1] = 6LL;
    *v2 = &std::_Node_str<unsigned short>::`vftable';
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
    v2[5] = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v2);
}
