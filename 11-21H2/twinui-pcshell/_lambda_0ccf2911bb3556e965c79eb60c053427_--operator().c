/*
 * XREFs of _lambda_0ccf2911bb3556e965c79eb60c053427_::operator() @ 0x1801B68C8
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___::Invoke @ 0x1801B71B0 (CAsyncCallbackWithLambda__lambda_5aee2b6cb60dad32042c7fd4933dc390___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?complete@?$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ @ 0x180016F30 (-complete@-$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddThumbnailToThumbnailCollection@VirtualDesktopGestureWindow@@QEAAJIPEAUIDCompThumbnail@@@Z @ 0x18054FA90 (-AddThumbnailToThumbnailCollection@VirtualDesktopGestureWindow@@QEAAJIPEAUIDCompThumbnail@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_0ccf2911bb3556e965c79eb60c053427_::operator()(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, unsigned __int64, GUID *, struct IDCompThumbnail **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IDCompThumbnail *v14; // [rsp+60h] [rbp+20h] BYREF
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+30h]

  v15 = 0LL;
  v2 = *(__int64 **)(a1 + 56);
  v3 = *v2;
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 104))(v2, &v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1020LL;
      goto LABEL_9;
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 48LL))(v15);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1021LL;
      goto LABEL_9;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 56LL))(*(_QWORD *)(a1 + 48), v15);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1022LL;
      goto LABEL_9;
    }
    v14 = 0LL;
    v7 = *(_QWORD *)(a1 + 72);
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64, GUID *, struct IDCompThumbnail **))(*(_QWORD *)v7 + 128LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v14);
    v16 = __PAIR64__(*(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 32));
    v9 = v8(v7, *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 48), v16, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v14);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
             v14,
             a1 + 16,
             0LL,
             0LL);
      v5 = v9;
      if ( v9 >= 0 )
      {
        LOBYTE(v11) = 1;
        v9 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, _QWORD, __int64))(*(_QWORD *)v14 + 152LL))(
               v14,
               *(_QWORD *)(a1 + 88),
               v11);
        v5 = v9;
        if ( v9 >= 0 )
        {
          v9 = VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection(
                 *(VirtualDesktopGestureWindow **)a1,
                 *(_DWORD *)(a1 + 80),
                 v14);
          v5 = v9;
          if ( v9 >= 0 )
          {
            tip::tip_test<_tip_TaskViewShowTest>::complete((__int64 *)(*(_QWORD *)a1 + 320LL));
            v5 = 0;
            goto LABEL_20;
          }
          v10 = 1036LL;
        }
        else
        {
          v10 = 1032LL;
        }
      }
      else
      {
        v10 = 1026LL;
      }
    }
    else
    {
      v10 = 1025LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
LABEL_20:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v14);
    goto LABEL_21;
  }
  v6 = 1019LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_21:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
  return v5;
}
