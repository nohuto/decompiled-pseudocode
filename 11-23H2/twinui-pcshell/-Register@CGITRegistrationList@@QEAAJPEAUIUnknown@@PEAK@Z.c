/*
 * XREFs of ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18013136C
 * Callers:
 *     ?RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x180130540 (-RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBIL.c)
 *     ?RegisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJPEAUIWindowSnappingEvents@@PEAK@Z @ 0x180130580 (-RegisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJPEAUIWindowSnappingEvents@@PEAK@Z.c)
 *     ?Register@BroadcastDVRComponent@@UEAAJPEAUIGameFocusEvents@@PEAK@Z @ 0x1801311E0 (-Register@BroadcastDVRComponent@@UEAAJPEAUIGameFocusEvents@@PEAK@Z.c)
 *     ?Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z @ 0x180131200 (-Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z.c)
 *     ?RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@Z @ 0x180131220 (-RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeE.c)
 *     ?RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerNotification@@PEAK@Z @ 0x180131250 (-RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerN.c)
 *     ?Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@Z @ 0x180131280 (-Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@P.c)
 *     ?RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x1802E23E0 (-RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@.c)
 *     ?Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z @ 0x1803F03F0 (-Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z.c)
 *     ?RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@Z @ 0x1804F4140 (-RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroup.c)
 *     ?RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z @ 0x180571310 (-RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z.c)
 *     ?RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x180689950 (-RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJPEAUIApplicationViewC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800EE794 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ??$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIGITCookieObject@@$$QEAPEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Z @ 0x18013158C (--$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUn.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     CoCreateInstance_0 @ 0x1801C7A95 (CoCreateInstance_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGITRegistrationList::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  RTL_SRWLOCK *v3; // r14
  RTL_SRWLOCK v6; // rbx
  PVOID v7; // rax
  int v8; // edi
  void *v9; // r8
  PVOID v10; // rdx
  _QWORD *v11; // rdx
  LPVOID v13; // rbx
  LPVOID Ptr; // [rsp+60h] [rbp+30h] BYREF
  struct IUnknown *v15; // [rsp+68h] [rbp+38h] BYREF
  LPVOID ppv; // [rsp+70h] [rbp+40h] BYREF

  v15 = a2;
  *a3 = 0;
  v3 = this + 1;
  _Platform_AcquireSRWLockExclusive(this + 1);
  v6.Ptr = this->Ptr;
  ReleaseSRWLockExclusive_0(v3);
  if ( v6.Ptr )
    goto LABEL_2;
  ppv = 0LL;
  v8 = CoCreateInstance_0(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
  if ( v8 >= 0 )
  {
    _Platform_AcquireSRWLockExclusive(v3);
    if ( !this->Ptr )
    {
      v13 = ppv;
      if ( ppv )
      {
        Ptr = ppv;
        Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&Ptr);
        Ptr = this->Ptr;
        this->Ptr = v13;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&Ptr);
      }
    }
    ReleaseSRWLockExclusive_0(v3);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppv);
  if ( v8 >= 0 )
  {
LABEL_2:
    v7 = this->Ptr;
    Ptr = 0LL;
    ppv = v7;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&Ptr);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CGITCookieObject,IGITCookieObject,IGlobalInterfaceTable *,IUnknown * &>(
           &Ptr,
           &ppv,
           &v15);
    if ( v8 >= 0 )
    {
      _Platform_AcquireSRWLockExclusive(v3);
      v10 = this[3].Ptr;
      v8 = 0;
      if ( v10 != this[5].Ptr
        || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                   (__int64)&this[2],
                   (unsigned __int64)v10 + 1,
                   v9),
            v8 >= 0) )
      {
        v11 = (char *)this[2].Ptr + 8 * (__int64)this[3].Ptr++;
        if ( v11 )
        {
          *v11 = Ptr;
          if ( Ptr )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
        }
      }
      ReleaseSRWLockExclusive_0(v3);
      if ( v8 >= 0 )
        *a3 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Ptr + 32LL))(Ptr);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&Ptr);
  }
  return (unsigned int)v8;
}
