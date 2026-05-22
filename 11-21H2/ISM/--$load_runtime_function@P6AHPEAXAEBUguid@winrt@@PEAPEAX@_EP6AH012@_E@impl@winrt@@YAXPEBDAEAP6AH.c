/*
 * XREFs of ??$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBDAEAP6AHPEAXAEBUguid@1@PEAPEAX@_EP6AH123@_E@Z @ 0x1800813BC
 * Callers:
 *     ??$get_runtime_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800C957C (--$get_runtime_activation_factory@UIThreadPoolStatics@Threading@System@Windows@winrt@@@impl@winr.c)
 *     ??$get_runtime_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800EF330 (--$get_runtime_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@.c)
 * Callees:
 *     WINRT_IMPL_GetProcAddress @ 0x18004B1D5 (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryW_0 @ 0x18004B30F (LoadLibraryW_0.c)
 */

void __fastcall ___load_runtime_function_P6AHPEAXAEBUguid_winrt__PEAPEAX__EP6AH012__E_impl_winrt__YAXPEBDAEAP6AHPEAXAEBUguid_1_PEAPEAX__EP6AH123__E_Z(
        __int64 a1,
        FARPROC *a2)
{
  HMODULE LibraryW_0; // rax
  FARPROC ProcAddress; // rax

  if ( !*a2 )
  {
    LibraryW_0 = LoadLibraryW_0(L"combase.dll");
    ProcAddress = WINRT_IMPL_GetProcAddress(LibraryW_0, "RoGetActivationFactory");
    *a2 = ProcAddress;
    if ( !ProcAddress )
      *a2 = (FARPROC)winrt::impl::fallback_RoGetActivationFactory;
  }
}
