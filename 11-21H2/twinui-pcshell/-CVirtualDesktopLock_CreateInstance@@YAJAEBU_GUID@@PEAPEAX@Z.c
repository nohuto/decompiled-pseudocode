/*
 * XREFs of ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18016529C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C958 (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18018FE0C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopLock_CreateInstance(const struct _GUID *a1, RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v3; // rax
  RTL_SRWLOCK *v4; // rbx
  volatile int *v5; // rdx
  _DWORD *v6; // rcx
  RTL_SRWLOCK *v7; // rcx
  int v8; // ebx
  __int64 v10; // rdx
  RTL_SRWLOCK *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v13);
  v13 = 0LL;
  v3 = (RTL_SRWLOCK *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v14 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
    v8 = -2147024882;
    v10 = 40LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoplock.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_8;
  }
  HIDWORD(v3[1].Ptr) = 1;
  v3->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopLock>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v4->Ptr = &CVirtualDesktopLock::`vftable';
  InitializeSRWLock(v4 + 2);
  v14 = v4;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v4[1].Ptr + 4), v5);
  v13 = v4;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v14);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_6f0436fc_29bf_4c71_b476_87fbdcf1e75a, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v13;
    *a2 = v13;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v11->Ptr + 1))(v11);
    v8 = 0;
  }
  else if ( InlineIsEqualGUID(v6, v6) )
  {
    v7 = v13;
    *a2 = v13;
    v8 = 0;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v7->Ptr + 1))(v7);
  }
  else
  {
    v8 = -2147467262;
  }
  if ( v8 < 0 )
  {
    v10 = 41LL;
    goto LABEL_13;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v13);
  return (unsigned int)v8;
}
