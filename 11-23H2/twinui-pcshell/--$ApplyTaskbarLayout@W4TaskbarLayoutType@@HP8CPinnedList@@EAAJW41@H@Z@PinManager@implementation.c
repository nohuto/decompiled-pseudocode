/*
 * XREFs of ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@H@Z1H@Z @ 0x180699FDC
 * Callers:
 *     ?ApplyReorderTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x18069F600 (-ApplyReorderTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4Taskba.c)
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
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_832c05d38d5c282b3aadaebeafbaeeca___ @ 0x18024F0C8 (_anonymous_namespace_--RunSynchronousInSTA__lambda_832c05d38d5c282b3aadaebeafbaeeca___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<enum TaskbarLayoutType,int,long (CPinnedList::*)(enum TaskbarLayoutType,int)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5)
{
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // ebx
  LPVOID pv; // [rsp+28h] [rbp-51h] BYREF
  LPVOID v16; // [rsp+30h] [rbp-49h] BYREF
  LPVOID v17; // [rsp+38h] [rbp-41h] BYREF
  __int128 v18; // [rsp+48h] [rbp-31h] BYREF
  char *v19; // [rsp+58h] [rbp-21h]
  unsigned int *v20; // [rsp+60h] [rbp-19h]
  LPVOID v21; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v23[2]; // [rsp+78h] [rbp-1h] BYREF
  __int128 v24; // [rsp+98h] [rbp+1Fh]
  LPVOID v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+F0h] [rbp+77h] BYREF

  v26 = a4;
  v21 = 0LL;
  v7 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v21);
  pv = (LPVOID)v7;
  if ( v7 )
    _InterlockedIncrement(v7 + 332);
  tip2::details::shared_data<0,0,1>::begin_update((__int64)(v7 + 2));
  *((_DWORD *)v7 + 66) = 7;
  tip2::details::shared_data<0,0,0>::end_update((__int64)(v7 + 2), v8);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&pv);
  if ( pv )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)pv);
  v9 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v21);
  v16 = (LPVOID)v9;
  if ( v9 )
    _InterlockedIncrement(v9 + 332);
  tip2::details::shared_data<0,0,1>::begin_update((__int64)(v9 + 2));
  *((_DWORD *)v9 + 327) = 1;
  tip2::details::shared_data<0,0,0>::end_update((__int64)(v9 + 2), v10);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&v16);
  if ( v16 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v16);
  v11 = (volatile signed __int32 *)*tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(&v21);
  v17 = (LPVOID)v11;
  if ( v11 )
    _InterlockedIncrement(v11 + 332);
  tip2::details::shared_data<0,0,1>::begin_update((__int64)(v11 + 2));
  *((_DWORD *)v11 + 329) = 12;
  tip2::details::shared_data<0,0,0>::end_update((__int64)(v11 + 2), v12);
  wil::com_ptr_t<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::reset(&v17);
  if ( v17 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v17);
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v25 = 0LL;
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
    (__int64 *)&v21,
    (struct wil::details::IFailureCallback *)v23);
  winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller(a1, (__int64)&v21);
  v22 = 0;
  *(_QWORD *)&v18 = a3;
  *((_QWORD *)&v18 + 1) = &v26;
  v19 = &a5;
  v20 = &v22;
  anonymous_namespace_::RunSynchronousInSTA__lambda_832c05d38d5c282b3aadaebeafbaeeca___(&v18);
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete((__int64 *)&v21);
  v13 = v22;
  if ( v25 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v25);
  if ( (_DWORD)v24 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)((char *)v23 + 8));
  if ( v21 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v21);
  return v13;
}
