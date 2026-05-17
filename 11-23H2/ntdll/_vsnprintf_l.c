/*
 * XREFs of _vsnprintf_l @ 0x180090CEC
 * Callers:
 *     _vsnprintf @ 0x180090CD0 (_vsnprintf.c)
 * Callees:
 *     _invalid_parameter @ 0x18008EEB8 (_invalid_parameter.c)
 *     _flsbuf @ 0x180095C10 (_flsbuf.c)
 *     _output_l @ 0x180095C20 (_output_l.c)
 */

int __cdecl vsnprintf_l(
        char *const Buffer,
        const size_t BufferCount,
        const char *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  int v6; // edi
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( !Format )
    goto LABEL_11;
  if ( !BufferCount )
  {
LABEL_5:
    File._cnt = BufferCount;
    goto LABEL_6;
  }
  if ( !Buffer )
  {
LABEL_11:
    invalid_parameter();
    return -1;
  }
  File._cnt = 0x7FFFFFFF;
  if ( BufferCount <= 0x7FFFFFFF )
    goto LABEL_5;
LABEL_6:
  File._flag = 66;
  File._base = Buffer;
  File._ptr = Buffer;
  v6 = output_l(&File, Format, Locale, ArgList);
  if ( Buffer )
  {
    if ( --File._cnt < 0 )
      flsbuf(0, &File);
    else
      *File._ptr = 0;
  }
  return v6;
}
