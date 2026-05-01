/*
 * XREFs of ?CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x1805573AC
 * Callers:
 *     ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18055CAFC (-TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV-$vector@PEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     EnumWindowsHelpers::ForEachWindowHr__lambda_b29ec557ac5c0264c1ac8a31af818ac2___ @ 0x180554834 (EnumWindowsHelpers--ForEachWindowHr__lambda_b29ec557ac5c0264c1ac8a31af818ac2___.c)
 *     ??$copy_to@UIDCompThumbnail@@@?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIDCompThumbnail@@@Z @ 0x180554FA8 (--$copy_to@UIDCompThumbnail@@@-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppThumbnailWindow::CreateThumbnailAppWithChilden(
        CAppThumbnailWindow *this,
        HWND a2,
        struct IDCompThumbnail **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, _QWORD, __int128 *, int *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  int v14[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v15; // [rsp+38h] [rbp-21h] BYREF
  __int128 v16; // [rsp+40h] [rbp-19h] BYREF
  __int64 v17; // [rsp+50h] [rbp-9h]
  __int128 v18; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v19[4]; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  HWND v21; // [rsp+C8h] [rbp+6Fh] BYREF

  v21 = a2;
  if ( !a2 )
    return 2147942487LL;
  *a3 = 0LL;
  *(_QWORD *)v14 = 0LL;
  v6 = *((_QWORD *)this + 2);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *, int *))(*(_QWORD *)v6 + 96LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v14);
  v18 = *(_OWORD *)((char *)this + 136);
  v8 = v7(v6, *((_QWORD *)this + 5), 0LL, &v18, v14);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v19[0] = 0;
    v19[1] = 0;
    v19[2] = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
    v19[3] = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD))(**(_QWORD **)v14 + 24LL))(
           *(_QWORD *)v14,
           v19,
           0LL,
           0LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 394LL;
      goto LABEL_7;
    }
    v16 = 0LL;
    v17 = 0LL;
    *(_QWORD *)&v18 = &v21;
    *((_QWORD *)&v18 + 1) = &v16;
    v11 = EnumWindowsHelpers::ForEachWindowHr__lambda_b29ec557ac5c0264c1ac8a31af818ac2___((__int64)&v18);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x195,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_17;
    }
    v15 = 0LL;
    v12 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v14)(
            *(_QWORD *)v14,
            &GUID_7814dccf_97c7_4f4f_8fc2_a3c6c8107597,
            &v15);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(v15, 0LL, 0LL);
      v9 = v12;
      if ( v12 >= 0 )
      {
        wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>::copy_to<IDCompThumbnail>((__int64 *)v14, a3);
        v9 = 0;
        goto LABEL_16;
      }
      v13 = 415LL;
    }
    else
    {
      v13 = 408LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v12);
LABEL_16:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
LABEL_17:
    if ( (_QWORD)v16 )
    {
      std::_Deallocate<16,0>((void *)v16, (v17 - v16) & 0xFFFFFFFFFFFFFFF8uLL);
      v16 = 0LL;
      v17 = 0LL;
    }
    goto LABEL_19;
  }
  v10 = 391LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
    (const char *)(unsigned int)v8);
LABEL_19:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v14);
  return v9;
}
