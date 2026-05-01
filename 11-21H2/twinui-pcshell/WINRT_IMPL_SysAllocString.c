/*
 * XREFs of WINRT_IMPL_SysAllocString @ 0x180189DEC
 * Callers:
 *     ?GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z @ 0x1802D74C0 (-GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z.c)
 *     ?GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z @ 0x1802D7500 (-GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BSTR __stdcall WINRT_IMPL_SysAllocString(const OLECHAR *psz)
{
  return SysAllocString(psz);
}
