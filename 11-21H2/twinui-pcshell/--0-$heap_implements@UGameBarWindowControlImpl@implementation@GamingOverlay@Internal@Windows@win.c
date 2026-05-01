/*
 * XREFs of ??0?$heap_implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@V?$com_ptr_t@UIApplicationFrameFactory@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@9@@Z @ 0x18032B6C0
 * Callers:
 *     ??$make_self@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@45@AEAV?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@@winrt@@YA?AU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAV?$ComPtr@UIApplicationFrameFactory@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@89@@Z @ 0x18032A5E8 (--$make_self@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAP.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@34@V?$com_ptr_t@UIApplicationFrameFactory@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180341490 (--0GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA@PEAUIViewW.c)
 */

_QWORD *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::heap_implements<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // rax
  __int64 v7; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = *a4;
  *a4 = 0LL;
  v10 = v4;
  v7 = *a3;
  *a3 = 0LL;
  v11 = v7;
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GameBarWindowControlImpl(
    a1,
    a2,
    &v11,
    &v10);
  *a1 = &winrt::impl::heap_implements<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::`vftable';
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a3);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(a4);
  return a1;
}
