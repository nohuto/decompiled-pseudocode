/*
 * XREFs of ??$WriteResultString@PB_W@details@wil@@YGPAEPAE0PB_WPAPB_W@Z @ 0x10004576
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z @ 0x10002C3F (-SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z @ 0x100037C8 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z.c)
 * Callees:
 *     ?ResultStringSize@details@wil@@YGIPB_W@Z @ 0x10002C17 (-ResultStringSize@details@wil@@YGIPB_W@Z.c)
 */

char *__fastcall wil::details::WriteResultString<wchar_t const *>(
        _BYTE *Destination,
        _BYTE *a2,
        _WORD *Source,
        _DWORD *a4)
{
  rsize_t v6; // eax
  rsize_t v7; // ebx
  rsize_t v9; // [esp+Ch] [ebp-4h]

  if ( Destination == a2 || !Source || !*Source )
  {
    if ( a4 )
      *a4 = 0;
    return Destination;
  }
  v6 = wil::details::ResultStringSize(Source);
  v7 = a2 - Destination;
  v9 = v6;
  if ( v7 < v6 )
  {
    if ( a4 )
      *a4 = 0;
    return Destination;
  }
  _memcpy_s(Destination, v7, Source, v6);
  if ( a4 )
    *a4 = Destination;
  return &Destination[v9];
}
