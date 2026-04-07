/*
 * XREFs of FormatMessageW_0 @ 0x1800610A2
 * Callers:
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x18009693C (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall FormatMessageW_0(
        DWORD dwFlags,
        LPCVOID lpSource,
        DWORD dwMessageId,
        DWORD dwLanguageId,
        LPWSTR lpBuffer,
        DWORD nSize,
        va_list *Arguments)
{
  return FormatMessageW(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
}
