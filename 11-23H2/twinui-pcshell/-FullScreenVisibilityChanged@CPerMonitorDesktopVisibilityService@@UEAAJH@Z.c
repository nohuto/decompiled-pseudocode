/*
 * XREFs of ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x18059E950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180055F54 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8f3900148952faa68610648471a8cff1___ @ 0x18059E690 (Windows--Internal--ComTaskPool--QueueTask__lambda_8f3900148952faa68610648471a8cff1___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPerMonitorDesktopVisibilityService::FullScreenVisibilityChanged(
        CPerMonitorDesktopVisibilityService *this,
        int a2)
{
  int v4; // r14d
  int CallbackArray; // eax
  int v6; // ebx
  void (__fastcall *v7)(char *, GUID *, IUnknown **); // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  IUnknown *punk; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v13; // [rsp+28h] [rbp-28h] BYREF
  struct IObjectArray *v14; // [rsp+30h] [rbp-20h] BYREF
  int v15; // [rsp+38h] [rbp-18h]
  __int64 v16[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void *ppvOut; // [rsp+90h] [rbp+40h] BYREF
  struct IObjectArray *v19; // [rsp+98h] [rbp+48h] BYREF

  if ( *((_DWORD *)this + 24) )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v13, (RTL_SRWLOCK *)this + 14);
    v4 = a2 == 0;
    if ( v4 != *((_DWORD *)this + 26) )
    {
      *((_DWORD *)this + 26) = v4;
      v19 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
      CallbackArray = CGITRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 6, &v19);
      v6 = CallbackArray;
      if ( CallbackArray < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x72,
          (int)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
          (const char *)(unsigned int)CallbackArray);
LABEL_10:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
        return (unsigned int)v6;
      }
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      punk = 0LL;
      v7 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 14) + 32LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      v7((char *)this - 112, &GUID_00000000_0000_0000_c000_000000000046, &punk);
      v6 = IUnknown_QueryService(
             punk,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      if ( v6 < 0 )
      {
        v8 = 118LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (int)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_10;
      }
      v14 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
      v15 = v4;
      v16[0] = (__int64)ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
      v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_8f3900148952faa68610648471a8cff1___(
             v10,
             v9,
             *((_DWORD *)this + 25),
             (__int64)&v14);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
      if ( v6 < 0 )
      {
        v8 = 138LL;
        goto LABEL_9;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  }
  return 0LL;
}
