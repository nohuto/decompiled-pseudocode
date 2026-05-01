/*
 * XREFs of ??$load_runtime_function@P6AHPEAXAEBUguid@winrt@@PEAPEAX@_EP6AH012@_E@impl@winrt@@YAXPEBGPEBDAEAP6AHPEAXAEBUguid@1@PEAPEAX@_EP6AH234@_E@Z @ 0x1800B4040
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$00@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B3F98 (--$get_runtime_activation_factory_impl@$00@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUgu.c)
 * Callees:
 *     WINRT_IMPL_GetProcAddress @ 0x1801C798C (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryW_0 @ 0x1801C8394 (LoadLibraryW_0.c)
 */

void __fastcall ___load_runtime_function_P6AHPEAXAEBUguid_winrt__PEAPEAX__EP6AH012__E_impl_winrt__YAXPEBGPEBDAEAP6AHPEAXAEBUguid_1_PEAPEAX__EP6AH234__E_Z(
        __int64 a1,
        __int64 a2,
        FARPROC *a3)
{
  HMODULE LibraryW_0; // rax
  FARPROC ProcAddress; // rax

  if ( !*a3 )
  {
    LibraryW_0 = LoadLibraryW_0(L"combase.dll");
    ProcAddress = WINRT_IMPL_GetProcAddress(LibraryW_0, "RoGetActivationFactory");
    *a3 = ProcAddress;
    if ( !ProcAddress )
      *a3 = (FARPROC)winrt::impl::fallback_RoGetActivationFactory;
  }
}
