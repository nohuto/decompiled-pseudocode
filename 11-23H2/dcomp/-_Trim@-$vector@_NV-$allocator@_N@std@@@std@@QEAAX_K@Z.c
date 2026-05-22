/*
 * XREFs of ?_Trim@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K@Z @ 0x18007D4DC
 * Callers:
 *     ??0?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAA@AEBV?$regex_traits@G@1@PEBG1W4syntax_option_type@regex_constants@1@@Z @ 0x18007D3BC (--0-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAA@AEBV-$regex_traits@G@1@PEBG1W4syntax_option_.c)
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x180150AAC (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 * Callees:
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<bool>::_Trim(const char *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  int v5; // edx
  __int64 v6; // rcx

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  result = *(_QWORD *)a1;
  v4 = (a2 + 31) >> 5;
  if ( v4 < (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 2 )
  {
    v6 = result + 4 * v4;
    if ( v6 != *((_QWORD *)a1 + 1) )
      *((_QWORD *)a1 + 1) = v6;
  }
  *((_QWORD *)a1 + 3) = a2;
  v5 = a2 & 0x1F;
  if ( v5 )
    *(_DWORD *)(result + 4 * v4 - 4) &= (1 << v5) - 1;
  return result;
}
