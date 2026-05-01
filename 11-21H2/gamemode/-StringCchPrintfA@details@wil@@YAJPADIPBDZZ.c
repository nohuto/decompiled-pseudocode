/*
 * XREFs of ?StringCchPrintfA@details@wil@@YAJPADIPBDZZ @ 0x10002B93
 * Callers:
 *     ?what@ResultException@wil@@UBEPBDXZ @ 0x10002E40 (-what@ResultException@wil@@UBEPBDXZ.c)
 * Callees:
 *     <none>
 */

int wil::details::StringCchPrintfA(wil::details *this, signed int BufferCount, char *Format, const char *ArgList, ...)
{
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // eax

  if ( BufferCount <= 0 )
  {
    v5 = -2147024809;
    if ( BufferCount )
      *(_BYTE *)this = 0;
  }
  else
  {
    v4 = BufferCount - 1;
    v5 = 0;
    v6 = __vsnprintf_s((char *const)this, BufferCount, BufferCount - 1, Format, (va_list)&ArgList);
    if ( v6 < 0 || v6 > v4 )
    {
      *((_BYTE *)this + v4) = 0;
      return -2147024774;
    }
    else if ( v6 == v4 )
    {
      *((_BYTE *)this + v4) = 0;
    }
  }
  return v5;
}
