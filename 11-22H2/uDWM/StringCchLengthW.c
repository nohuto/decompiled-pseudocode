/*
 * XREFs of StringCchLengthW @ 0x18005AEF4
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18005ADCC (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  __int64 v3; // rdx
  HRESULT result; // eax

  if ( !psz )
  {
    result = -2147024809;
LABEL_12:
    if ( pcchLength )
      *pcchLength = 0LL;
    return result;
  }
  v3 = 0x7FFFFFFFLL;
  do
  {
    if ( !*psz )
      break;
    ++psz;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0x80070057 : 0;
  if ( pcchLength )
  {
    if ( v3 )
      *pcchLength = 0x7FFFFFFF - v3;
    else
      *pcchLength = 0LL;
  }
  if ( !v3 )
    goto LABEL_12;
  return result;
}
