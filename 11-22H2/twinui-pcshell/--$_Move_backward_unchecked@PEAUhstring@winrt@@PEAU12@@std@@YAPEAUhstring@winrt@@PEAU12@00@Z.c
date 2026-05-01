/*
 * XREFs of ??$_Move_backward_unchecked@PEAUhstring@winrt@@PEAU12@@std@@YAPEAUhstring@winrt@@PEAU12@00@Z @ 0x1806F7A28
 * Callers:
 *     ??$emplace@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x1806F7DCC (--$emplace@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

volatile signed __int32 **__fastcall std::_Move_backward_unchecked<winrt::hstring *,winrt::hstring *>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2,
        volatile signed __int32 **a3)
{
  volatile signed __int32 **v5; // rsi
  volatile signed __int32 **v6; // r14
  volatile signed __int32 *v7; // rbx

  if ( a2 != a1 )
  {
    v5 = a2 - 1;
    do
    {
      --a3;
      v6 = v5;
      if ( a3 != v5 )
      {
        v7 = *v5;
        *v5 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
        winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
        *a3 = v7;
      }
      --v5;
    }
    while ( v6 != a1 );
  }
  return a3;
}
