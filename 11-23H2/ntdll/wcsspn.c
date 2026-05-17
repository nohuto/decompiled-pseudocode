/*
 * XREFs of wcsspn @ 0x1800953F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl wcsspn(const wchar_t *String, const wchar_t *Control)
{
  wchar_t v2; // r8
  const wchar_t *v4; // rax
  const wchar_t *v5; // r9
  wchar_t v6; // dx

  v2 = *String;
  v4 = String;
  while ( v2 )
  {
    v5 = Control;
    if ( *Control != v2 )
    {
      v6 = *Control;
      while ( v6 )
      {
        v6 = *++v5;
        if ( *v5 == v2 )
          goto LABEL_7;
      }
      return v4 - String;
    }
LABEL_7:
    v2 = *++v4;
  }
  return v4 - String;
}
