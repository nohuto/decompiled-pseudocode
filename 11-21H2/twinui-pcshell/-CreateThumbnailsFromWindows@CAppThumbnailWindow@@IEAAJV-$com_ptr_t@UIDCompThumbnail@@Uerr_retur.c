/*
 * XREFs of ?CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@Z @ 0x18049C93C
 * Callers:
 *     ?CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18049C620 (-CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUH.c)
 *     ?CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18049CC94 (-CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@PEAUIDCompThumbnail@@@?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAPEAUIDCompThumbnail@@@Z @ 0x18049B954 (--$_Emplace_reallocate@PEAUIDCompThumbnail@@@-$vector@V-$com_ptr_t@UIDCompThumbnail@@Uerr_return.c)
 *     ??0?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDCompThumbnail@@@Z @ 0x18049BB9C (--0-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDCompThumbnail@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppThumbnailWindow::CreateThumbnailsFromWindows(__int64 a1, _QWORD *a2, HWND **a3, __int64 a4)
{
  __int64 v6; // rbx
  HWND *v7; // r15
  HWND *v8; // r13
  HWND v9; // r12
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, HWND, _QWORD, _QWORD, _DWORD *, GUID *, __int64 *); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  const char *v14; // r9
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // [rsp+50h] [rbp-88h] BYREF
  __int64 v22; // [rsp+58h] [rbp-80h] BYREF
  __int64 v23; // [rsp+60h] [rbp-78h]
  void *v24; // [rsp+68h] [rbp-70h]
  struct tagRECT Rect; // [rsp+70h] [rbp-68h] BYREF
  _DWORD v26[4]; // [rsp+80h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v6 = a1;
  v23 = a1;
  v24 = a2;
  v7 = *a3;
  v8 = a3[1];
  try
  {
    while ( v7 != v8 )
    {
      v9 = *v7;
      Rect = 0LL;
      GetWindowRect(v9, &Rect);
      if ( Rect.left >= Rect.right || Rect.top >= Rect.bottom )
        break;
      MapWindowPoints(0LL, *(HWND *)(v6 + 160), (LPPOINT)&Rect, 2u);
      v26[0] = 0;
      v26[1] = 0;
      v26[2] = Rect.right - Rect.left;
      v26[3] = Rect.bottom - Rect.top;
      v21 = 0LL;
      v10 = *(_QWORD *)(v6 + 16);
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, HWND, _QWORD, _QWORD, _DWORD *, GUID *, __int64 *))(*(_QWORD *)v10 + 64LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v21);
      v12 = v11(v10, *a2, v9, 0LL, 0LL, v26, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v21);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x167,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)v12);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a2);
        return v13;
      }
      v16 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(
              v21,
              &Rect,
              0LL,
              0LL);
      v18 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x168,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)v16);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x168,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)v18);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a2);
        return v18;
      }
      LOBYTE(v17) = 1;
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v21 + 152LL))(v21, 0LL, v17);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x169,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)v19);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x169,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)v20);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a2);
        return v20;
      }
      v22 = v21;
      if ( *(_QWORD *)(a4 + 8) == *(_QWORD *)(a4 + 16) )
      {
        std::vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>::_Emplace_reallocate<IDCompThumbnail *>(
          (__int64 **)a4,
          *(__int64 **)(a4 + 8),
          &v22);
      }
      else
      {
        wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>(
          *(_QWORD **)(a4 + 8),
          v21);
        *(_QWORD *)(a4 + 8) += 8LL;
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
      ++v7;
      v6 = v23;
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a2);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x16E,
                     (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                     v14);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v24);
    return (unsigned int)v21;
  }
  return result;
}
