/*
 * XREFs of ??$swap@URemoteSystem@RemoteSystemData@@$0A@@std@@YAXAEAURemoteSystem@RemoteSystemData@@0@Z @ 0x18070DDCC
 * Callers:
 *     std::_Med3_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070AC20 (std--_Med3_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 *     std::_Partition_by_median_guess_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070AC90 (std--_Partition_by_median_guess_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f4666.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::swap<RemoteSystemData::RemoteSystem,0>(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // r12
  __int64 v5; // r14
  __int16 v6; // r15
  int v7; // ebp
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int16 v12; // [rsp+38h] [rbp-20h]

  v2 = *(volatile signed __int32 **)a1;
  *(_QWORD *)a1 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_WORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 8);
  v11 = v5;
  v12 = v6;
  v9 = v2;
  v10 = v7;
  if ( a1 != a2 )
  {
    v8 = *(volatile signed __int32 **)a2;
    *(_QWORD *)a2 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1);
    *(_QWORD *)a1 = v8;
  }
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 24);
  if ( (volatile signed __int32 **)a2 != &v9 )
  {
    v9 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2);
    *(_QWORD *)a2 = v2;
  }
  *(_DWORD *)(a2 + 8) = v7;
  *(_QWORD *)(a2 + 16) = v5;
  *(_WORD *)(a2 + 24) = v6;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
}
