/*
 * XREFs of ??0?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAA@AEBV?$regex_traits@G@1@PEBG1W4syntax_option_type@regex_constants@1@@Z @ 0x18007D3BC
 * Callers:
 *     ??$?0U?$char_traits@G@std@@V?$allocator@G@1@@?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@W4syntax_option_type@regex_constants@1@@Z @ 0x18007D000 (--$-0U-$char_traits@G@std@@V-$allocator@G@1@@-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@AE.c)
 * Callees:
 *     ?_Trans@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18004348C (-_Trans@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?_Trim@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K@Z @ 0x18007D4DC (-_Trim@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  v6 = (_QWORD *)(a1 + 32);
  v6[1] = 0LL;
  *v6 = 0LL;
  v6[2] = 0LL;
  v6[3] = 0LL;
  std::vector<bool>::_Trim(v6, 0LL);
  v7 = operator new(0x30uLL);
  if ( v7 )
  {
    v7[1] = 20LL;
    *v7 = &std::_Root_node::`vftable';
    v7[2] = 0LL;
    v7[3] = 0LL;
    *(_QWORD *)((char *)v7 + 36) = 0LL;
    *((_DWORD *)v7 + 11) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)(a1 + 64) = v7;
  *(_QWORD *)(a1 + 72) = v7;
  *(_DWORD *)(a1 + 80) = 256;
  *(_DWORD *)(a1 + 96) = 256;
  *(_QWORD *)(a1 + 88) = a2;
  *(_DWORD *)(a1 + 100) = 4;
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = 256;
  *(_DWORD *)(a1 + 128) = 142040571;
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Trans((unsigned __int16 **)a1);
  return a1;
}
