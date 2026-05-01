/*
 * XREFs of ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x18068BB10
 * Callers:
 *     ?MsgWindowWndProc@WindowDragInputProvider@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18068B480 (-MsgWindowWndProc@WindowDragInputProvider@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18022BC74 (--1-$test_data_control@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18022BCAC (--1-$test_watcher@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18022BCDC (--1-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@1@XZ @ 0x18022BCE8 (--C-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA-AV.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@2@XZ @ 0x18022C024 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18038CA80 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x18068B628 (-OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z.c)
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18068B7B0 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowDragInputProvider::OnWindowArrangementMessage(RTL_SRWLOCK *this, int a2, void *a3, __int64 a4)
{
  PVOID Ptr; // rcx
  signed int v8; // eax
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // rdx
  int v14; // ebx
  __int64 v15; // rdx
  unsigned int v16; // eax
  int v17[16]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  void *v19; // [rsp+80h] [rbp+20h] BYREF
  void *v20; // [rsp+90h] [rbp+30h] BYREF

  v20 = a3;
  Ptr = this[5].Ptr;
  if ( !Ptr )
    return 0LL;
  LOBYTE(v20) = 0;
  v8 = (*(__int64 (__fastcall **)(PVOID, void **))(*(_QWORD *)Ptr + 72LL))(Ptr, &v20);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  if ( (_BYTE)v20 )
    return 0LL;
  v19 = 0LL;
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::operator->(
                 (__int64)&v19,
                 (__int64 *)&v20)
            + 264) = a2;
  tip2::test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>(
    &v20,
    v9);
  tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::start_and_watch_errors(
    (volatile signed __int32 **)&v19,
    (__int64)v17);
  v10 = a2 - 833;
  if ( v10 )
  {
    if ( v10 != 1 )
    {
      v16 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC1,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
        (const char *)v16,
        v17[0]);
    }
    v11 = *(_DWORD *)(a4 + 8);
    *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::operator->(
                   (__int64)&v19,
                   (__int64 *)&v20)
              + 268) = v11;
    tip2::test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>(
      &v20,
      v12);
    if ( *(_DWORD *)(a4 + 8) == 3 )
      WindowDragInputProvider::OnArrangementReset(this, (const struct tagSHELL_WND_MGMT_SIMPLE_PAYLOAD *)(a4 + 16));
    goto LABEL_8;
  }
  v14 = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::operator->(
                 (__int64)&v19,
                 (__int64 *)&v20)
            + 268) = v14;
  tip2::test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>(
    &v20,
    v15);
  if ( *(_DWORD *)(a4 + 8) )
  {
LABEL_8:
    tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete((__int64 *)&v19);
    tip2::test_watcher<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~test_watcher<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>((__int64)v17);
    tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>(&v19);
    return 0LL;
  }
  WindowDragInputProvider::OnGetArrangementRects(this, (struct _WINDOW_ARRANGEMENT_INFO *)(a4 + 16));
  tip2::test_watcher<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~test_watcher<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>((__int64)v17);
  tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>(&v19);
  return 1LL;
}
