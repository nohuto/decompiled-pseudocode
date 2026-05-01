/*
 * XREFs of ?GetWindowDesktopId@VirtualDesktopsApi@@UEAAJPEAUHWND__@@PEAU_GUID@@@Z @ 0x180069C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopsApi::GetWindowDesktopId(VirtualDesktopsApi *this, HWND a2, struct _GUID *a3)
{
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, HWND, __int64 *); // rbx
  int v8; // ebx
  int v9; // eax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  *a3 = GUID_NULL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), &SRWLock);
  v6 = *((_QWORD *)this + 12);
  if ( !v6 )
  {
    v8 = -2147019873;
    v11 = 89LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)v8,
      v12);
    goto LABEL_7;
  }
  if ( !a2 )
  {
    v8 = -2147024809;
    v11 = 90LL;
    goto LABEL_12;
  }
  v14 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  v8 = v7(v6, a2, &v14);
  if ( v8 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v14 + 200LL))(v14, a3);
    v8 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
        (const char *)(unsigned int)v9,
        v12);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
LABEL_7:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return (unsigned int)v8;
}
