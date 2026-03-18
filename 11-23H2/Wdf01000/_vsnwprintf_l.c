/*
 * XREFs of _vsnwprintf_l @ 0x1C0009B94
 * Callers:
 *     _vsnwprintf @ 0x1C0009B74 (_vsnwprintf.c)
 * Callees:
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x1C0009470 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 *     _flsbuf @ 0x1C0009C8C (_flsbuf.c)
 *     _woutput_l @ 0x1C0009C9C (_woutput_l.c)
 */

__int64 __fastcall vsnwprintf_l(
        wchar_t *string,
        unsigned __int64 count,
        const wchar_t *format,
        localeinfo_struct *plocinfo,
        char *ap)
{
  unsigned int v6; // edi
  char *ptr; // rcx
  _iobuf str; // [rsp+30h] [rbp-30h] BYREF

  *(&str._cnt + 1) = 0;
  memset(&str._file, 0, 20);
  if ( format && (!count || string) )
  {
    str._flag = 66;
    str._base = (char *)string;
    str._ptr = (char *)string;
    if ( count <= 0x3FFFFFFF )
      str._cnt = 2 * count;
    else
      str._cnt = 0x7FFFFFFF;
    v6 = woutput_l(&str, format, plocinfo, ap);
    if ( string )
    {
      if ( --str._cnt < 0 )
      {
        flsbuf(0, &str);
        ptr = str._ptr;
      }
      else
      {
        *str._ptr = 0;
        ptr = ++str._ptr;
      }
      if ( --str._cnt < 0 )
        flsbuf(0, &str);
      else
        *ptr = 0;
    }
    return v6;
  }
  else
  {
    FxDeviceBase::AddChildList(0LL);
    return 0xFFFFFFFFLL;
  }
}
