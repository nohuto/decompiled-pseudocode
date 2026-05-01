/*
 * XREFs of ?GetWindowDesktopId@VirtualDesktopsApi@@UEAAJPEAUHWND__@@PEAU_GUID@@@Z @ 0x18003A020
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopsApi::GetWindowDesktopId(VirtualDesktopsApi *this, HWND a2, struct _GUID *a3)
{
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v9; // ebx
  int v10; // eax
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  *a3 = GUID_NULL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), &SRWLock);
  v6 = *((_QWORD *)this + 12);
  if ( !v6 )
  {
    v9 = -2147019873;
    v12 = 90LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)v9,
      v13);
    goto LABEL_7;
  }
  if ( !a2 )
  {
    v9 = -2147024809;
    v12 = 91LL;
    goto LABEL_12;
  }
  v15 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v6 + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v15);
  v9 = v7(v6, a2, AddressOf);
  if ( v9 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v15 + 200LL))(v15, a3);
    v9 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
        (const char *)(unsigned int)v10,
        v13);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
LABEL_7:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return (unsigned int)v9;
}
