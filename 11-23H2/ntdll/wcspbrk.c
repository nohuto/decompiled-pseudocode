/*
 * XREFs of wcspbrk @ 0x180095370
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x18011385C (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcspbrk(const wchar_t *String, const wchar_t *Control)
{
  const wchar_t *v3; // r8
  wchar_t v4; // dx

  while ( 1 )
  {
    if ( !*String )
      return 0LL;
    v3 = Control;
    if ( *Control )
      break;
LABEL_6:
    ++String;
  }
  v4 = *Control;
  while ( v4 != *String )
  {
    v4 = *++v3;
    if ( !*v3 )
      goto LABEL_6;
  }
  return (wchar_t *)String;
}
