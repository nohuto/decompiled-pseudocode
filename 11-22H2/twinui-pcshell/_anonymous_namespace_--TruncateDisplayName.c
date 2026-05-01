/*
 * XREFs of _anonymous_namespace_::TruncateDisplayName @ 0x1806AE364
 * Callers:
 *     _anonymous_namespace_::GetPromptText @ 0x1806AD304 (_anonymous_namespace_--GetPromptText.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@G@Z @ 0x1806AAA44 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1806AAA44.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall anonymous_namespace_::TruncateDisplayName(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  void *v7[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v8[6]; // [rsp+38h] [rbp-30h] BYREF

  v7[0] = a1;
  if ( *(_QWORD *)(a2 + 8) <= 0x19uLL )
  {
    std::wstring::wstring(a1, (void **)a2);
  }
  else
  {
    v4 = 22LL;
    if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)a2 + 44LL) + 9216) <= 0x3FFu )
      v4 = 21LL;
    v7[0] = *(void **)a2;
    v7[1] = (void *)v4;
    v5 = std::wstring::wstring(v8, v7);
    std::operator+<unsigned short>(a1, (__int64)v5);
    std::wstring::_Tidy_deallocate((__int64)v8);
  }
  return a1;
}
