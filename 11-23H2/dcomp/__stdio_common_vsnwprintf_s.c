/*
 * XREFs of __stdio_common_vsnwprintf_s @ 0x180096892
 * Callers:
 *     _vsnwprintf_s @ 0x180096998 (_vsnwprintf_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl _stdio_common_vsnwprintf_s(
        unsigned __int64 Options,
        wchar_t *Buffer,
        size_t BufferCount,
        size_t MaxCount,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return _o___stdio_common_vsnwprintf_s(Options, Buffer, BufferCount, MaxCount, Format, Locale, ArgList);
}
