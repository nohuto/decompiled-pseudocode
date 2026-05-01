/*
 * XREFs of ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18055CAFC
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x18055597C (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA?A_TAEAPEAUHWND__@@@Z @ 0x180554FE4 (--$emplace_back@AEAPEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAA-A.c)
 *     ?CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x1805573AC (-CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z.c)
 *     ?TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z @ 0x18055CD20 (-TryGetTopTwoWindows@CAppThumbnailWindow@@AEAAXPEAPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall CAppThumbnailWindow::TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList(
        CAppThumbnailWindow *this,
        __int64 a2)
{
  HWND v4; // rsi
  HWND v5; // rbp
  int ThumbnailAppWithChilden; // edi
  __int64 v7; // rdx
  _QWORD *v9; // r15
  _QWORD *v10; // r12
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HWND v16; // [rsp+70h] [rbp+18h] BYREF
  HWND v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  CAppThumbnailWindow::TryGetTopTwoWindows(this, &v17, &v16);
  v4 = v17;
  if ( v17 )
  {
    v5 = v16;
    if ( v16 )
    {
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 52);
      ThumbnailAppWithChilden = CAppThumbnailWindow::CreateThumbnailAppWithChilden(
                                  this,
                                  v4,
                                  (struct IDCompThumbnail **)this + 52);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 437LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)ThumbnailAppWithChilden);
        return (unsigned int)ThumbnailAppWithChilden;
      }
      v9 = (_QWORD *)((char *)this + 432);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 54);
      ThumbnailAppWithChilden = CAppThumbnailWindow::CreateThumbnailAppWithChilden(
                                  this,
                                  v4,
                                  (struct IDCompThumbnail **)this + 54);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 438LL;
        goto LABEL_5;
      }
      v10 = (_QWORD *)((char *)this + 448);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 56);
      ThumbnailAppWithChilden = CAppThumbnailWindow::CreateThumbnailAppWithChilden(
                                  this,
                                  v5,
                                  (struct IDCompThumbnail **)this + 56);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 439LL;
        goto LABEL_5;
      }
      v12 = *v9;
      *((_QWORD *)this + 71) = v4;
      *((_QWORD *)this + 72) = v5;
      LOBYTE(v11) = 1;
      ThumbnailAppWithChilden = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 152LL))(
                                  v12,
                                  *((_QWORD *)this + 8),
                                  v11);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 452LL;
        goto LABEL_5;
      }
      LOBYTE(v13) = 1;
      ThumbnailAppWithChilden = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v10 + 152LL))(
                                  *v10,
                                  *v9,
                                  v13);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 453LL;
        goto LABEL_5;
      }
      LOBYTE(v14) = 1;
      ThumbnailAppWithChilden = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 52) + 152LL))(
                                  *((_QWORD *)this + 52),
                                  *v10,
                                  v14);
      if ( ThumbnailAppWithChilden < 0 )
      {
        v7 = 454LL;
        goto LABEL_5;
      }
      std::vector<HWND__ *>::emplace_back<HWND__ * &>(a2, &v17);
      std::vector<HWND__ *>::emplace_back<HWND__ * &>(a2, &v16);
      *((_QWORD *)this + 22) = v16;
    }
  }
  return 0LL;
}
