/*
 * XREFs of ?SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18037F67C
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x18037FA30 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::SetupExperienceFrame(CVirtualTouchpadExperienceManager *this)
{
  _DWORD *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, char *); // rbx
  _QWORD *v10; // r15
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v24; // [rsp+40h] [rbp+20h] BYREF
  __int64 v25; // [rsp+48h] [rbp+28h] BYREF

  v2 = (_DWORD *)((char *)this + 368);
  if ( *((_DWORD *)this + 92) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 48LL))(*((_QWORD *)this + 42));
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    *v2 = 0;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *, _DWORD *))(**((_QWORD **)this + 42) + 40LL))(
         *((_QWORD *)this + 42),
         (char *)this + 16,
         v2);
  if ( v6 >= 0 )
  {
    v8 = *((_QWORD *)this + 42);
    v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL);
    v10 = (_QWORD *)((char *)this + 344);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 43);
    v6 = v9(v8, (char *)this + 344);
    if ( v6 < 0 )
    {
      v7 = 401LL;
      goto LABEL_7;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 48LL))(*v10, *((unsigned int *)this + 31));
    if ( v6 < 0 )
    {
      v7 = 402LL;
      goto LABEL_7;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v10 + 120LL))(*v10, 1LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x194,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    v24 = 0LL;
    v12 = *v10;
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v10 + 32LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    v14 = v13(v12, &v24);
    v6 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x197,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_35:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
      return (unsigned int)v6;
    }
    v25 = 0LL;
    v15 = v24;
    v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 144LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v17 = v16(v15, &v25);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v19 = (_QWORD *)((char *)this + 352);
      v17 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v24 + 24LL))(v24, (char *)this + 352);
      v6 = v17;
      if ( v17 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 88LL))(v25, 1023LL, 4LL);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x19C,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
            (const char *)(unsigned int)v20);
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 112LL))(v24, 255LL, 17LL);
        v6 = v17;
        if ( v17 >= 0 )
        {
          v21 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD))(*(_QWORD *)v24 + 72LL))(
                  v24,
                  L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
                  0LL);
          if ( v21 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x19E,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
              (const char *)(unsigned int)v21);
          if ( *((_DWORD *)this + 93) )
          {
            v22 = RevokeScaleChangeNotificationsForWindow(*v19);
            if ( v22 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1A2,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                (const char *)(unsigned int)v22);
            *((_DWORD *)this + 93) = 0;
          }
          v17 = RegisterScaleChangeSinkForWindow(*v19, (char *)this + 24, (char *)this + 372);
          v6 = v17;
          if ( v17 >= 0 )
          {
            v6 = 0;
            goto LABEL_34;
          }
          v18 = 421LL;
        }
        else
        {
          v18 = 413LL;
        }
      }
      else
      {
        v18 = 410LL;
      }
    }
    else
    {
      v18 = 409LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
LABEL_34:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    goto LABEL_35;
  }
  v7 = 400LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
