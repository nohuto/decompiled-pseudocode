/*
 * XREFs of _lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator() @ 0x18070EFFC
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180717EE4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070B124 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v5; // r8
  __int16 v6; // dx
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  volatile signed __int32 *v12; // [rsp+28h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h]
  __int16 v14; // [rsp+40h] [rbp-10h]

  std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
    *(_QWORD *)a3,
    *(__int64 **)(a3 + 8),
    (__int64)(*(_QWORD *)(a3 + 8) - *(_QWORD *)a3) >> 5,
    a2);
  v5 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v6 = -1;
  v14 = -1;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = *(_QWORD *)a3;
  if ( v8 == v7 )
  {
    v9 = *((_QWORD *)&v13 + 1);
    v10 = v13;
  }
  else
  {
    do
    {
      winrt::hstring::operator=(&v12, (winrt::impl **)v8, (unsigned int)v5);
      v9 = *(_QWORD *)(v8 + 16);
      *((_QWORD *)&v13 + 1) = v9;
      v10 = v13;
      if ( *(_DWORD *)(v8 + 8) != 100 )
        v10 = *(_DWORD *)(v8 + 8);
      LODWORD(v13) = v10;
      v8 += 32LL;
    }
    while ( v8 != v7 );
    v6 = v14;
    v5 = v12;
  }
  v12 = 0LL;
  *(_QWORD *)a2 = v5;
  *(_DWORD *)(a2 + 8) = v10;
  *(_QWORD *)(a2 + 16) = v9;
  *(_WORD *)(a2 + 24) = v6;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  return a2;
}
