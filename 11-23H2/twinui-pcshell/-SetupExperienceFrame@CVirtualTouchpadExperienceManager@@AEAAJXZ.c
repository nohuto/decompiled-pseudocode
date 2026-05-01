/*
 * XREFs of ?SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18045431C
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1804546E0 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::SetupExperienceFrame(CVirtualTouchpadExperienceManager *this)
{
  _DWORD *v2; // rbx
  _QWORD *v3; // rdi
  int v4; // eax
  unsigned int v5; // r15d
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, char *); // rbx
  _QWORD *v11; // r15
  int v12; // eax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  __int64 v19; // rdx
  _QWORD *v20; // rdi
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // rbx
  int v24; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v26; // [rsp+40h] [rbp+20h] BYREF
  __int64 v27; // [rsp+48h] [rbp+28h] BYREF

  v2 = (_DWORD *)((char *)this + 368);
  v3 = (_QWORD *)((char *)this + 336);
  if ( *((_DWORD *)this + 92) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 48LL))(*v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B6,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
    *v2 = 0;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _DWORD *))(*(_QWORD *)*v3 + 40LL))(
         *v3,
         ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
         v2);
  if ( v7 >= 0 )
  {
    v9 = *v3;
    v10 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 24LL);
    v11 = (_QWORD *)((char *)this + 344);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 43);
    v7 = v10(v9, (char *)this + 344);
    if ( v7 < 0 )
    {
      v8 = 443LL;
      goto LABEL_7;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v11 + 48LL))(*v11, *((unsigned int *)this + 31));
    if ( v7 < 0 )
    {
      v8 = 444LL;
      goto LABEL_7;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 120LL))(*v11, 1LL);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1BE,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    v26 = 0LL;
    v13 = *v11;
    v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v11 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
    v15 = v14(v13, &v26);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
LABEL_35:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
      return (unsigned int)v7;
    }
    v27 = 0LL;
    v16 = v26;
    v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 144LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    v18 = v17(v16, &v27);
    v7 = v18;
    if ( v18 >= 0 )
    {
      v20 = (_QWORD *)((char *)this + 352);
      v18 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 24LL))(v26, (char *)this + 352);
      v7 = v18;
      if ( v18 >= 0 )
      {
        v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 88LL))(v27, 1023LL, 4LL);
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1C6,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
            (const char *)(unsigned int)v21);
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v26 + 112LL))(v26, 255LL, 17LL);
        v7 = v18;
        if ( v18 >= 0 )
        {
          v22 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD))(*(_QWORD *)v26 + 72LL))(
                  v26,
                  L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
                  0LL);
          if ( v22 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1C8,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
              (const char *)(unsigned int)v22);
          v23 = (_DWORD *)((char *)this + 372);
          if ( *((_DWORD *)this + 93) )
          {
            v24 = RevokeScaleChangeNotificationsForWindow(*v20);
            if ( v24 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1CC,
                (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                (const char *)(unsigned int)v24);
            *v23 = 0;
          }
          v18 = RegisterScaleChangeSinkForWindow(*v20, ((unsigned __int64)this + 24) & -(__int64)(this != 0LL), v23);
          v7 = v18;
          if ( v18 >= 0 )
          {
            v7 = 0;
            goto LABEL_34;
          }
          v19 = 463LL;
        }
        else
        {
          v19 = 455LL;
        }
      }
      else
      {
        v19 = 452LL;
      }
    }
    else
    {
      v19 = 451LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v18);
LABEL_34:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    goto LABEL_35;
  }
  v8 = 442LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
