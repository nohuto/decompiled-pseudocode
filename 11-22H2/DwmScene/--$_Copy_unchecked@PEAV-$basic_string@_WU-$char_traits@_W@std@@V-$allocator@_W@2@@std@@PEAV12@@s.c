/*
 * XREFs of ??$_Copy_unchecked@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEAV10@00@Z @ 0x1800588F8
 * Callers:
 *     ??$_Assign_range@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18005872C (--$_Assign_range@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$vector@V.c)
 * Callees:
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800320AC (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

char *__fastcall std::_Copy_unchecked<std::wstring *,std::wstring *>(char *a1, char *a2, char *a3)
{
  char *i; // rdi

  for ( i = a1; i != a2; i += 32 )
  {
    std::wstring::operator=(a3, i);
    a3 += 32;
  }
  return a3;
}
