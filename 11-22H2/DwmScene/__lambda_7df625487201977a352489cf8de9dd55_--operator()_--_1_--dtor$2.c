/*
 * XREFs of __lambda_7df625487201977a352489cf8de9dd55_::operator()_::_1_::dtor$2 @ 0x1800E7F78
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x18001249C (--1-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall _lambda_7df625487201977a352489cf8de9dd55_::operator()_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::wstring::~wstring();
  }
  return result;
}
