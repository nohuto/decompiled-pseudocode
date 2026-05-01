/*
 * XREFs of ?CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x180556914
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x18055597C (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDCompThumbnail@@@Z @ 0x180555148 (--0-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDCompThumbnail@@@Z.c)
 *     ?CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@Z @ 0x18055779C (-CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV-$com_ptr_t@UIDCompThumbnail@@Uerr_retur.c)
 */

__int64 __fastcall CAppThumbnailWindow::CreateBackgroundThumbnail(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  int v3; // eax
  __int64 v5; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v12[4]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (__int64 *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
  v5 = *(_QWORD *)(a1 + 16);
  v12[0] = 0;
  v12[1] = 0;
  v12[2] = v3;
  v12[3] = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v5 + 120LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 48));
  LODWORD(v11) = *(_DWORD *)(a1 + 144) - *(_DWORD *)(a1 + 136);
  HIDWORD(v11) = *(_DWORD *)(a1 + 148) - *(_DWORD *)(a1 + 140);
  v8 = v7(v5, *(_QWORD *)(a1 + 40), v11, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v2);
  if ( v8 < 0 )
  {
    v9 = 614LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)*v2 + 24LL))(*v2, v12, 0LL, 0LL);
  if ( v8 < 0 )
  {
    v9 = 615LL;
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)*v2 + 152LL))(*v2, *(_QWORD *)(a1 + 56), 0LL);
  if ( v8 < 0 )
  {
    v9 = 616LL;
    goto LABEL_3;
  }
  wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>(
    &v11,
    *v2);
  v8 = CAppThumbnailWindow::CreateThumbnailsFromWindows(a1, &v11, a2, a1 + 72);
  if ( v8 < 0 )
  {
    v9 = 621LL;
    goto LABEL_3;
  }
  return 0LL;
}
