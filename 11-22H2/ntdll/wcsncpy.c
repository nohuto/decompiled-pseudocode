/*
 * XREFs of wcsncpy @ 0x180094AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsncpy(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  wchar_t *v3; // r9
  signed __int64 v4; // rdx
  wchar_t v5; // ax
  wchar_t *v6; // rdi
  size_t i; // rcx

  v3 = Destination;
  if ( Count )
  {
    v4 = (char *)Source - (char *)Destination;
    while ( 1 )
    {
      v5 = *(wchar_t *)((char *)Destination + v4);
      *Destination++ = v5;
      --Count;
      if ( !v5 )
        break;
      if ( !Count )
        return v3;
    }
    if ( Count )
    {
      v6 = Destination;
      for ( i = Count; i; --i )
        *v6++ = 0;
    }
  }
  return v3;
}
