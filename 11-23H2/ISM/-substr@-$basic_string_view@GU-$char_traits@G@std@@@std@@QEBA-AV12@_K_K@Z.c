/*
 * XREFs of ?substr@?$basic_string_view@GU?$char_traits@G@std@@@std@@QEBA?AV12@_K_K@Z @ 0x18018D9B0
 * Callers:
 *     ?StringToHstringVectorParser@@YA?AV?$com_ptr_t@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEBG@Z @ 0x18018BC50 (-StringToHstringVectorParser@@YA-AV-$com_ptr_t@U-$IVector@PEAUHSTRING__@@@Collections@Foundation.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::basic_string_view<unsigned short>::substr(
        __int64 *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *result; // rax

  v4 = a1[1];
  if ( v4 < a3 )
  {
    std::_Xout_of_range("invalid string_view position");
    __debugbreak();
  }
  v5 = v4 - a3;
  if ( v5 < a4 )
    a4 = v5;
  v6 = *a1;
  a2[1] = a4;
  v7 = v6 + 2 * a3;
  result = a2;
  *a2 = v7;
  return result;
}
