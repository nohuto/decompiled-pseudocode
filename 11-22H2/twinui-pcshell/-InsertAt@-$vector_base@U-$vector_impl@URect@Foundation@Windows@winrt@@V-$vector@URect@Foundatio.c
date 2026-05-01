/*
 * XREFs of ?InsertAt@?$vector_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@@winrt@@QEAAXIAEBURect@Foundation@Windows@2@@Z @ 0x1805243A0
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@@Z @ 0x180524340 (-InsertAt@-$produce@U-$vector_impl@URect@Foundation@Windows@winrt@@V-$vector@URect@Foundation@Wi.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBURect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAURect@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x180520634 (--$_Emplace_reallocate@AEBURect@Foundation@Windows@winrt@@@-$vector@URect@Foundation@Windows@win.c)
 */

char *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect>::InsertAt(
        volatile signed __int32 *a1,
        unsigned int a2,
        __m128i *a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v6; // rcx
  char *result; // rax
  __int64 v8; // rdx
  __m128i *v9; // rbx
  __m128i v10; // xmm6
  const void *v11; // rdx
  _BYTE pExceptionObject[32]; // [rsp+20h] [rbp-38h] BYREF

  v3 = (__int64)(a1 + 2);
  v4 = 48LL;
  if ( !a1 )
    v3 = 48LL;
  if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)(v3 + 8) - *(_QWORD *)v3) >> 4) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  if ( a1 )
  {
    v6 = (__int64)(a1 + 2);
    v4 = (__int64)(a1 + 2);
  }
  else
  {
    v6 = 48LL;
  }
  result = *(char **)(v6 + 8);
  v8 = 16LL * a2;
  v9 = (__m128i *)(v8 + *(_QWORD *)v4);
  if ( result == *(char **)(v6 + 16) )
    return std::vector<winrt::Windows::Foundation::Rect>::_Emplace_reallocate<winrt::Windows::Foundation::Rect const &>(
             (const void **)v6,
             (_BYTE *)(v8 + *(_QWORD *)v4),
             a3);
  if ( v9 == (__m128i *)result )
  {
    *(__m128i *)result = *a3;
    *(_QWORD *)(v6 + 8) += 16LL;
  }
  else
  {
    v10 = _mm_loadu_si128(a3);
    v11 = (const void *)(v8 + *(_QWORD *)v4);
    *(_OWORD *)result = *((_OWORD *)result - 1);
    *(_QWORD *)(v6 + 8) += 16LL;
    result = (char *)memmove_0(&v9[1], v11, result - (char *)v9 - 16);
    *v9 = v10;
  }
  return result;
}
