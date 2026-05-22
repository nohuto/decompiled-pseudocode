/*
 * XREFs of WINRT_IMPL_SysAllocString @ 0x1800587B9
 * Callers:
 *     ?GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z @ 0x1800AB4D0 (-GetDescription@error_info_fallback@impl@winrt@@UEAAHPEAPEAG@Z.c)
 *     ?GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z @ 0x1800AB510 (-GetErrorDetails@error_info_fallback@impl@winrt@@UEAAHPEAPEAGPEAH00@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BSTR __stdcall WINRT_IMPL_SysAllocString(const OLECHAR *psz)
{
  return SysAllocString(psz);
}
