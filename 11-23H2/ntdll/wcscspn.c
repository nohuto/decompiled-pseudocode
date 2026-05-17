/*
 * XREFs of wcscspn @ 0x1800951E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl wcscspn(const wchar_t *String, const wchar_t *Control)
{
  bool v3; // zf
  const wchar_t *v4; // rax
  const wchar_t *v5; // r9
  wchar_t v6; // dx

  v3 = *String == 0;
  v4 = String;
  while ( !v3 )
  {
    v5 = Control;
    if ( *Control )
    {
      v6 = *Control;
      while ( v6 != *v4 )
      {
        v6 = *++v5;
        if ( !*v5 )
          goto LABEL_7;
      }
      return v4 - String;
    }
LABEL_7:
    v3 = *++v4 == 0;
  }
  return v4 - String;
}
