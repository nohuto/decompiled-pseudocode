/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopApplicationViewEventListener@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180111598
 * Callers:
 *     ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1801114B0 (-CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivat.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewChangeListener@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180111854 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewChangeListener@@VFtmB.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopApplicationViewEventListener@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1801127B4 (-RuntimeClassInitialize@CVirtualDesktopApplicationViewEventListener@@QEAAJPEAUIVirtualDesktopMan.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopApplicationViewEventListener@@@WRL@Microsoft@@IEAAKXZ @ 0x180127010 (-InternalRelease@-$ComPtr@VCVirtualDesktopApplicationViewEventListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopApplicationViewEventListener,CVirtualDesktopApplicationViewEventListener,IVirtualDesktopManagerPrivate * &,IVirtualDesktopSwitchAnimator * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopWindowMoveManager * &,IVirtualDesktopPinnedAppsPrivate * &,IVirtualDesktopLock * &>(
        _QWORD *a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopSwitchAnimator **a3,
        struct IVirtualDesktopForegroundPolicy **a4,
        struct IVirtualDesktopWindowMoveManager **a5,
        struct IVirtualDesktopPinnedAppsPrivate **a6,
        struct IVirtualDesktopLock **a7)
{
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  volatile int *v13; // rdx
  int v14; // edi
  _QWORD *v16; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>(v11);
    v16 = v12;
    *v12 = &CVirtualDesktopApplicationViewEventListener::`vftable'{for `IApplicationViewChangeListener'};
    v12[6] = 0LL;
    v12[7] = 0LL;
    v12[8] = 0LL;
    v12[9] = 0LL;
    v12[10] = 0LL;
    v12[11] = 0LL;
    v12[1] = &AgileApplicationViewChangeListenerConverter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v14 = CVirtualDesktopApplicationViewEventListener::RuntimeClassInitialize(
            (CVirtualDesktopApplicationViewEventListener *)v12,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7);
    if ( v14 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v12 + 44), v13);
      v14 = 0;
      *a1 = v12;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopApplicationViewEventListener>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v14;
}
