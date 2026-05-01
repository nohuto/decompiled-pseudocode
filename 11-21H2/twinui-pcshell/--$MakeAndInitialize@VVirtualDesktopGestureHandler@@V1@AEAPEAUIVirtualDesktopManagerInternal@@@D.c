/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopGestureHandler@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopGestureHandler@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x18015C350
 * Callers:
 *     ?VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FD510 (-VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x1800A25DC (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0VirtualDesktopGestureHandler@@QEAA@XZ @ 0x18015C3F8 (--0VirtualDesktopGestureHandler@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C8E0 (-InternalRelease@-$ComPtr@VVirtualDesktopGestureHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopGestureHandler,VirtualDesktopGestureHandler,IVirtualDesktopManagerInternal * &>(
        VirtualDesktopGestureHandler **a1,
        __int64 *a2)
{
  unsigned int v4; // edi
  VirtualDesktopGestureHandler *v5; // rax
  VirtualDesktopGestureHandler *v6; // rax
  __int64 v7; // rbx
  VirtualDesktopGestureHandler *v8; // rsi
  volatile int *v9; // rdx
  VirtualDesktopGestureHandler *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (VirtualDesktopGestureHandler *)operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = VirtualDesktopGestureHandler::VirtualDesktopGestureHandler(v5);
    v7 = *a2;
    v8 = v6;
    v11 = v6;
    RegisterTouchPadCapable(1LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=((__int64 *)v8 + 4, v7);
    if ( v8 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopGestureHandler *)((char *)v8 + 28), v9);
    *a1 = v8;
    Microsoft::WRL::ComPtr<VirtualDesktopGestureHandler>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
