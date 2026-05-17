/*
 * XREFs of wcstok_s @ 0x18009B3D0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008EEB8 (_invalid_parameter.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *String, const wchar_t *Delimiter, wchar_t **Context)
{
  wchar_t i; // ax
  const wchar_t *v5; // r10
  wchar_t v6; // r8
  wchar_t *result; // rax
  const wchar_t *v8; // rbx
  wchar_t v9; // r8
  wchar_t v10; // r10
  wchar_t *v11; // r10

  if ( !Context || !Delimiter )
    goto LABEL_25;
  if ( !String )
  {
    if ( *Context )
    {
      String = *Context;
      goto LABEL_6;
    }
LABEL_25:
    invalid_parameter();
    return 0LL;
  }
LABEL_6:
  for ( i = *String; *String; i = *String )
  {
    v5 = Delimiter;
    if ( !*Delimiter )
      break;
    v6 = *Delimiter;
    while ( v6 != i )
    {
      v6 = *++v5;
      if ( !*v5 )
        goto LABEL_13;
    }
    ++String;
  }
LABEL_13:
  result = String;
  if ( *String )
  {
    while ( 1 )
    {
      v8 = Delimiter;
      v9 = *Delimiter;
      if ( *Delimiter )
      {
        v10 = *Delimiter;
        do
        {
          v9 = v10;
          if ( v10 == *String )
            break;
          v9 = *++v8;
          v10 = *v8;
        }
        while ( *v8 );
      }
      v11 = String + 1;
      if ( v9 )
        break;
      ++String;
      if ( !*v11 )
        goto LABEL_22;
    }
    *String++ = 0;
  }
LABEL_22:
  *Context = String;
  if ( result == String )
    return 0LL;
  return result;
}
