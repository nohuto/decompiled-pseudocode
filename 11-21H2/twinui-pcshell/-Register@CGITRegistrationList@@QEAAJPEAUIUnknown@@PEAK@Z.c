/*
 * XREFs of ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1800B76AC
 * Callers:
 *     ?RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x1800B64D0 (-RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBIL.c)
 *     ?RegisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJPEAUIWindowSnappingEvents@@PEAK@Z @ 0x1800B7510 (-RegisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJPEAUIWindowSnappingEvents@@PEAK@Z.c)
 *     ?Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z @ 0x1800B7540 (-Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z.c)
 *     ?RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerNotification@@PEAK@Z @ 0x1800B7560 (-RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerN.c)
 *     ?RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@Z @ 0x1800B7590 (-RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeE.c)
 *     ?Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@Z @ 0x1800B75C0 (-Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@P.c)
 *     ?RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x180233D50 (-RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@.c)
 *     ?Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z @ 0x180322CE0 (-Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z.c)
 *     ?RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@Z @ 0x18041B360 (-RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroup.c)
 *     ?RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z @ 0x1804B6AC0 (-RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z.c)
 *     ?RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1805B6570 (-RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationViewC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ILaunchTargetMonitor@@QEAA@XZ @ 0x1800A4440 (--0ILaunchTargetMonitor@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800B79C0 (--4-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180137CCC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPo.c)
 *     ??$As@UIMarshal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMarshal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801543DC (--$As@UIMarshal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIMarshal@@@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x180189314 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18018932C (__Platform_AcquireSRWLockExclusive.c)
 *     CoCreateInstance_0 @ 0x180189A77 (CoCreateInstance_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCGITCallbackArray@@@WRL@Microsoft@@QEAA@XZ @ 0x180321BD0 (--1-$ComPtr@VCGITCallbackArray@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCGITCookieObject@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1805F3478 (--1-$MakeAllocator@VCGITCookieObject@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CGITRegistrationList::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  RTL_SRWLOCK *v5; // rsi
  RTL_SRWLOCK v6; // rbx
  RTL_SRWLOCK v7; // r15
  ILaunchTargetMonitor *v8; // rax
  ILaunchTargetMonitor *v9; // rdi
  __int64 *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  HRESULT v14; // ebx
  char *Ptr; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  ILaunchTargetMonitor *v19; // [rsp+30h] [rbp-28h] BYREF
  ILaunchTargetMonitor *v20; // [rsp+38h] [rbp-20h] BYREF
  __int64 v21; // [rsp+40h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  __int64 v24; // [rsp+A0h] [rbp+48h] BYREF
  struct IUnknown *v25; // [rsp+A8h] [rbp+50h]
  LPVOID ppv; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+60h] BYREF

  v25 = a2;
  *a3 = 0;
  v5 = this + 1;
  _Platform_AcquireSRWLockExclusive(this + 1);
  v6.Ptr = this->Ptr;
  ReleaseSRWLockExclusive_0(v5);
  if ( v6.Ptr )
    goto LABEL_2;
  ppv = 0LL;
  v14 = CoCreateInstance_0(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
  if ( v14 >= 0 )
  {
    _Platform_AcquireSRWLockExclusive(v5);
    if ( !this->Ptr )
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::operator=(this, &ppv);
    ReleaseSRWLockExclusive_0(v5);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppv);
  if ( v14 >= 0 )
  {
LABEL_2:
    v24 = 0LL;
    v7.Ptr = this->Ptr;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    v24 = 0LL;
    v8 = (ILaunchTargetMonitor *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    v19 = v8;
    if ( v8 )
    {
      ILaunchTargetMonitor::ILaunchTargetMonitor(v8);
      *((_QWORD *)v9 + 1) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_QWORD *)v9 + 4) = 0LL;
      v27 = 0LL;
      v10 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v27, &v21);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v10);
      if ( CoCreateFreeThreadedMarshaler(0LL, (LPUNKNOWN *)v10) >= 0 )
      {
        v11 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)v9 + 32, &v22);
        Microsoft::WRL::ComPtr<IUnknown>::As<IMarshal>(&v27, *v11);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      *((_DWORD *)v9 + 11) = 1;
      *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IGITCookieObject,Microsoft::WRL::FtmBase>::`vftable'{for `IGITCookieObject'};
      *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IGITCookieObject,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v9 = &CGITCookieObject::`vftable'{for `IGITCookieObject'};
      *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IGITCookieObject,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_DWORD *)v9 + 12) = 0;
      *((_QWORD *)v9 + 7) = 0LL;
      v20 = v9;
      v19 = 0LL;
      v12 = 0LL;
      if ( v7.Ptr )
      {
        (*(void (__fastcall **)(RTL_SRWLOCK))(*(_QWORD *)v7.Ptr + 8LL))(v7);
        ppv = (LPVOID)*((_QWORD *)v9 + 7);
        *((RTL_SRWLOCK *)v9 + 7) = v7;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppv);
        v12 = *((_QWORD *)v9 + 7);
      }
      v13 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, GUID *, __int64))(*(_QWORD *)v12 + 24LL))(
              v12,
              v25,
              &GUID_00000000_0000_0000_c000_000000000046,
              (__int64)v9 + 48);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"shell\\lib\\gitreglist.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<CGITCallbackArray>::~ComPtr<CGITCallbackArray>(&v20);
        Microsoft::WRL::Details::MakeAllocator<CGITCookieObject>::~MakeAllocator<CGITCookieObject>(&v19);
      }
      else
      {
        v14 = (**(__int64 (__fastcall ***)(ILaunchTargetMonitor *, GUID *, __int64 *))v9)(
                v9,
                &GUID_243c720f_5a91_4b39_88bb_c16e6ec1d313,
                &v24);
        (*(void (__fastcall **)(ILaunchTargetMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
        if ( v14 >= 0 )
        {
          _Platform_AcquireSRWLockExclusive(v5);
          v14 = 0;
          Ptr = (char *)this[3].Ptr;
          if ( Ptr != this[5].Ptr
            || (v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>>::_EnsureCapacity(
                        &this[2],
                        Ptr + 1),
                v14 >= 0) )
          {
            v16 = (char *)this[2].Ptr + 8 * (__int64)this[3].Ptr++;
            if ( v16 )
            {
              v17 = v24;
              *v16 = v24;
              if ( v17 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
            }
          }
          ReleaseSRWLockExclusive_0(v5);
          if ( v14 >= 0 )
            *a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
        }
      }
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<CGITCookieObject>::~MakeAllocator<CGITCookieObject>(&v19);
      v14 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  }
  return (unsigned int)v14;
}
