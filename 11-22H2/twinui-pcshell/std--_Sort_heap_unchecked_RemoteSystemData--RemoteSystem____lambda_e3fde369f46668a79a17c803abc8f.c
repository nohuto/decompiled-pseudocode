/*
 * XREFs of std::_Sort_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070B03C
 * Callers:
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070B124 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070AE10 (std--_Pop_heap_hole_by_index_RemoteSystemData--RemoteSystem___RemoteSystemData--RemoteSystem__la.c)
 */

void __fastcall std::_Sort_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  volatile signed __int32 *v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]
  __int16 v10; // [rsp+48h] [rbp-10h]

  if ( (__int64)((a2 - a1) & 0xFFFFFFFFFFFFFFE0uLL) >= 64 )
  {
    v3 = a2 - 32;
    do
    {
      v4 = *(volatile signed __int32 **)v3;
      *(_QWORD *)v3 = 0LL;
      v7 = v4;
      v8 = *(_DWORD *)(v3 + 8);
      v9 = *(_QWORD *)(v3 + 16);
      v10 = *(_WORD *)(v3 + 24);
      if ( v3 != a1 )
      {
        v5 = *(_QWORD *)a1;
        *(_QWORD *)a1 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v3);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v3);
        *(_QWORD *)v3 = v5;
      }
      *(_DWORD *)(v3 + 8) = *(_DWORD *)(a1 + 8);
      v6 = v3 - a1;
      *(_QWORD *)(v3 + 16) = *(_QWORD *)(a1 + 16);
      *(_WORD *)(v3 + 24) = *(_WORD *)(a1 + 24);
      std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
        a1,
        0LL,
        (v3 - a1) >> 5,
        (__int64)&v7);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
      v3 -= 32LL;
    }
    while ( (__int64)(v6 & 0xFFFFFFFFFFFFFFE0uLL) >= 64 );
  }
}
