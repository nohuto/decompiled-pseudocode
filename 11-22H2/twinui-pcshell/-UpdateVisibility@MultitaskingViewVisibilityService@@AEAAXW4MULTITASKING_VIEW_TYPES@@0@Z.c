/*
 * XREFs of ?UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z @ 0x180055EA4
 * Callers:
 *     ?ViewShown@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180055E70 (-ViewShown@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?ViewDismissed@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180055E90 (-ViewDismissed@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180055F54 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___ @ 0x180055FA8 (Windows--Internal--ComTaskPool--QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MultitaskingViewVisibilityService::UpdateVisibility(_DWORD *a1, int a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct IObjectArray *v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]
  bool v11; // [rsp+2Ch] [rbp-4h]
  struct IObjectArray *v12; // [rsp+50h] [rbp+20h] BYREF
  char v13; // [rsp+68h] [rbp+38h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v13, a1 + 14);
  a1[16] = a3 & a2 | a1[16] & ~a3;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  if ( (int)CGITRegistrationList::GetCallbackArray((CGITRegistrationList *)(a1 + 18), &v12) >= 0 )
  {
    v6 = a1[16];
    v9 = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    v10 = a3;
    v11 = (v6 & a3) != 0;
    Windows::Internal::ComTaskPool::QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___(
      v8,
      v7,
      (unsigned int)a1[30],
      &v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v13);
}
