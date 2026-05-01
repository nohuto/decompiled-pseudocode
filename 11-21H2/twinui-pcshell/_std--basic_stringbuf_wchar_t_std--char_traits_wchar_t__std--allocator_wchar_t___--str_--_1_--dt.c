/*
 * XREFs of _std::basic_stringbuf_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::str_::_1_::dtor$0 @ 0x180605267
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x18041FD48 (--1-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::basic_stringbuf_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::str_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::wstring::~wstring(*(_QWORD *)(a2 + 72));
  }
  return result;
}
