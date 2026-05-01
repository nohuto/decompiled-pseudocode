/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopSwitcherService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSwitcherService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x180103754
 * Callers:
 *     ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180137FDC (-CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID.c)
 * Callees:
 *     ??0CVirtualDesktopSwitcherService@@QEAA@XZ @ 0x180102C78 (--0CVirtualDesktopSwitcherService@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHolographicViewTransitionNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801408B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHolographicView.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopSwitcherService,CVirtualDesktopSwitcherService,IMultitaskingViewTaskScheduler * &>(
        CVirtualDesktopSwitcherService **a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  CVirtualDesktopSwitcherService *v5; // rax
  volatile int *v6; // rdx
  CVirtualDesktopSwitcherService *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r14

  v4 = 0;
  *a1 = 0LL;
  v5 = (CVirtualDesktopSwitcherService *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = CVirtualDesktopSwitcherService::CVirtualDesktopSwitcherService(v5);
    v8 = *a2;
    v9 = *((_QWORD *)v7 + 6);
    *((_QWORD *)v7 + 6) = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v7 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CVirtualDesktopSwitcherService *)((char *)v7 + 44), v6);
      *a1 = v7;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IHolographicViewTransitionNotification,Microsoft::WRL::FtmBase>::Release(v7);
    }
    else
    {
      *a1 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
