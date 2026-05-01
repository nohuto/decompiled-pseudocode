/*
 * XREFs of std::_Insertion_sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070A904
 * Callers:
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070B124 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 *__fastcall std::_Insertion_sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rdi
  volatile signed __int32 *v5; // rax
  volatile signed __int32 **v6; // r14
  unsigned __int64 v7; // r12
  __int16 v8; // r13
  int v9; // ebx
  __int64 *v10; // r15
  __int64 *v11; // r14
  __int64 *v12; // rdi
  __int64 *v13; // r13
  __int64 v14; // rbx
  __int16 v15; // ax
  __int64 *i; // r15
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v19; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  __int16 v22; // [rsp+38h] [rbp-40h]
  int v23; // [rsp+80h] [rbp+8h]
  volatile signed __int32 *v24; // [rsp+88h] [rbp+10h]
  __int16 v25; // [rsp+90h] [rbp+18h]

  if ( (__int64 *)a1 != a2 )
  {
    v4 = (__int64 *)(a1 + 32);
    while ( v4 != a2 )
    {
      v5 = (volatile signed __int32 *)*v4;
      v6 = (volatile signed __int32 **)v4;
      *v4 = 0LL;
      v7 = v4[2];
      v8 = *((_WORD *)v4 + 12);
      v9 = *((_DWORD *)v4 + 2);
      v24 = v5;
      v19 = v5;
      v23 = v9;
      v20 = v9;
      v21 = v7;
      v25 = v8;
      v22 = v8;
      if ( v7 >= *(_QWORD *)(a1 + 16) )
      {
        for ( i = v4; ; v6 = (volatile signed __int32 **)i )
        {
          i -= 4;
          if ( v7 >= i[2] )
            break;
          if ( v6 != (volatile signed __int32 **)i )
          {
            v17 = (volatile signed __int32 *)*i;
            *i = 0LL;
            winrt::handle_type<winrt::impl::hstring_traits>::close(v6);
            winrt::handle_type<winrt::impl::hstring_traits>::close(v6);
            *v6 = v17;
          }
          *((_DWORD *)v6 + 2) = *((_DWORD *)i + 2);
          v6[2] = (volatile signed __int32 *)i[2];
          *((_WORD *)v6 + 12) = *((_WORD *)i + 12);
        }
        if ( v6 != &v19 )
        {
          v19 = 0LL;
          winrt::handle_type<winrt::impl::hstring_traits>::close(v6);
          winrt::handle_type<winrt::impl::hstring_traits>::close(v6);
          *v6 = v24;
        }
        v4 += 4;
        *((_DWORD *)v6 + 2) = v23;
        v6[2] = (volatile signed __int32 *)v7;
        *((_WORD *)v6 + 12) = v8;
      }
      else
      {
        v10 = v4 + 4;
        v11 = v4 + 4;
        if ( v4 != (__int64 *)a1 )
        {
          v12 = v4 - 4;
          do
          {
            v11 -= 4;
            v13 = v12;
            if ( v11 != v12 )
            {
              v14 = *v12;
              *v12 = 0LL;
              winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v11);
              winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v11);
              *v11 = v14;
            }
            *((_DWORD *)v11 + 2) = *((_DWORD *)v12 + 2);
            v11[2] = v12[2];
            v15 = *((_WORD *)v12 + 12);
            v12 -= 4;
            *((_WORD *)v11 + 12) = v15;
          }
          while ( v13 != (__int64 *)a1 );
          v9 = v23;
          v8 = v25;
        }
        if ( (volatile signed __int32 **)a1 != &v19 )
        {
          v19 = 0LL;
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1);
          *(_QWORD *)a1 = v24;
        }
        *(_DWORD *)(a1 + 8) = v9;
        v4 = v10;
        *(_QWORD *)(a1 + 16) = v7;
        *(_WORD *)(a1 + 24) = v8;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v19);
    }
  }
  return a2;
}
