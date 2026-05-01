/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopSoftLandingHandler@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopSoftLandingHandler@@AEAPEAUIApplicationViewCollection@@AEAPEAUIVirtualDesktopNotificationServicePrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x18010B970
 * Callers:
 *     ?CVirtualDesktopSoftLandingHandler_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x18010E0C8 (-CVirtualDesktopSoftLandingHandler_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIVirtu.c)
 * Callees:
 *     ??0CVirtualDesktopSoftLandingHandler@@QEAA@XZ @ 0x18010B868 (--0CVirtualDesktopSoftLandingHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopSoftLandingHandler@@QEAAJPEAUIApplicationViewCollection@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x18010CC80 (-RuntimeClassInitialize@CVirtualDesktopSoftLandingHandler@@QEAAJPEAUIApplicationViewCollection@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopSoftLandingHandler,CVirtualDesktopSoftLandingHandler,IApplicationViewCollection * &,IVirtualDesktopNotificationServicePrivate * &,IVirtualDesktopRegistryHelpers * &>(
        CVirtualDesktopSoftLandingHandler **a1,
        struct IApplicationViewCollection **a2,
        struct IVirtualDesktopNotificationServicePrivate **a3,
        struct IVirtualDesktopRegistryHelpers **a4)
{
  CVirtualDesktopSoftLandingHandler *v8; // rax
  CVirtualDesktopSoftLandingHandler *v9; // rbx
  int v10; // esi

  *a1 = 0LL;
  v8 = (CVirtualDesktopSoftLandingHandler *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = CVirtualDesktopSoftLandingHandler::CVirtualDesktopSoftLandingHandler(v8);
    v10 = CVirtualDesktopSoftLandingHandler::RuntimeClassInitialize(v9, *a2, *a3, *a4);
    if ( v10 >= 0 )
    {
      if ( v9 )
        (*(void (__fastcall **)(CVirtualDesktopSoftLandingHandler *))(*(_QWORD *)v9 + 8LL))(v9);
      *a1 = v9;
      v10 = 0;
    }
    if ( v9 )
      (*(void (__fastcall **)(CVirtualDesktopSoftLandingHandler *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
