/*
 * XREFs of ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1800F41B8
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800F40E0 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x1800F4330 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800F43A8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModeCoverWindow::InitializeInstance(TabletModeCoverWindow *this)
{
  char v2; // r14
  void (__fastcall *v3)(TabletModeCoverWindow *, GUID *, IUnknown **); // rbx
  HRESULT Service; // ebx
  int v5; // eax
  HWND *v6; // rdi
  TabletModeHelpers *v7; // rcx
  bool IsTabletMode; // al
  int v9; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-30h]
  int v14; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  RTL_SRWLOCK *v16; // [rsp+90h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+98h] [rbp+48h] BYREF
  RTL_SRWLOCK *v18; // [rsp+A0h] [rbp+50h] BYREF

  LODWORD(v16) = 0;
  v2 = 1;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v18, (RTL_SRWLOCK *)this + 14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 17);
  punk = 0LL;
  LODWORD(v16) = 2;
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
    v11 = (unsigned int)Service;
    v12 = 394LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)v11,
      v13);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
    v6 = (HWND *)((char *)this + 104);
    goto LABEL_5;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 17) + 88LL))(
         *((_QWORD *)this + 17),
         (char *)this + 204);
  Service = v5;
  if ( v5 < 0 )
  {
    v11 = (unsigned int)v5;
    v12 = 395LL;
    goto LABEL_10;
  }
  v6 = (HWND *)((char *)this + 104);
  SetWindowPos(
    *((HWND *)this + 13),
    0LL,
    *((_DWORD *)this + 51),
    *((_DWORD *)this + 52),
    *((_DWORD *)this + 53) - *((_DWORD *)this + 51),
    *((_DWORD *)this + 54) - *((_DWORD *)this + 52),
    0x14u);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
  IsTabletMode = TabletModeHelpers::IsTabletMode(v7);
  v9 = TabletModeCoverWindow::TabletModeChanged((TabletModeCoverWindow *)((char *)this + 80), IsTabletMode);
  Service = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x190,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)v9,
      v14);
  }
  else
  {
    Service = 0;
    v2 = 0;
  }
LABEL_5:
  if ( v2 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v16, (RTL_SRWLOCK *)this + 14);
    *((_BYTE *)this + 200) = 0;
    ShowWindow(*v6, 0);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v16);
  }
  return (unsigned int)Service;
}
