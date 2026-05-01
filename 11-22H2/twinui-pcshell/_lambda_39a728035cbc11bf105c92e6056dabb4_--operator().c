/*
 * XREFs of _lambda_39a728035cbc11bf105c92e6056dabb4_::operator() @ 0x1800D45C8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_39a728035cbc11bf105c92e6056dabb4___::Run @ 0x1800D45A0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_39a728035cbc11bf105c92e6056dabb4___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009F094 (--$try_query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_.c)
 *     ??$NavigateUwpView@AEAIIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAI$$QEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800D4A84 (--$NavigateUwpView@AEAIIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewMan.c)
 *     ?PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z @ 0x1800D4BF8 (-PushWindowVisibility@UwpWindowManagerBridge@@AEAAXPEAUIUwpWindowWrapperInternal@@_N@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall lambda_39a728035cbc11bf105c92e6056dabb4_::operator()(unsigned int **a1)
{
  unsigned int *v2; // rdi
  int v3; // r12d
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 *v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  unsigned int *v17; // rbx
  int v18; // eax
  __int64 *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  wil::details::in1diag3 *v31; // rcx
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(__int64, _QWORD, __int64 *); // rbx
  int v34; // eax
  unsigned int v35; // ebx
  __int64 v36; // r14
  __int64 (__fastcall *v37)(__int64, _QWORD, __int64 **); // rsi
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  int v41; // eax
  __int64 v42; // r14
  __int64 (__fastcall *v43)(__int64, _QWORD, __int64 *); // rsi
  int v44; // eax
  int v45; // eax
  __int64 v46; // rsi
  __int64 (__fastcall *v47)(__int64, _QWORD, __int64 *); // rbx
  int v48; // eax
  __int64 v49; // rsi
  __int64 (__fastcall *v50)(__int64, _QWORD, __int64 *); // rbx
  int v51; // eax
  int v52[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v53; // [rsp+28h] [rbp-50h] BYREF
  __int64 v54[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v56; // [rsp+80h] [rbp+8h] BYREF
  __int64 v57; // [rsp+88h] [rbp+10h] BYREF
  struct IUwpWindowWrapperInternal *v58; // [rsp+90h] [rbp+18h] BYREF
  __int64 v59; // [rsp+98h] [rbp+20h] BYREF

  v2 = *a1;
  v3 = *a1[1];
  v59 = 0LL;
  (*(void (__fastcall **)(_QWORD, struct IUwpWindowWrapperInternal **, _QWORD))(**((_QWORD **)a1[2] + 37) + 200LL))(
    *((_QWORD *)a1[2] + 37),
    &v58,
    *v2);
  v4 = *a1[1];
  if ( !v4 )
  {
    if ( !v58 )
    {
      *(_QWORD *)v52 = 0LL;
      v27 = (__int64 *)*((_QWORD *)a1[2] + 29);
      v28 = *v27;
      *(_QWORD *)v52 = 0LL;
      v29 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, int *))(v28 + 104))(v27, *v2, v52);
      if ( v29 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEB,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v29,
          v52[0]);
      }
      else if ( *(_QWORD *)v52 )
      {
        v57 = 0LL;
        v30 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v52 + 56LL))(*(_QWORD *)v52, &v56);
        v31 = retaddr;
        if ( v30 < 0
          || (v32 = *((_QWORD *)a1[2] + 21),
              v33 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v32 + 80LL),
              wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v57),
              v30 = v33(v32, (unsigned int)v56, &v57),
              v31 = retaddr,
              v30 < 0) )
        {
          wil::details::in1diag3::_Log_Hr(
            v31,
            (void *)0xEF,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v30,
            v52[0]);
        }
        else if ( v57 )
        {
          v34 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v57 + 80LL))(v57, &v56);
          if ( v34 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xF2,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v34,
              v52[0]);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v57);
      }
      v12 = (__int64 *)v52;
      goto LABEL_11;
    }
    v35 = (*(__int64 (**)(void))(*(_QWORD *)v58 + 256LL))();
    if ( v35 )
    {
      v53 = 0LL;
      v36 = *((_QWORD *)a1[2] + 21);
      v37 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v36 + 80LL);
      wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset(&v53);
      v38 = v37(v36, v35, &v53);
      if ( v38 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xFF,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v38,
          v52[0]);
      *(_QWORD *)v52 = 0LL;
      v39 = *v53;
      *(_QWORD *)v52 = 0LL;
      v40 = (*(__int64 (__fastcall **)(__int64 *, int *))(v39 + 48))(v53, v52);
      if ( v40 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x102,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v40,
          v52[0]);
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::try_query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
        (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v52,
        v54);
      if ( v54[0] )
      {
        LOBYTE(v56) = 0;
        v41 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v54[0] + 168LL))(v54[0], &v56);
        if ( v41 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x109,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v41,
            v52[0]);
        if ( (_BYTE)v56 )
        {
          v42 = *((_QWORD *)a1[2] + 21);
          v43 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v42 + 56LL);
          wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v59);
          v44 = v43(v42, v35, &v59);
          if ( v44 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x10C,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v44,
              v52[0]);
        }
        else
        {
          LOBYTE(v57) = 0;
          v45 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v54[0] + 176LL))(v54[0], &v57);
          if ( v45 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x111,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
              (const char *)(unsigned int)v45,
              v52[0]);
          if ( (_BYTE)v57 )
          {
            v46 = *((_QWORD *)a1[2] + 29);
            v47 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v46 + 64LL);
            wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v59);
            v48 = v47(v46, *v2, &v59);
            if ( v48 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x114,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                (const char *)(unsigned int)v48,
                v52[0]);
          }
        }
      }
      else
      {
        v49 = *((_QWORD *)a1[2] + 29);
        v50 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v49 + 64LL);
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v59);
        v51 = v50(v49, *v2, &v59);
        if ( v51 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x11A,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
            (const char *)(unsigned int)v51,
            v52[0]);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v54);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v52);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v53);
    }
    goto LABEL_12;
  }
  v5 = v4 - 1;
  if ( !v5 || (v6 = v5 - 1) == 0 )
  {
    if ( !v58 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x122,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)0x8007139FLL,
        v52[0]);
    v56 = 0LL;
    v24 = (__int64 *)*((_QWORD *)a1[2] + 29);
    v25 = *v24;
    v56 = 0LL;
    v26 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v25 + 104))(v24, *v2, &v56);
    if ( v26 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x124,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v26,
        v52[0]);
    if ( !v56 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x125,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)0x8007139FLL,
        v52[0]);
    goto LABEL_28;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( !v58 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x12E,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)0x8007139FLL,
        v52[0]);
    v56 = 0LL;
    v20 = (__int64 *)*((_QWORD *)a1[2] + 29);
    v21 = *v20;
    v56 = 0LL;
    v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v21 + 104))(v20, *v2, &v56);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x130,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v22,
        v52[0]);
    if ( !v56 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x131,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)0x8007139FLL,
        v52[0]);
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 128LL))(v56, 2LL);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x134,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v23,
        v52[0]);
LABEL_28:
    (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *, _QWORD))(*(_QWORD *)v58 + 488LL))(v58, 0LL);
    UwpWindowManagerBridge::PushWindowVisibility((UwpWindowManagerBridge *)a1[2], v58, 0);
LABEL_10:
    v12 = &v56;
LABEL_11:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v12);
    goto LABEL_12;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( !v58 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13D,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)0x8007139FLL,
        v52[0]);
    v56 = 0LL;
    v9 = (__int64 *)*((_QWORD *)a1[2] + 29);
    v10 = *v9;
    v56 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v10 + 104))(v9, *v2, &v56);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x13F,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v11,
        v52[0]);
    if ( !v56 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x140,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)0x8007139FLL,
        v52[0]);
    (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *, _QWORD))(*(_QWORD *)v58 + 488LL))(v58, 0LL);
    UwpWindowManagerBridge::PushWindowVisibility((UwpWindowManagerBridge *)a1[2], v58, 1);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1[2] + 37) + 272LL))(*((_QWORD *)a1[2] + 37), v56);
    goto LABEL_10;
  }
  if ( v8 != 1 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x150,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)0x8000FFFFLL,
      v52[0]);
LABEL_12:
  if ( v3 != 3 )
  {
    v56 = 0LL;
    v13 = (__int64 *)*((_QWORD *)a1[2] + 29);
    v14 = *v13;
    v56 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v14 + 104))(v13, *v2, &v56);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x159,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v15,
        v52[0]);
    if ( !v56 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15A,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)0x8007139FLL,
        v52[0]);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 128LL))(v56, 1LL);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v16,
        v52[0]);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v56);
  }
  v17 = a1[1];
  if ( v58 )
    v18 = (*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v58 + 256LL))(v58);
  else
    v18 = 0;
  LODWORD(v56) = v18;
  ViewManagerInteropTelemetry::NavigateUwpView<unsigned int &,unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
    *a1,
    &v56,
    v17);
  if ( v58 )
    (*(void (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  return 0LL;
}
