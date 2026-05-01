/*
 * XREFs of WINRT_IMPL_SysAllocString @ 0x1801C7E0C
 * Callers:
 *     ?GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z @ 0x18038DBD0 (-GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z.c)
 *     ?GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z @ 0x18038DC10 (-GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BSTR __stdcall WINRT_IMPL_SysAllocString(const OLECHAR *psz)
{
  return SysAllocString(psz);
}
