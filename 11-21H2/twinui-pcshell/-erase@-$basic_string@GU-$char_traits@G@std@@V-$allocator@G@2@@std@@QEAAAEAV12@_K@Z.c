/*
 * XREFs of ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x180576D3C
 * Callers:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x1805758AC (--$AdaptFixedSizeToAllocatedResult@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180584CCC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180587748 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 *     ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x1805BBF78 (--$getline@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@YAAEAV-$basic_istream@GU-$char_traits@G.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::erase(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax

  if ( a1[2] < a2 )
  {
    std::_Xout_of_range("invalid string position");
    __debugbreak();
  }
  v2 = a1;
  if ( a1[3] >= 8uLL )
    v2 = (_QWORD *)*a1;
  a1[2] = a2;
  *((_WORD *)v2 + a2) = 0;
  return a1;
}
