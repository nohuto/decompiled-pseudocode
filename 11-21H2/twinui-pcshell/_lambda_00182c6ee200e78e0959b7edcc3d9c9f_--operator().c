/*
 * XREFs of _lambda_00182c6ee200e78e0959b7edcc3d9c9f_::operator() @ 0x1803FFC58
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_00182c6ee200e78e0959b7edcc3d9c9f___::Run @ 0x180402BD0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_00182c6ee200e78e0959b7edcc3d9c9f___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180171E08 (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803F96F8 (--$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManager.c)
 *     ??$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1803FF39C (--$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_.c)
 *     ?PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z @ 0x180402958 (-PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_00182c6ee200e78e0959b7edcc3d9c9f_::operator()(__int64 a1)
{
  int *v2; // rdi
  int v3; // r12d
  __int64 v4; // rcx
  int *v5; // rax
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64 *); // rbx
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, _QWORD, int *); // rbx
  int v19; // eax
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64, _QWORD, __int64 *); // rbx
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // r14
  __int64 (__fastcall *v27)(__int64, _QWORD, __int64 **); // rsi
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  __int64 v32; // r14
  __int64 (__fastcall *v33)(__int64, _QWORD, __int64 *); // rsi
  int v34; // eax
  int v35; // eax
  __int64 v36; // rsi
  __int64 (__fastcall *v37)(__int64, _QWORD, __int64 *); // rbx
  int v38; // eax
  __int64 v39; // rsi
  __int64 (__fastcall *v40)(__int64, _QWORD, __int64 *); // rbx
  int v41; // eax
  __int64 v42; // rsi
  __int64 (__fastcall *v43)(__int64, _QWORD, __int64 *); // rbx
  int v44; // eax
  int v45; // eax
  const char *v46; // r9
  __int64 result; // rax
  int v48[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v49; // [rsp+28h] [rbp-50h] BYREF
  __int64 v50[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v52; // [rsp+80h] [rbp+8h] BYREF
  __int64 v53; // [rsp+88h] [rbp+10h] BYREF
  struct IUwpWindowWrapperInternal *v54; // [rsp+90h] [rbp+18h] BYREF
  __int64 v55; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(int **)a1;
  v3 = **(_DWORD **)(a1 + 8);
  v55 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    v5 = *(int **)(a1 + 8);
    if ( !*v5 )
    {
      if ( v54 )
      {
        v25 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v54 + 256LL))(v54);
        if ( v25 )
        {
          v49 = 0LL;
          v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 168LL);
          v27 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v26 + 80LL);
          wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v49);
          v28 = v27(v26, v25, &v49);
          if ( v28 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xAE,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v28,
              v48[0]);
          *(_QWORD *)v48 = 0LL;
          v29 = *v49;
          *(_QWORD *)v48 = 0LL;
          v30 = (*(__int64 (__fastcall **)(__int64 *, int *))(v29 + 48))(v49, v48);
          if ( v30 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB1,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v30,
              v48[0]);
          wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
            (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v48,
            v50);
          if ( v50[0] )
          {
            LOBYTE(v52) = 0;
            v31 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v50[0] + 168LL))(v50[0], &v52);
            if ( v31 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0xB8,
                (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                (const char *)(unsigned int)v31,
                v48[0]);
            if ( (_BYTE)v52 )
            {
              v32 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 168LL);
              v33 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v32 + 56LL);
              wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v55);
              v34 = v33(v32, v25, &v55);
              if ( v34 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0xBB,
                  (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                  (const char *)(unsigned int)v34,
                  v48[0]);
            }
            else
            {
              LOBYTE(v53) = 0;
              v35 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v50[0] + 176LL))(v50[0], &v53);
              if ( v35 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0xC0,
                  (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                  (const char *)(unsigned int)v35,
                  v48[0]);
              if ( (_BYTE)v53 )
              {
                v36 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 232LL);
                v37 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v36 + 64LL);
                wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v55);
                v38 = v37(v36, (unsigned int)*v2, &v55);
                if ( v38 < 0 )
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0xC3,
                    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                    (const char *)(unsigned int)v38,
                    v48[0]);
              }
            }
          }
          else
          {
            v39 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 232LL);
            v40 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v39 + 64LL);
            wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v55);
            v41 = v40(v39, (unsigned int)*v2, &v55);
            if ( v41 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0xC9,
                (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                (const char *)(unsigned int)v41,
                v48[0]);
          }
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v50);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v48);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v49);
        }
        goto LABEL_64;
      }
      *(_QWORD *)v48 = 0LL;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 232LL);
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v17 + 104LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v48);
      v19 = v18(v17, (unsigned int)*v2, v48);
      if ( v19 >= 0 )
      {
        if ( *(_QWORD *)v48 )
        {
          v53 = 0LL;
          v20 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v48 + 56LL))(*(_QWORD *)v48, &v52);
          v21 = retaddr;
          if ( v20 < 0
            || (v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 168LL),
                v23 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 80LL),
                wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v53),
                v20 = v23(v22, (unsigned int)v52, &v53),
                v21 = retaddr,
                v20 < 0) )
          {
            wil::details::in1diag3::_Log_Hr(
              v21,
              (void *)0x9E,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v20);
          }
          else if ( v53 )
          {
            v24 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v53 + 80LL))(v53, &v52);
            if ( v24 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0xA1,
                (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                (const char *)(unsigned int)v24,
                v48[0]);
          }
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v53);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9A,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v19);
      }
      v16 = (__int64 *)v48;
LABEL_32:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v16);
LABEL_64:
      if ( v3 != 3 )
      {
        v52 = 0LL;
        v42 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 232LL);
        v43 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v42 + 104LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v52);
        v44 = v43(v42, (unsigned int)*v2, &v52);
        if ( v44 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x108,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v44,
            v48[0]);
        if ( !v52 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x109,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)0x8007139FLL,
            v48[0]);
        v45 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v52 + 128LL))(v52, 1LL);
        if ( v45 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x10A,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v45,
            v48[0]);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v52);
      }
      ViewManagerInteropTelemetry::NavigateView<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
        *(int **)a1,
        *(int **)(a1 + 8));
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v54);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v55);
      return 0LL;
    }
    if ( *v5 <= 0 )
      goto LABEL_8;
    if ( *v5 <= 2 )
    {
      if ( !v54 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xD1,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)0x8007139FLL,
          v48[0]);
      v52 = 0LL;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 232LL);
      v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 104LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v52);
      v15 = v14(v13, (unsigned int)*v2, &v52);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xD3,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v15,
          v48[0]);
      if ( !v52 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xD4,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)0x8007139FLL,
          v48[0]);
    }
    else
    {
      if ( *v5 != 3 )
      {
        if ( *v5 != 4 )
        {
          if ( *v5 != 5 )
LABEL_8:
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xFF,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)0x8000FFFFLL,
              v48[0]);
          goto LABEL_64;
        }
        if ( !v54 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xEC,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)0x8007139FLL,
            v48[0]);
        v52 = 0LL;
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 232LL);
        v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 104LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v52);
        v8 = v7(v6, (unsigned int)*v2, &v52);
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xEE,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v8,
            v48[0]);
        if ( !v52 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xEF,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)0x8007139FLL,
            v48[0]);
        (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v54 + 488LL))(v54);
        UwpWindowManagerBridge::PushWindowVisibility(*(UwpWindowManagerBridge **)(a1 + 16), v54, 1);
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 288LL) + 272LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL),
          v52);
        goto LABEL_31;
      }
      if ( !v54 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xDD,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)0x8007139FLL,
          v48[0]);
      v52 = 0LL;
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 232LL);
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 104LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v52);
      v11 = v10(v9, (unsigned int)*v2, &v52);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xDF,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v11,
          v48[0]);
      if ( !v52 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xE0,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)0x8007139FLL,
          v48[0]);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v52 + 128LL))(v52, 2LL);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xE3,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v12,
          v48[0]);
    }
    (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v54 + 488LL))(v54);
    UwpWindowManagerBridge::PushWindowVisibility(*(UwpWindowManagerBridge **)(a1 + 16), v54, 0);
LABEL_31:
    v16 = &v52;
    goto LABEL_32;
  }
  catch ( ... )
  {
    LODWORD(v52) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x10F,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                     v46);
    return (unsigned int)v52;
  }
  return result;
}
