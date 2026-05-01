/*
 * XREFs of ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804B41A8
 * Callers:
 *     ?PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1804B59D0 (-PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 *     ?PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1804B5A60 (-PeopleShareViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D028 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1804B3284 (-FindPendingViewByHwnd@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1804B57D8 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B5C3C (-RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PeoplePaneViewManager::HandleViewReady(RTL_SRWLOCK *this, int a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rdi
  HWND v7; // rbx
  int v8; // eax
  _QWORD *v9; // r8
  PVOID Ptr; // rdi
  __int64 (__fastcall *v11)(PVOID, struct IApplicationView **); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  _QWORD *v14; // r8
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct IApplicationView *v18; // [rsp+50h] [rbp+30h] BYREF
  struct IApplicationView *v19; // [rsp+60h] [rbp+40h] BYREF
  RTL_SRWLOCK *v20; // [rsp+68h] [rbp+48h]

  v6 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  *(_BYTE *)(*(_QWORD *)a3 + 56LL) = 1;
  *(_DWORD *)(*(_QWORD *)a3 + 40LL) = a2;
  v7 = (HWND)~a2;
  *(_QWORD *)(*(_QWORD *)a3 + 48LL) = v7;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*(_QWORD *)a3 + 72LL));
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v18);
  if ( (int)PeoplePaneViewManager::FindPendingViewByHwnd(this, v7, &v18) < 0 )
    goto LABEL_19;
  AcquireSRWLockExclusive(this + 20);
  v20 = this + 20;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(*(_QWORD *)a3 + 32LL), (__int64 *)&v18);
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a3 + 32LL) + 56LL))(*(_QWORD *)(*(_QWORD *)a3 + 32LL));
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x368,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
  v9 = *(_QWORD **)a3;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 24LL) >= 8uLL )
    v9 = (_QWORD *)*v9;
  PeoplePaneViewManager::NotifyListeners(this, 0LL, v9, *(unsigned int *)(*(_QWORD *)a3 + 40LL));
  v19 = 0LL;
  Ptr = this[43].Ptr;
  v11 = *(__int64 (__fastcall **)(PVOID, struct IApplicationView **))(*(_QWORD *)Ptr + 72LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
  v12 = v11(Ptr, &v19);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( v19 == v18 )
    {
      v14 = *(_QWORD **)a3;
      if ( *(_QWORD *)(*(_QWORD *)a3 + 24LL) >= 8uLL )
        v14 = (_QWORD *)*v14;
      PeoplePaneViewManager::NotifyListeners(this, 2LL, v14, *(unsigned int *)(*(_QWORD *)a3 + 40LL));
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
    if ( this != (RTL_SRWLOCK *)-160LL )
      ReleaseSRWLockExclusive(this + 20);
    v15 = PeoplePaneViewManager::RemovePendingView((PeoplePaneViewManager *)this, v18);
    v13 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x377,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_20;
    }
LABEL_19:
    v13 = 0;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x370,
    (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
  if ( this != (RTL_SRWLOCK *)-160LL )
    ReleaseSRWLockExclusive(this + 20);
LABEL_20:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v18);
  return v13;
}
