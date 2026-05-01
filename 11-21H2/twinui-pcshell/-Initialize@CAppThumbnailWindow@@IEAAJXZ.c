/*
 * XREFs of ?Initialize@CAppThumbnailWindow@@IEAAJXZ @ 0x18049CE2C
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x18049D2DC (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateThumbnailFactory@CAppThumbnailWindow@@IEAAJXZ @ 0x18049C7B8 (-CreateThumbnailFactory@CAppThumbnailWindow@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppThumbnailWindow::Initialize(CAppThumbnailWindow *this)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  int v5; // eax
  unsigned int v6; // edi
  const char *v7; // r9
  int v8; // eax
  unsigned int v9; // edi
  int ThumbnailFactory; // eax
  unsigned int v11; // edi
  WNDCLASSW WndClass; // [rsp+80h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  int v14; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v15; // [rsp+E8h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 168) )
    return 0LL;
  v15 = 0LL;
  v3 = **((_QWORD **)this + 4);
  v15 = 0LL;
  v4 = *(__int64 (**)(void))(v3 + 24);
  try
  {
    v5 = v4();
    v6 = v5;
    if ( v5 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 24LL))(v15, &v14);
      v9 = v8;
      if ( v8 >= 0 )
      {
        if ( v14 )
        {
          memset_0(&WndClass, 0, sizeof(WndClass));
          WndClass.lpszClassName = L"AppThumbnailWindow";
          WndClass.lpfnWndProc = (WNDPROC)CAppThumbnailWindow::s_WndProc;
          WndClass.hInstance = &_ImageBase;
          WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
          WndClass.cbWndExtra = 8;
          RegisterClassW(&WndClass);
          CreateWindowInBand(
            136315008LL,
            WndClass.lpszClassName,
            0LL,
            2415919104LL,
            *((_DWORD *)this + 34),
            *((_DWORD *)this + 35),
            *((_DWORD *)this + 36) - *((_DWORD *)this + 34),
            *((_DWORD *)this + 37) - *((_DWORD *)this + 35),
            0LL,
            0LL,
            &_ImageBase,
            this,
            5);
          if ( *((_QWORD *)this + 20) )
          {
            ThumbnailFactory = CAppThumbnailWindow::CreateThumbnailFactory(this);
            v11 = ThumbnailFactory;
            if ( ThumbnailFactory >= 0 )
            {
              *((_BYTE *)this + 168) = 1;
              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
              result = 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x78,
                (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                (const char *)(unsigned int)ThumbnailFactory);
              DestroyWindow(*((HWND *)this + 20));
              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
              result = v11;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x75,
              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
              (const char *)0x80004005LL);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
            result = 2147500037LL;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x58,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
            (const char *)0x80004005LL);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
          result = 2147500037LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x56,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
          (const char *)(unsigned int)v8);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
        result = v9;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v5);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7F,
                           (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                           v7);
  }
  return result;
}
