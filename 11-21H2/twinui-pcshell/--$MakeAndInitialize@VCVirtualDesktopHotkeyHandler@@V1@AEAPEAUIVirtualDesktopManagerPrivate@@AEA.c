/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHotkeyHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180112200
 * Callers:
 *     ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18011103C (-CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EE1EC (-InternalRelease@-$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x180112914 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerPrivate@@@Z @ 0x180112A38 (--4-$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManag.c)
 *     ??0CVirtualDesktopHotkeyHandler@@QEAA@XZ @ 0x180112F54 (--0CVirtualDesktopHotkeyHandler@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopHotkeyHandler,CVirtualDesktopHotkeyHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
        CVirtualDesktopHotkeyHandler **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v3; // edi
  CVirtualDesktopHotkeyHandler *v7; // rax
  CVirtualDesktopHotkeyHandler *v8; // rax
  __int64 v9; // rdx
  CVirtualDesktopHotkeyHandler *v10; // rsi
  __int64 v11; // rbx
  volatile int *v12; // rdx
  CVirtualDesktopHotkeyHandler *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (CVirtualDesktopHotkeyHandler *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = CVirtualDesktopHotkeyHandler::CVirtualDesktopHotkeyHandler(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v14 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopManagerPrivate>::operator=((char *)v8 + 16, v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=((char *)v10 + 32, v11);
    if ( v10 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CVirtualDesktopHotkeyHandler *)((char *)v10 + 12), v12);
    *a1 = v10;
    Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
