/*
 * XREFs of __stdio_common_vswprintf_s @ 0x18005F8CE
 * Callers:
 *     vswprintf_s @ 0x18005FA4C (vswprintf_s.c)
 *     swprintf_s @ 0x18005FB00 (swprintf_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl _stdio_common_vswprintf_s(
        unsigned __int64 Options,
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return _o___stdio_common_vswprintf_s(Options, Buffer, BufferCount, Format, Locale, ArgList);
}
