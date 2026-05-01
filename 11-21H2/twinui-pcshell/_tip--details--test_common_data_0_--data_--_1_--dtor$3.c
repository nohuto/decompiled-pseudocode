/*
 * XREFs of _tip::details::test_common_data_0_::data_::_1_::dtor$3 @ 0x1802188E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::details::test_common_data_0_::data_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~2u;
    return std::ios::~ios<char,std::char_traits<char>>(a2 + 712);
  }
  return result;
}
