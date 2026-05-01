/*
 * XREFs of ??1?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x18041FD48
 * Callers:
 *     _XamlSnapAssistViewHost::Show_::_1_::dtor$4 @ 0x180603C22 (_XamlSnapAssistViewHost--Show_--_1_--dtor$4.c)
 *     _std::basic_stringbuf_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::str_::_1_::dtor$0 @ 0x180605267 (_std--basic_stringbuf_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--str_--_1_--dt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, 2 * v1 + 2);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
