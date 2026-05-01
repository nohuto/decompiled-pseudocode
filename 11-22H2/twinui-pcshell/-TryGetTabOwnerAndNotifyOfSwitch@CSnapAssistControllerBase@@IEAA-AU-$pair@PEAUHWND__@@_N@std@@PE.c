/*
 * XREFs of ?TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA?AU?$pair@PEAUHWND__@@_N@std@@PEAUHWND__@@AEBUCRect@Geometry@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x18066D25C
 * Callers:
 *     ?SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x18066BB80 (-SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180223B34 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E48 (--1-$test_data_control@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223EB0 (--1-$test_watcher@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@1@XZ @ 0x180223F70 (--C-$tip_test@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_d.c)
 *     ?Release@?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@AEAAKXZ @ 0x180223FF4 (-Release@-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1802E964C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_1802E964C.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnapAssistControllerBase::TryGetTabOwnerAndNotifyOfSwitch(
        __int64 a1,
        __int64 a2,
        HWND a3,
        RECT *a4,
        unsigned int a5)
{
  char v8; // bl
  HANDLE PropW; // rax
  HANDLE v10; // r14
  const char *v11; // r9
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rcx
  const char *v14; // r9
  UINT v15; // edx
  HMONITOR v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  UINT v22; // edx
  __int64 result; // rax
  int v24; // [rsp+20h] [rbp-60h] BYREF
  SnapRectHelpers *v25; // [rsp+28h] [rbp-58h] BYREF
  void *v26; // [rsp+30h] [rbp-50h] BYREF
  float v27; // [rsp+38h] [rbp-48h]
  float v28; // [rsp+3Ch] [rbp-44h]
  _BYTE v29[64]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v8 = 1;
  PropW = GetPropW(a3, (LPCWSTR)0xA920);
  v10 = PropW;
  if ( PropW )
  {
    if ( (unsigned int)IsWindowArranged(PropW) )
    {
      v12 = *((_QWORD *)tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>>((struct wil::details::IFailureCallback *)v29)
            + 6);
      v13 = *(volatile signed __int32 **)(a1 + 312);
      *(_QWORD *)(a1 + 312) = v12;
      if ( v12 )
        _InterlockedAdd((volatile signed __int32 *)(v12 + 280), 1u);
      if ( v13 )
        tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>::Release(v13);
      tip2::test_watcher<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_watcher<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>((__int64)v29);
      if ( dword_180992AC8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                       + 16LL) )
      {
        Init_thread_header(&dword_180992AC8);
        if ( dword_180992AC8 == -1 )
        {
          dword_180992ACC = RegisterWindowMessageW(L"TabTearOut");
          Init_thread_footer(&dword_180992AC8);
        }
      }
      v15 = dword_180992ACC;
      if ( !dword_180992ACC )
      {
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x18D,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          v14);
        v15 = dword_180992ACC;
      }
      if ( v15 )
      {
        v16 = MonitorFromRect(a4, 0);
        if ( !v16 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x192,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)0x80070057LL,
            v24);
        v25 = 0LL;
        v17 = *(__int64 **)(a1 + 64);
        v18 = *v17;
        v25 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, SnapRectHelpers **))(v18 + 48))(v17, v16, &v25);
        if ( v19 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x195,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)(unsigned int)v19,
            v24);
        v20 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(a4, v25);
        *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::operator->(
                       a1 + 312,
                       (__int64 *)&v26)
                  + 268) = v20;
        tip2::test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>(&v26);
        *(float *)&v26 = (float)a4->left;
        *((float *)&v26 + 1) = (float)a4->top;
        v27 = (float)(a4->right - a4->left);
        v28 = (float)(a4->bottom - a4->top);
        v21 = (*(__int64 (__fastcall **)(_QWORD, void **, int *))(**(_QWORD **)(a1 + 136) + 72LL))(
                *(_QWORD *)(a1 + 136),
                &v26,
                &v24);
        if ( v21 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x19A,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)(unsigned int)v21,
            v24);
        PostMessageW(a3, dword_180992ACC, 0LL, v24);
        v8 = 0;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
      }
    }
    else
    {
      if ( dword_180992AD0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                       + 16LL) )
      {
        Init_thread_header(&dword_180992AD0);
        if ( dword_180992AD0 == -1 )
        {
          dword_180992AD4 = RegisterWindowMessageW(L"TabSwitch");
          Init_thread_footer(&dword_180992AD0);
        }
      }
      v22 = dword_180992AD4;
      if ( dword_180992AD4
        || (wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x1A5,
              (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
              v11),
            (v22 = dword_180992AD4) != 0) )
      {
        PostMessageW(a3, v22, ((unsigned __int64)a5 >> 1) & 1, 0LL);
      }
    }
    *(_QWORD *)a2 = v10;
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
  }
  result = a2;
  *(_BYTE *)(a2 + 8) = v8;
  return result;
}
