/*
 * XREFs of ?Append@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1806F9DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x1806F78EC (--$_Emplace_reallocate@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::hstring>>::Append(
        __int64 a1,
        winrt::impl *a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  __int64 *v4; // rbx
  struct winrt::impl::hstring_header **v5; // rdi
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  winrt::impl *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  try
  {
    v3 = (a1 - 16) & -(__int64)(a1 != 0);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 40));
    v4 = (__int64 *)(v3 & -(__int64)(v3 != -40));
    v5 = (struct winrt::impl::hstring_header **)v4[7];
    if ( v5 == (struct winrt::impl::hstring_header **)v4[8] )
    {
      std::vector<winrt::hstring>::_Emplace_reallocate<winrt::hstring const &>(v4 + 6, v4[7], &v8);
    }
    else
    {
      *v5 = winrt::impl::duplicate_hstring(v8, a2, a3);
      v4[7] += 8LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
