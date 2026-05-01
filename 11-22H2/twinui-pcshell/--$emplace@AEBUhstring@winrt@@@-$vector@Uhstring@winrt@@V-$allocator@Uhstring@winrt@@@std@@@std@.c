/*
 * XREFs of ??$emplace@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x1806F7DCC
 * Callers:
 *     ?InsertAt@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x1806FB130 (-InsertAt@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstri.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x1806F78EC (--$_Emplace_reallocate@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@.c)
 *     ??$_Move_backward_unchecked@PEAUhstring@winrt@@PEAU12@@std@@YAPEAUhstring@winrt@@PEAU12@00@Z @ 0x1806F7A28 (--$_Move_backward_unchecked@PEAUhstring@winrt@@PEAU12@@std@@YAPEAUhstring@winrt@@PEAU12@00@Z.c)
 */

struct winrt::impl::hstring_header *__fastcall std::vector<winrt::hstring>::emplace<winrt::hstring const &>(
        __int64 *a1,
        struct winrt::impl::hstring_header *a2,
        volatile signed __int32 **a3,
        winrt::impl **a4)
{
  volatile signed __int32 **v4; // r14
  winrt::impl *v8; // rcx
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v12[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = (volatile signed __int32 **)a1[1];
  if ( v4 == (volatile signed __int32 **)a1[2] )
  {
    *(_QWORD *)a2 = std::vector<winrt::hstring>::_Emplace_reallocate<winrt::hstring const &>(a1, (__int64)a3, a4);
  }
  else
  {
    v8 = *a4;
    if ( a3 == v4 )
    {
      *v4 = (volatile signed __int32 *)winrt::impl::duplicate_hstring(v8, a2, (unsigned int)a3);
      a1[1] += 8LL;
    }
    else
    {
      v12[0] = (volatile signed __int32 *)winrt::impl::duplicate_hstring(v8, a2, (unsigned int)a3);
      v9 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = v9;
      a1[1] += 8LL;
      std::_Move_backward_unchecked<winrt::hstring *,winrt::hstring *>(a3, v4 - 1, v4);
      if ( a3 != v12 )
      {
        v10 = v12[0];
        v12[0] = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
        winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
        *a3 = v10;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(v12);
    }
    *(_QWORD *)a2 = a3;
  }
  return a2;
}
