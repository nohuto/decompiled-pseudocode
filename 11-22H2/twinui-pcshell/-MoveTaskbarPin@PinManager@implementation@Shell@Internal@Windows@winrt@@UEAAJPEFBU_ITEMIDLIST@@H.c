/*
 * XREFs of ?MoveTaskbarPin@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@HW4PINNEDLISTMODIFYCALLER@@@Z @ 0x180250B60
 * Callers:
 *     <none>
 * Callees:
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x180086128 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_6f980fbbc6752bcaca442c74782693a9___ @ 0x18024EF7C (_anonymous_namespace_--RunSynchronousInSTA__lambda_6f980fbbc6752bcaca442c74782693a9___.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069E7E0 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069E81C (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069E850 (--1-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@1@XZ @ 0x18069F0B0 (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::MoveTaskbarPin(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4)
{
  int v5; // ebx
  unsigned int v6; // ebx
  _BYTE v7[16]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v8; // [rsp+30h] [rbp-88h] BYREF
  int *v9; // [rsp+40h] [rbp-78h]
  unsigned int *v10; // [rsp+48h] [rbp-70h]
  _OWORD *v11; // [rsp+50h] [rbp-68h]
  unsigned int v12; // [rsp+60h] [rbp-58h] BYREF
  __int64 v13; // [rsp+68h] [rbp-50h] BYREF
  _OWORD v14[3]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v17; // [rsp+C8h] [rbp+10h] BYREF
  int v18; // [rsp+D0h] [rbp+18h] BYREF
  int v19; // [rsp+D8h] [rbp+20h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  if ( a2 )
  {
    v13 = 0LL;
    *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                             &v13,
                             v7)
              + 264LL) = 10;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
    *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                             &v13,
                             v7)
              + 1308LL) = 7;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
    v5 = v19;
    *(_DWORD *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                             &v13,
                             v7)
              + 1316LL) = v5;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
    memset(v14, 0, sizeof(v14));
    v15 = 0LL;
    tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
      &v13,
      (struct wil::details::IFailureCallback *)v14);
    v12 = 0;
    *(_QWORD *)&v8 = &v17;
    *((_QWORD *)&v8 + 1) = &v18;
    v9 = &v19;
    v10 = &v12;
    v11 = v14;
    anonymous_namespace_::RunSynchronousInSTA__lambda_6f980fbbc6752bcaca442c74782693a9___(&v8);
    tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete(&v13);
    v6 = v12;
    tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v14);
    tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(&v13);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x418,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
