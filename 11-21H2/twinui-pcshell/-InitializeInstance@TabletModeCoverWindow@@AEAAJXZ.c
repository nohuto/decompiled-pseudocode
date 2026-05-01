/*
 * XREFs of ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x180069214
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180069140 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x180069380 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModeCoverWindow::InitializeInstance(TabletModeCoverWindow *this)
{
  char v2; // si
  void (__fastcall *v3)(TabletModeCoverWindow *, GUID *, IUnknown **); // rbx
  HRESULT Service; // ebx
  int v5; // eax
  TabletModeHelpers *v6; // rcx
  bool IsTabletMode; // al
  int v8; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-30h]
  int v13; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v15; // [rsp+80h] [rbp+30h] BYREF
  IUnknown *punk; // [rsp+88h] [rbp+38h] BYREF
  char v17; // [rsp+90h] [rbp+40h] BYREF

  v15 = 0;
  v2 = 1;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v17, (char *)this + 112);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 17);
  punk = 0LL;
  v15 = 2;
  v3 = *(void (__fastcall **)(TabletModeCoverWindow *, GUID *, IUnknown **))(*(_QWORD *)this + 32LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  v3(this, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  Service = IUnknown_QueryService(
              punk,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              (void **)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
  if ( Service < 0 )
  {
    v10 = (unsigned int)Service;
    v11 = 394LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)v10,
      v12);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v17);
    goto LABEL_5;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 17) + 88LL))(
         *((_QWORD *)this + 17),
         (char *)this + 204);
  Service = v5;
  if ( v5 < 0 )
  {
    v10 = (unsigned int)v5;
    v11 = 395LL;
    goto LABEL_10;
  }
  SetWindowPos(
    *((HWND *)this + 13),
    0LL,
    *((_DWORD *)this + 51),
    *((_DWORD *)this + 52),
    *((_DWORD *)this + 53) - *((_DWORD *)this + 51),
    *((_DWORD *)this + 54) - *((_DWORD *)this + 52),
    0x14u);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v17);
  IsTabletMode = TabletModeHelpers::IsTabletMode(v6);
  v8 = TabletModeCoverWindow::TabletModeChanged((TabletModeCoverWindow *)((char *)this + 80), IsTabletMode);
  Service = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)v8,
      v13);
  }
  else
  {
    Service = 0;
    v2 = 0;
  }
LABEL_5:
  if ( v2 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v15, (char *)this + 112);
    *((_BYTE *)this + 200) = 0;
    ShowWindow(*((HWND *)this + 13), 0);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v15);
  }
  return (unsigned int)Service;
}
