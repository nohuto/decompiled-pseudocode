/*
 * XREFs of CarFindDriverInfoByDriverName @ 0x1405D3560
 * Callers:
 *     CarGetDriverInfoFromDriverName @ 0x1405D35B0 (CarGetDriverInfoFromDriverName.c)
 * Callees:
 *     wcsncmp @ 0x1403DBC30 (wcsncmp.c)
 */

__int64 __fastcall CarFindDriverInfoByDriverName(wchar_t *Str2)
{
  __int64 v1; // rbx

  v1 = CarDriverInfo;
  if ( !CarDriverInfo )
    return 0LL;
  do
  {
    if ( !wcsncmp((const wchar_t *)(v1 + 8), Str2, 0x20uLL) )
      break;
    v1 = *(_QWORD *)v1;
  }
  while ( v1 );
  return v1;
}
