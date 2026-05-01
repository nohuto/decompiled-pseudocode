/*
 * XREFs of std::_Push_heap_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070AF48
 * Callers:
 *     std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070AE10 (std--_Pop_heap_hole_by_index_RemoteSystemData--RemoteSystem___RemoteSystemData--RemoteSystem__la.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall std::_Push_heap_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rdi
  __int64 v8; // r15
  __int64 *v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 result; // rax

  v6 = a2;
  if ( a3 < a2 )
  {
    do
    {
      v8 = (v6 - 1) >> 1;
      v9 = (__int64 *)(a1 + 32 * v8);
      if ( v9[2] >= (unsigned __int64)a4[2] )
        break;
      v10 = a1 + 32 * v6;
      if ( (__int64 *)v10 != v9 )
      {
        v11 = *v9;
        *v9 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v10);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v10);
        *(_QWORD *)v10 = v11;
      }
      *(_DWORD *)(v10 + 8) = *((_DWORD *)v9 + 2);
      *(_QWORD *)(v10 + 16) = v9[2];
      *(_WORD *)(v10 + 24) = *((_WORD *)v9 + 12);
      v6 = v8;
    }
    while ( a3 < v8 );
  }
  v12 = a1 + 32 * v6;
  if ( (__int64 *)v12 != a4 )
  {
    v13 = *a4;
    *a4 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v12);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v12);
    *(_QWORD *)v12 = v13;
  }
  *(_DWORD *)(v12 + 8) = *((_DWORD *)a4 + 2);
  *(_QWORD *)(v12 + 16) = a4[2];
  result = *((unsigned __int16 *)a4 + 12);
  *(_WORD *)(v12 + 24) = result;
  return result;
}
