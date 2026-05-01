/*
 * XREFs of ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z1@Z @ 0x18008618C
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180085B30 (-ApplyInPlaceTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4Taskba.c)
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
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_de2d726059b44d27a392c508ba387a14___ @ 0x18024F204 (_anonymous_namespace_--RunSynchronousInSTA__lambda_de2d726059b44d27a392c508ba387a14___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<enum TaskbarLayoutType,long (CPinnedList::*)(enum TaskbarLayoutType)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  unsigned int v9; // ebx
  LPVOID v11; // [rsp+28h] [rbp-49h] BYREF
  LPVOID v12; // [rsp+30h] [rbp-41h] BYREF
  LPVOID v13[2]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-29h] BYREF
  LPVOID v15; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v16; // [rsp+70h] [rbp-1h] BYREF
  _OWORD v17[2]; // [rsp+78h] [rbp+7h] BYREF
  __int128 v18; // [rsp+98h] [rbp+27h]
  LPVOID pv; // [rsp+A8h] [rbp+37h]
  int v20; // [rsp+F0h] [rbp+7Fh] BYREF

  v20 = a4;
  v15 = 0LL;
  v6 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v15);
  v11 = (LPVOID)v6;
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 1328));
  tip2::details::shared_data<0,0,1>::begin_update(v6 + 8);
  *(_DWORD *)(v6 + 264) = 6;
  tip2::details::shared_data<0,0,0>::end_update(v6 + 8);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&v11);
  if ( v11 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release(v11);
  v7 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v15);
  v12 = (LPVOID)v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 1328));
  tip2::details::shared_data<0,0,1>::begin_update(v7 + 8);
  *(_DWORD *)(v7 + 1308) = 1;
  tip2::details::shared_data<0,0,0>::end_update(v7 + 8);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&v12);
  if ( v12 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release(v12);
  v8 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v15);
  v13[0] = (LPVOID)v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 1328));
  tip2::details::shared_data<0,0,1>::begin_update(v8 + 8);
  *(_DWORD *)(v8 + 1316) = 12;
  tip2::details::shared_data<0,0,0>::end_update(v8 + 8);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(v13);
  if ( v13[0] )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release(v13[0]);
  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  pv = 0LL;
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
    (__int64 *)&v15,
    (struct wil::details::IFailureCallback *)v17);
  winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller(a1, (__int64)&v15);
  v16 = 0;
  v14[0] = a3;
  v14[1] = &v20;
  v14[2] = &v16;
  anonymous_namespace_::RunSynchronousInSTA__lambda_de2d726059b44d27a392c508ba387a14___(v14);
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete((__int64 *)&v15);
  v9 = v16;
  if ( pv )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release(pv);
  if ( (_DWORD)v18 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)((char *)v17 + 8));
  if ( v15 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release(v15);
  return v9;
}
