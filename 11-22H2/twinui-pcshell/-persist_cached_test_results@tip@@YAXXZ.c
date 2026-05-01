/*
 * XREFs of ?persist_cached_test_results@tip@@YAXXZ @ 0x180708364
 * Callers:
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18072DD20 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180182AE4 (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall tip::persist_cached_test_results(tip *this)
{
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax

  ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting[0];
  if ( `TestControlReporting'::`2'::s_pfnTestControlReporting[0]
    || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
        (`TestControlReporting'::`2'::s_pfnTestControlReporting[0] = (__int64)ProcAddress) != 0) )
  {
    ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
  }
}
