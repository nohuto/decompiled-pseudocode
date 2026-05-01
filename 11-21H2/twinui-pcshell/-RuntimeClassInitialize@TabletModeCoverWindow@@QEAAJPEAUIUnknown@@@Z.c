/*
 * XREFs of ?RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z @ 0x1800D83E4
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x18014F9BC (--$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?CreateCoverWindow@TabletModeCoverWindow@@AEAAJXZ @ 0x1800D50A4 (-CreateCoverWindow@TabletModeCoverWindow@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeCoverWindow::RuntimeClassInitialize(TabletModeCoverWindow *this, IUnknown *punk)
{
  int Service; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v9, (RTL_SRWLOCK *)this + 14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  Service = IUnknown_QueryService(
              punk,
              &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
              &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
              (void **)this + 18);
  v5 = Service;
  if ( Service < 0 )
  {
    v7 = 174LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)Service);
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  Service = IUnknown_QueryService(
              punk,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              (void **)this + 19);
  v5 = Service;
  if ( Service < 0 )
  {
    v7 = 175LL;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  Service = IUnknown_QueryService(
              punk,
              &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
              &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
              (void **)this + 22);
  v5 = Service;
  if ( Service < 0 )
  {
    v7 = 176LL;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 24);
  Service = IUnknown_QueryService(
              punk,
              &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
              &GUID_3873e6f1_a2b6_443a_92f3_dc3923dc6f54,
              (void **)this + 24);
  v5 = Service;
  if ( Service < 0 )
  {
    v7 = 177LL;
    goto LABEL_13;
  }
  Service = TabletModeCoverWindow::CreateCoverWindow((HWND *)this);
  v5 = Service;
  if ( Service < 0 )
  {
    v7 = 178LL;
    goto LABEL_13;
  }
  PostMessageW(*((HWND *)this + 13), 0x401u, 0LL, 0LL);
  v5 = 0;
LABEL_7:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
  return v5;
}
