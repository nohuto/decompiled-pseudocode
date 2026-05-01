/*
 * XREFs of ?_AddDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x1806093A0
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180608EE0 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800E1A74 (--1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CVirtualDesktopHotkeyHandler::_AddDesktop(CVirtualDesktopHotkeyHandler *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v3)(_QWORD, GUID *, __int64 *); // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF
  __int64 v21; // [rsp+78h] [rbp+28h] BYREF
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF

  if ( !*((_BYTE *)this + 88) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v21);
    v20 = 0LL;
    v14 = *((_QWORD *)this + 3);
    v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 392LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
    v16 = v15(v14, &v20);
    v5 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 4) + 24LL))(
              *((_QWORD *)this + 4),
              v20,
              1LL);
      v5 = v16;
      if ( v16 >= 0 )
      {
LABEL_22:
        Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v20);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v21);
        return v5;
      }
      v17 = 189LL;
    }
    else
    {
      v17 = 188LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_22;
  }
  v20 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
  v3 = *v2;
  v20 = 0LL;
  v4 = (*v3)(v2, &GUID_bb1b0fb0_58f6_4f1a_99f2_86599b33ede8, &v20);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 175LL;
      goto LABEL_6;
    }
    v22 = 0LL;
    v7 = (__int64 *)*((_QWORD *)this + 3);
    v8 = *v7;
    v22 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 360))(v7, &v22);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
        (const char *)(unsigned int)v9);
LABEL_15:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
      goto LABEL_16;
    }
    v21 = 0LL;
    v10 = (__int64 *)*((_QWORD *)this + 3);
    v11 = *v10;
    v21 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 392))(v10, &v21);
    v5 = v12;
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v20 + 40LL))(
              v20,
              v21,
              1LL,
              *((_QWORD *)this + 7),
              *((_QWORD *)this + 6),
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 5),
              0);
      v5 = v12;
      if ( v12 >= 0 )
      {
LABEL_14:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
        goto LABEL_15;
      }
      v13 = 181LL;
    }
    else
    {
      v13 = 179LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_14;
  }
  v6 = 174LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_16:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  return v5;
}
