/*
 * XREFs of ?IsWindowOnCurrentVirtualDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180048F20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop(VirtualDesktopsApi *this, HWND a2, int *a3)
{
  __int64 v6; // r15
  int (__fastcall *v7)(__int64, HWND, __int64 *); // rbx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v16; // [rsp+50h] [rbp+30h] BYREF
  __int64 v17; // [rsp+60h] [rbp+40h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+48h] BYREF

  *a3 = 1;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), &SRWLock);
  v6 = *((_QWORD *)this + 12);
  if ( !v6 )
  {
    v11 = -2147019873;
    v13 = 65LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)v11,
      savedregs);
    goto LABEL_8;
  }
  if ( !a2 )
  {
    v11 = -2147024809;
    v13 = 66LL;
    goto LABEL_14;
  }
  v17 = 0LL;
  v7 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
  if ( v7(v6, a2, &v17) < 0 )
  {
    *a3 = 1;
    v11 = 0;
  }
  else
  {
    v16 = 0LL;
    v8 = *((_QWORD *)this + 7);
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 360LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    v10 = v9(v8, &v16);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
        (const char *)(unsigned int)v10,
        savedregs);
    }
    else
    {
      *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 9) + 24LL))(
              *((_QWORD *)this + 9),
              v17,
              v16);
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
LABEL_8:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v11;
}
