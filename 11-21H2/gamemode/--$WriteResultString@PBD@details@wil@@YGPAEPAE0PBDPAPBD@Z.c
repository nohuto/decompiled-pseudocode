/*
 * XREFs of ??$WriteResultString@PBD@details@wil@@YGPAEPAE0PBDPAPBD@Z @ 0x100045E6
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z @ 0x10002C3F (-SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z @ 0x100037C8 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z.c)
 * Callees:
 *     ?ResultStringSize@details@wil@@YGIPBD@Z @ 0x10002BF9 (-ResultStringSize@details@wil@@YGIPBD@Z.c)
 */

char *__fastcall wil::details::WriteResultString<char const *>(char *Destination, char *a2, _BYTE *Source, _DWORD *a4)
{
  rsize_t v6; // eax
  rsize_t v7; // ebx
  rsize_t v9; // [esp+Ch] [ebp-4h]

  if ( Destination != a2
    && Source
    && *Source
    && (v6 = wil::details::ResultStringSize(Source), v7 = a2 - Destination, v9 = v6, v7 >= v6) )
  {
    _memcpy_s(Destination, v7, Source, v6);
    if ( a4 )
      *a4 = Destination;
    return &Destination[v9];
  }
  else
  {
    if ( a4 )
      *a4 = 0;
    return Destination;
  }
}
