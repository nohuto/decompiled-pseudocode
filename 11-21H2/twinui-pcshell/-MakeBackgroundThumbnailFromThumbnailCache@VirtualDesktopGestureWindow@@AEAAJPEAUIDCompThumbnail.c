/*
 * XREFs of ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x180553C94
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180550704 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?complete@?$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ @ 0x180016F30 (-complete@-$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@0@XZ @ 0x18054EBB0 (--$start_and_watch_errors@V-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@@tip.c)
 *     BindCtx_AddObjectParam @ 0x18054FCB8 (BindCtx_AddObjectParam.c)
 *     ?ensure_data@?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@details@tip@@@std@@XZ @ 0x180556914 (-ensure_data@-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@AEBAAEAV-$shared_p.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall VirtualDesktopGestureWindow::MakeBackgroundThumbnailFromThumbnailCache(
        VirtualDesktopGestureWindow *this,
        HANDLE *a2,
        __int64 (__fastcall ***a3)(struct IVirtualDesktop *, GUID *, LPBC *),
        HSTRING a4,
        struct tagRECT *a5,
        struct IDCompThumbnail **a6)
{
  struct wil::details::IFailureCallback *CustomVDWallpaperWithGesturePerf; // rax
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  LPBC v13; // rbx
  __int64 v14; // rax
  int v15; // ebx
  _QWORD *v16; // rax
  LPBC v17; // rdi
  __int64 v18; // rax
  HRESULT v19; // eax
  int v20; // edi
  IBindCtx *v21; // rbx
  const WCHAR *StringRawBuffer; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, HANDLE *, HSTRING, __int64, GUID *, struct IDCompThumbnail **); // rbx
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, HANDLE *, _QWORD, HSTRING, GUID *, struct IDCompThumbnail **); // rbx
  int v31; // ecx
  DWORD SysColor; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 (__fastcall **v35)(struct IVirtualDesktop *, GUID *, LPBC *); // rax
  int v36; // eax
  int v37; // eax
  struct tagRECT *v38; // rbx
  struct IDCompThumbnail *v39; // rcx
  LPBC ppbc; // [rsp+40h] [rbp-99h] BYREF
  struct IDCompThumbnail *v42; // [rsp+48h] [rbp-91h] BYREF
  HSTRING string; // [rsp+50h] [rbp-89h]
  LPBC v44; // [rsp+58h] [rbp-81h] BYREF
  std::_Ref_count_base *v45; // [rsp+60h] [rbp-79h]
  HANDLE *p_h; // [rsp+68h] [rbp-71h] BYREF
  HANDLE h; // [rsp+70h] [rbp-69h] BYREF
  void *v48; // [rsp+78h] [rbp-61h] BYREF
  LPVOID ppv; // [rsp+80h] [rbp-59h] BYREF
  UINT32 length; // [rsp+88h] [rbp-51h] BYREF
  struct tagRECT *v51; // [rsp+90h] [rbp-49h]
  _BYTE pv[4]; // [rsp+98h] [rbp-41h] BYREF
  HSTRING v53; // [rsp+9Ch] [rbp-3Dh] BYREF
  int v54; // [rsp+B8h] [rbp-21h]
  std::_Ref_count_base *v55; // [rsp+D0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  string = a4;
  p_h = a2;
  v51 = a5;
  *a6 = 0LL;
  CustomVDWallpaperWithGesturePerf = tip::start_and_watch_errors<tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>>((struct wil::details::IFailureCallback *)pv);
  v9 = std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
         &v44,
         (_QWORD *)CustomVDWallpaperWithGesturePerf + 6);
  v10 = *v9;
  *v9 = *((_QWORD *)this + 38);
  *((_QWORD *)this + 38) = v10;
  v11 = v9[1];
  v9[1] = *((_QWORD *)this + 39);
  *((_QWORD *)this + 39) = v11;
  if ( v45 )
    std::_Ref_count_base::_Decref(v45);
  if ( v55 )
    std::_Ref_count_base::_Decref(v55);
  if ( v54 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)((char *)&v53 + 4));
  v12 = (_QWORD *)tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::ensure_data((char *)this + 304);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v44,
    v12);
  v13 = v44;
  tip::details::test_common_data<0>::begin_update((__int64)&v44[1]);
  v14 = (__int64)&v13[19];
  if ( !v13 )
    v14 = 8LL;
  *(_DWORD *)v14 = 0;
  if ( v13 )
  {
    tip::details::test_common_data<0>::end_update((__int64)&v13[1]);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v44);
  }
  if ( v45 )
    std::_Ref_count_base::_Decref(v45);
  v15 = *((_DWORD *)this + 56);
  v16 = (_QWORD *)tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::ensure_data((char *)this + 304);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v44,
    v16);
  v17 = v44;
  tip::details::test_common_data<0>::begin_update((__int64)&v44[1]);
  v18 = (__int64)&v17[19].lpVtbl + 4;
  if ( !v17 )
    v18 = 12LL;
  *(_DWORD *)v18 = v15 != 2;
  if ( v17 )
  {
    tip::details::test_common_data<0>::end_update((__int64)&v17[1]);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v44);
  }
  if ( v45 )
    std::_Ref_count_base::_Decref(v45);
  ppv = 0LL;
  v19 = CoCreateInstance(
          &GUID_50ef4544_ac9f_4a8e_b21b_8a26180db13f,
          0LL,
          1u,
          &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
          &ppv);
  v20 = v19;
  if ( v19 >= 0 )
  {
    v21 = 0LL;
    v44 = 0LL;
    v20 = CreateBindCtx(0, &ppbc);
    if ( v20 < 0 )
      goto LABEL_55;
    v20 = BindCtx_AddObjectParam((__int64)ppbc);
    if ( v20 >= 0 )
    {
      v21 = ppbc;
      v44 = ppbc;
      ((void (__fastcall *)(LPBC))ppbc->lpVtbl->AddRef)(ppbc);
    }
    ((void (__fastcall *)(LPBC))ppbc->lpVtbl->Release)(ppbc);
    if ( v20 < 0 )
    {
LABEL_55:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42A,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v20);
      goto LABEL_56;
    }
    v42 = 0LL;
    v48 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
    if ( SHCreateItemFromParsingName(StringRawBuffer, v21, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &v48) < 0 )
    {
      v29 = *((_QWORD *)this + 7);
      v30 = *(__int64 (__fastcall **)(__int64, HANDLE *, _QWORD, HSTRING, GUID *, struct IDCompThumbnail **))(*(_QWORD *)v29 + 112LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v42);
      v31 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
      LODWORD(string) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
      HIDWORD(string) = v31;
      SysColor = GetSysColor(1);
      v33 = v30(v29, p_h, SysColor, string, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v42);
      v20 = v33;
      if ( v33 < 0 )
      {
        v34 = 1098LL;
LABEL_49:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v34,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v33);
        goto LABEL_54;
      }
      v35 = *a3;
      ppbc = 0LL;
      v36 = (*v35)((struct IVirtualDesktop *)a3, &GUID_eddfebdb_99be_41b5_924b_71dee9de176c, &ppbc);
      v20 = v36;
      if ( v36 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44C,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v36);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppbc);
        goto LABEL_54;
      }
      v37 = ((__int64 (__fastcall *)(LPBC, _QWORD))ppbc->lpVtbl->GetBindOptions)(ppbc, 0LL);
      if ( v37 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x44D,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v37);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppbc);
    }
    else
    {
      ppbc = 0LL;
      v23 = *(_QWORD *)ppv;
      ppbc = 0LL;
      v24 = (*(__int64 (__fastcall **)(LPVOID, void *, _QWORD, _QWORD, LPBC *, _QWORD, _QWORD))(v23 + 24))(
              ppv,
              v48,
              (unsigned int)(*((_DWORD *)this + 48) - *((_DWORD *)this + 46)),
              0LL,
              &ppbc,
              0LL,
              0LL);
      v20 = v24;
      if ( v24 < 0 )
      {
        v25 = 1074LL;
LABEL_34:
        v26 = (unsigned int)v24;
        goto LABEL_35;
      }
      h = 0LL;
      v24 = ((__int64 (__fastcall *)(LPBC, HANDLE *))ppbc->lpVtbl->RegisterObjectBound)(ppbc, &h);
      v20 = v24;
      if ( v24 < 0 )
      {
        v25 = 1077LL;
        goto LABEL_34;
      }
      if ( !GetObjectW(h, 32, pv) )
      {
        v20 = -2147467259;
        v26 = 2147500037LL;
        v25 = 1080LL;
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)v26);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppbc);
LABEL_54:
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v48);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v42);
LABEL_56:
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v44);
        goto LABEL_57;
      }
      v27 = *((_QWORD *)this + 7);
      v28 = *(__int64 (__fastcall **)(__int64, HANDLE *, HSTRING, __int64, GUID *, struct IDCompThumbnail **))(*(_QWORD *)v27 + 80LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v42);
      string = v53;
      v24 = v28(v27, p_h, v53, 1LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v42);
      v20 = v24;
      if ( v24 < 0 )
      {
        v25 = 1085LL;
        goto LABEL_34;
      }
      p_h = &h;
      (*(void (__fastcall **)(struct IDCompThumbnail *, __int64 (__fastcall *)(__int64, __int64, __int64), HANDLE **))(*(_QWORD *)v42 + 88LL))(
        v42,
        LambdaCustomPaintProc<_lambda_aa6219af2ba03d3bdd3a1a119d509910_,HDC__ *>,
        &p_h);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppbc);
    }
    v38 = v51;
    v33 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v42 + 24LL))(
            v42,
            v51,
            0LL,
            0LL);
    v20 = v33;
    if ( v33 >= 0 )
    {
      if ( *((_DWORD *)this + 56) != 5
        || (v33 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v42 + 40LL))(
                    v42,
                    v38,
                    0LL,
                    0LL),
            v20 = v33,
            v33 >= 0) )
      {
        v39 = v42;
        if ( v42 )
        {
          *a6 = v42;
          (*(void (__fastcall **)(struct IDCompThumbnail *))(*(_QWORD *)v39 + 8LL))(v39);
        }
        else
        {
          *a6 = 0LL;
        }
        tip::tip_test<_tip_TaskViewShowTest>::complete((__int64 *)this + 38);
        v20 = 0;
        goto LABEL_54;
      }
      v34 = 1110LL;
    }
    else
    {
      v34 = 1104LL;
    }
    goto LABEL_49;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x427,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v19);
LABEL_57:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v20;
}
