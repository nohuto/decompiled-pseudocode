/*
 * XREFs of ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B2890
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800F6500 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1800528C8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1804B1770 (--$_Emplace_reallocate@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIApplic.c)
 *     ?AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B2740 (-AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1804B33FC (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z @ 0x1804B3F90 (-GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z.c)
 *     ?IsApplicationViewAlreadyStashed@PeoplePaneViewManager@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804B43EC (-IsApplicationViewAlreadyStashed@PeoplePaneViewManager@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsPlaceModeEnabled@@YA_NXZ @ 0x1804B4584 (-IsPlaceModeEnabled@@YA_NXZ.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1804B57D8 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PeoplePaneViewManager::AddedApplicationView(
        PeoplePaneViewManager *this,
        struct IApplicationView *a2)
{
  std::_Ref_count_base *v4; // rbx
  __int64 v5; // r9
  std::_Ref_count_base *v6; // r12
  int v7; // eax
  int TabletModePositioner; // eax
  unsigned int v9; // ebx
  struct ITabletModePositioner *v10; // rbx
  __int64 (__fastcall *v11)(struct ITabletModePositioner *, struct IApplicationView **); // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, GUID *, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  RTL_SRWLOCK *v18; // rcx
  __int64 *v19; // rdx
  struct ITabletModePositioner *v21[2]; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v22[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IApplicationView *v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  *(_OWORD *)v22 = 0LL;
  if ( (int)PeoplePaneViewManager::FindViewInfoByApplicationView(this, a2, v22) < 0
    || (v4 = v22[0], *((_BYTE *)v22[0] + 56) != 1) )
  {
    if ( PeoplePaneViewManager::IsApplicationViewAlreadyStashed(this, a2) )
      goto LABEL_41;
    AcquireSRWLockExclusive((PSRWLOCK)this + 20);
    v25 = (__int64)this + 160;
    v24 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
    v19 = (__int64 *)*((_QWORD *)this + 22);
    if ( v19 == *((__int64 **)this + 23) )
    {
      std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IApplicationView>>(
        (__int64 *)this + 21,
        (__int64)v19,
        (__int64 *)&v24);
    }
    else
    {
      *v19 = 0LL;
      if ( v19 != (__int64 *)&v24 )
      {
        *v19 = (__int64)a2;
        v24 = 0LL;
      }
      *((_QWORD *)this + 22) += 8LL;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
    if ( this == (PeoplePaneViewManager *)-160LL )
      goto LABEL_41;
    v18 = (RTL_SRWLOCK *)((char *)this + 160);
    goto LABEL_40;
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 16);
  v21[1] = (PeoplePaneViewManager *)((char *)this + 128);
  v5 = *((unsigned int *)v4 + 10);
  v6 = v4;
  if ( *((_QWORD *)v4 + 3) >= 8uLL )
    v4 = *(std::_Ref_count_base **)v4;
  PeoplePaneViewManager::NotifyListeners(this, 0LL, v4, v5);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)v6 + 4, (__int64)a2);
  if ( !*((_DWORD *)this + 52) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 4) + 56LL))(*((_QWORD *)v6 + 4));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x24E,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v7);
    goto LABEL_22;
  }
  v21[0] = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v21);
  TabletModePositioner = PeoplePaneViewManager::GetTabletModePositioner(this, v21);
  v9 = TabletModePositioner;
  if ( TabletModePositioner < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x253,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)TabletModePositioner);
    goto LABEL_30;
  }
  v24 = 0LL;
  v10 = v21[0];
  v11 = *(__int64 (__fastcall **)(struct ITabletModePositioner *, struct IApplicationView **))(*(_QWORD *)v21[0] + 72LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
  v12 = v11(v10, &v24);
  v9 = v12;
  if ( v12 < 0 )
  {
    v13 = 598LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_29;
  }
  if ( (*(unsigned int (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)v24 + 80LL))(v24, 1LL) != 2
    || (*(unsigned int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v24 + 88LL))(v24)
    || !IsPlaceModeEnabled() )
  {
    v12 = PeoplePaneViewManager::AddPeoplePaneToTabletModeLayout(this, *((struct IApplicationView **)v6 + 4));
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 610LL;
      goto LABEL_28;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 4) + 56LL))(*((_QWORD *)v6 + 4));
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 611LL;
      goto LABEL_28;
    }
    goto LABEL_21;
  }
  v25 = 0LL;
  v14 = *((_QWORD *)this + 24);
  v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v14 + 72LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
  v16 = v15(v14, 0LL, &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3, &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3, &v25);
  v9 = v16;
  if ( v16 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IApplicationView *, _QWORD))(*(_QWORD *)v25 + 56LL))(
            v25,
            a2,
            v24,
            0LL);
    v9 = v16;
    if ( v16 < 0 )
    {
      v17 = 606LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
LABEL_21:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v21);
LABEL_22:
    if ( this == (PeoplePaneViewManager *)-128LL )
    {
LABEL_41:
      v9 = 0;
      goto LABEL_42;
    }
    v18 = (RTL_SRWLOCK *)((char *)this + 128);
LABEL_40:
    ReleaseSRWLockExclusive(v18);
    goto LABEL_41;
  }
  v17 = 605LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
LABEL_29:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
LABEL_30:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v21);
  if ( this != (PeoplePaneViewManager *)-128LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 16);
LABEL_42:
  if ( v22[1] )
    std::_Ref_count_base::_Decref(v22[1]);
  return v9;
}
