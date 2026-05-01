/*
 * XREFs of ??$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJXZ@Z @ 0x180699DEC
 * Callers:
 *     ?ApplyAppendDefaultTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x18069F500 (-ApplyAppendDefaultTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     ?ApplyPrependDefaultTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x18069F580 (-ApplyPrependDefaultTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJX.c)
 * Callees:
 *     ?CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x180084B6C (-CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV-$tip_te.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x180086128 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U1.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180086364 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180086894 (-reset@-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@.c)
 *     ?Release@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x1800868B8 (-Release@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180086920 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_50bb0220b5fa1030b541f5726b219874___ @ 0x18024EE50 (_anonymous_namespace_--RunSynchronousInSTA__lambda_50bb0220b5fa1030b541f5726b219874___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<,long (CPinnedList::*)(void)>(
        __int64 a1,
        int a2,
        __int64 a3)
{
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // ebx
  LPVOID pv; // [rsp+28h] [rbp-39h] BYREF
  LPVOID v15; // [rsp+30h] [rbp-31h] BYREF
  LPVOID v16; // [rsp+38h] [rbp-29h] BYREF
  __int128 v17; // [rsp+48h] [rbp-19h] BYREF
  LPVOID v18; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-1h] BYREF
  _OWORD v20[2]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v21; // [rsp+88h] [rbp+27h]
  LPVOID v22; // [rsp+98h] [rbp+37h]

  v18 = 0LL;
  v6 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v18);
  pv = (LPVOID)v6;
  if ( v6 )
    _InterlockedIncrement(v6 + 332);
  tip2::details::shared_data<0,0,1>::begin_update((__int64)(v6 + 2));
  *((_DWORD *)v6 + 66) = a2;
  tip2::details::shared_data<0,0,0>::end_update((__int64)(v6 + 2), v7);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&pv);
  if ( pv )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)pv);
  v8 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v18);
  v15 = (LPVOID)v8;
  if ( v8 )
    _InterlockedIncrement(v8 + 332);
  tip2::details::shared_data<0,0,1>::begin_update((__int64)(v8 + 2));
  *((_DWORD *)v8 + 327) = 1;
  tip2::details::shared_data<0,0,0>::end_update((__int64)(v8 + 2), v9);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&v15);
  if ( v15 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v15);
  v10 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v18);
  v16 = (LPVOID)v10;
  if ( v10 )
    _InterlockedIncrement(v10 + 332);
  tip2::details::shared_data<0,0,1>::begin_update((__int64)(v10 + 2));
  *((_DWORD *)v10 + 329) = 12;
  tip2::details::shared_data<0,0,0>::end_update((__int64)(v10 + 2), v11);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&v16);
  if ( v16 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v16);
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  v22 = 0LL;
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
    (__int64 *)&v18,
    (struct wil::details::IFailureCallback *)v20);
  winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller(a1, (__int64)&v18);
  v19 = 0;
  *(_QWORD *)&v17 = a3;
  *((_QWORD *)&v17 + 1) = &v19;
  anonymous_namespace_::RunSynchronousInSTA__lambda_50bb0220b5fa1030b541f5726b219874___(&v17);
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete((__int64 *)&v18);
  v12 = v19;
  if ( v22 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v22);
  if ( (_DWORD)v21 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)((char *)v20 + 8));
  if ( v18 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v18);
  return v12;
}
