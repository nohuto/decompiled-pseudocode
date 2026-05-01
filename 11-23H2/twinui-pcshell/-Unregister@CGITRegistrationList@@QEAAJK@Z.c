/*
 * XREFs of ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x18017D7A0
 * Callers:
 *     ?UnregisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJK@Z @ 0x18017D6C0 (-UnregisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJK@Z.c)
 *     ?Unregister@BroadcastDVRComponent@@UEAAJK@Z @ 0x18017D6F0 (-Unregister@BroadcastDVRComponent@@UEAAJK@Z.c)
 *     ?Unregister@FullScreenPositioner@@UEAAJK@Z @ 0x18017D710 (-Unregister@FullScreenPositioner@@UEAAJK@Z.c)
 *     ?UnregisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJK@Z @ 0x18017D730 (-UnregisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJK@Z.c)
 *     ?UnregisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJK@Z @ 0x18017D760 (-UnregisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJK@Z.c)
 *     ?Unregister@MultitaskingViewVisibilityService@@UEAAJK@Z @ 0x18017D790 (-Unregister@MultitaskingViewVisibilityService@@UEAAJK@Z.c)
 *     ?UnregisterBeginEndListener@ObservableObjectArray@@UEAAJK@Z @ 0x1802E2420 (-UnregisterBeginEndListener@ObservableObjectArray@@UEAAJK@Z.c)
 *     ?Unregister@CFullScreenManager@@UEAAJK@Z @ 0x1803F16E0 (-Unregister@CFullScreenManager@@UEAAJK@Z.c)
 *     ?UnregisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJK@Z @ 0x1804F41F0 (-UnregisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJK@Z.c)
 *     ?UnregisterListener@ObservableObjectArray@@UEAAJK@Z @ 0x180571350 (-UnregisterListener@ObservableObjectArray@@UEAAJK@Z.c)
 *     ?UnregisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJK@Z @ 0x18059EB80 (-UnregisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJK@Z @ 0x180689CA0 (-UnregisterForApplicationViewChanges@ApplicationViewFilteredCollection@@UEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1801C7914 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1801C792C (__Platform_AcquireSRWLockExclusive.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGITRegistrationList::Unregister(RTL_SRWLOCK *this, int a2)
{
  unsigned int v4; // ebx
  PVOID Ptr; // rbp
  void *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  _BYTE *v9; // r8
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = -2147024809;
  _Platform_AcquireSRWLockExclusive(this + 1);
  Ptr = this[3].Ptr;
  v6 = 0LL;
  if ( Ptr )
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)this[2].Ptr + (_QWORD)v6);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7) == a2 )
        break;
      v6 = (char *)v6 + 1;
      if ( v6 >= Ptr )
        goto LABEL_10;
    }
    v8 = *((_QWORD *)this[2].Ptr + (_QWORD)v6);
    if ( v8 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this[2].Ptr + (_QWORD)v6));
      v12 = 0LL;
      v11 = v8;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    }
    if ( v6 < this[3].Ptr )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this[2].Ptr + (_QWORD)v6);
      v9 = this[3].Ptr;
      if ( v6 != v9 - 1 )
        memmove_0(
          (char *)this[2].Ptr + 8 * (_QWORD)v6,
          (char *)this[2].Ptr + 8 * (_QWORD)v6 + 8,
          8 * (v9 - (_BYTE *)v6) - 8);
      --this[3].Ptr;
    }
    v4 = 0;
  }
LABEL_10:
  ReleaseSRWLockExclusive_0(this + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return v4;
}
