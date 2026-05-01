/*
 * XREFs of ??$make_self@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@45@AEAV?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@@winrt@@YA?AU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAV?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@89@@Z @ 0x18032A5E8
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180335CC0 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18032B684 (--0-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPriv.c)
 *     ??0?$heap_implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@V?$com_ptr_t@UIApplicationFrameFactory@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@9@@Z @ 0x18032B6C0 (--0-$heap_implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@win.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::make_self<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &,Microsoft::WRL::ComPtr<IApplicationFrameFactory> &,Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations> &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4)
{
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  v8 = operator new(0xC0uLL);
  v12 = v8;
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>(
    &v12,
    *a4);
  v9 = *a3;
  v11[0] = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  *a1 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 *, _QWORD **))winrt::impl::heap_implements<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::heap_implements<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>)(
          v8,
          *a2,
          v11,
          &v12);
  return a1;
}
