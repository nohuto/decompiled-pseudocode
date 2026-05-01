/*
 * XREFs of ?IsWindowOnCurrentVirtualDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@PEAH@Z @ 0x180024090
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopsApi::IsWindowOnCurrentVirtualDesktop(VirtualDesktopsApi *this, HWND a2, int *a3)
{
  __int64 v6; // r14
  int (__fastcall *v7)(__int64, HWND, __int64); // rbx
  __int64 AddressOf; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 1;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), &SRWLock);
  v6 = *((_QWORD *)this + 12);
  if ( !v6 )
  {
    v12 = -2147019873;
    v14 = 65LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)v12,
      v15);
    goto LABEL_8;
  }
  if ( !a2 )
  {
    v12 = -2147024809;
    v14 = 66LL;
    goto LABEL_14;
  }
  v18 = 0LL;
  v7 = *(int (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)v6 + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v18);
  if ( v7(v6, a2, AddressOf) < 0 )
  {
    *a3 = 1;
    v12 = 0;
  }
  else
  {
    v17 = 0LL;
    v9 = *((_QWORD *)this + 7);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 312LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    v11 = v10(v9, 0LL, &v17);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
        (const char *)(unsigned int)v11,
        v15);
    }
    else
    {
      *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 9) + 24LL))(
              *((_QWORD *)this + 9),
              v18,
              v17);
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
LABEL_8:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v12;
}
