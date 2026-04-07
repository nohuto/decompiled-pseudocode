/*
 * XREFs of _std::basic_stringbuf_char_std::char_traits_char__std::allocator_char___::str_::_1_::dtor$0 @ 0x180065947
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800F3350 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::basic_stringbuf_char_std::char_traits_char__std::allocator_char___::str_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::string::~string(*(_QWORD *)(a2 + 72));
  }
  return result;
}
