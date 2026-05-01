/*
 * XREFs of ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D5CB4
 * Callers:
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800F2460 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x1801712D0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1803D4A08 (--$_Emplace_reallocate@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIApplic.c)
 *     ?AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D5B64 (-AddPeoplePaneToTabletModeLayout@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1803D672C (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z @ 0x1803D72B0 (-GetTabletModePositioner@PeoplePaneViewManager@@AEAAJPEAPEAUITabletModePositioner@@@Z.c)
 *     ?IsApplicationViewAlreadyStashed@PeoplePaneViewManager@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803D76DC (-IsApplicationViewAlreadyStashed@PeoplePaneViewManager@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsPlaceModeEnabled@@YA_NXZ @ 0x1803D7864 (-IsPlaceModeEnabled@@YA_NXZ.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1803D8A94 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PeoplePaneViewManager::AddedApplicationView(
        PeoplePaneViewManager *this,
        struct IApplicationView *a2)
{
  std::_Ref_count_base *v4; // rbx
  std::_Ref_count_base *v5; // r8
  struct IApplicationView **v6; // r15
  int v7; // eax
  int TabletModePositioner; // eax
  unsigned int v9; // ebx
  struct ITabletModePositioner *v10; // rbx
  __int64 (__fastcall *v11)(struct ITabletModePositioner *, struct IApplicationView **); // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, GUID *, RTL_SRWLOCK **); // rbx
  int v16; // eax
  __int64 v17; // rdx
  RTL_SRWLOCK **v18; // rcx
  __int64 *v19; // rdx
  struct ITabletModePositioner *v21; // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK *v22; // [rsp+38h] [rbp-18h] BYREF
  std::_Ref_count_base *v23[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IApplicationView *v25; // [rsp+90h] [rbp+40h] BYREF
  RTL_SRWLOCK *v26; // [rsp+98h] [rbp+48h] BYREF

  *(_OWORD *)v23 = 0LL;
  if ( (int)PeoplePaneViewManager::FindViewInfoByApplicationView(this, a2, v23) >= 0 )
  {
    v4 = v23[0];
    if ( *((_BYTE *)v23[0] + 56) == 1 )
    {
      wil::AcquireSRWLockExclusive(&v22, (RTL_SRWLOCK *)this + 16);
      v5 = v4;
      if ( *((_QWORD *)v4 + 3) >= 8uLL )
        v5 = *(std::_Ref_count_base **)v4;
      PeoplePaneViewManager::NotifyListeners(this, 0LL, v5, *((unsigned int *)v4 + 10));
      v6 = (struct IApplicationView **)((char *)v4 + 32);
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)v4 + 4, (__int64)a2);
      if ( !*((_DWORD *)this + 52) )
      {
        v7 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)*v6 + 56LL))(*v6);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x24E,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v7);
        goto LABEL_22;
      }
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
      TabletModePositioner = PeoplePaneViewManager::GetTabletModePositioner(this, &v21);
      v9 = TabletModePositioner;
      if ( TabletModePositioner < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x253,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)TabletModePositioner);
LABEL_29:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v22);
        goto LABEL_39;
      }
      v25 = 0LL;
      v10 = v21;
      v11 = *(__int64 (__fastcall **)(struct ITabletModePositioner *, struct IApplicationView **))(*(_QWORD *)v21 + 72LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
      v12 = v11(v10, &v25);
      v9 = v12;
      if ( v12 < 0 )
      {
        v13 = 598LL;
LABEL_27:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_28;
      }
      if ( (*(unsigned int (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)v25 + 80LL))(v25, 1LL) == 2
        && !(*(unsigned int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v25 + 88LL))(v25)
        && IsPlaceModeEnabled() )
      {
        v26 = 0LL;
        v14 = *((_QWORD *)this + 24);
        v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, RTL_SRWLOCK **))(*(_QWORD *)v14 + 72LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
        v16 = v15(
                v14,
                0LL,
                &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
                &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
                &v26);
        v9 = v16;
        if ( v16 < 0 )
        {
          v17 = 605LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v16);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
LABEL_28:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
          goto LABEL_29;
        }
        v16 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, struct IApplicationView *, struct IApplicationView *, _QWORD))v26->Ptr
               + 7))(
                v26,
                a2,
                v25,
                0LL);
        v9 = v16;
        if ( v16 < 0 )
        {
          v17 = 606LL;
          goto LABEL_19;
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
      }
      else
      {
        v12 = PeoplePaneViewManager::AddPeoplePaneToTabletModeLayout(this, *v6);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 610LL;
          goto LABEL_27;
        }
        v12 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)*v6 + 56LL))(*v6);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 611LL;
          goto LABEL_27;
        }
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
LABEL_22:
      v18 = &v22;
LABEL_37:
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v18);
      goto LABEL_38;
    }
  }
  if ( !PeoplePaneViewManager::IsApplicationViewAlreadyStashed(this, a2) )
  {
    wil::AcquireSRWLockExclusive(&v26, (RTL_SRWLOCK *)this + 20);
    v25 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    v19 = (__int64 *)*((_QWORD *)this + 22);
    if ( v19 == *((__int64 **)this + 23) )
    {
      std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IApplicationView>>(
        (__int64 *)this + 21,
        (__int64)v19,
        (__int64 *)&v25);
    }
    else
    {
      *v19 = 0LL;
      if ( v19 != (__int64 *)&v25 )
      {
        *v19 = (__int64)a2;
        v25 = 0LL;
      }
      *((_QWORD *)this + 22) += 8LL;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v25);
    v18 = &v26;
    goto LABEL_37;
  }
LABEL_38:
  v9 = 0;
LABEL_39:
  if ( v23[1] )
    std::_Ref_count_base::_Decref(v23[1]);
  return v9;
}
