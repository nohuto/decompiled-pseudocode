/*
 * XREFs of ?ResultStringSize@details@wil@@YGIPBD@Z @ 0x10002BF9
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z @ 0x10002C3F (-SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z @ 0x100037C8 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z.c)
 *     ??$WriteResultString@PBD@details@wil@@YGPAEPAE0PBDPAPBD@Z @ 0x100045E6 (--$WriteResultString@PBD@details@wil@@YGPAEPAE0PBDPAPBD@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall wil::details::ResultStringSize(const char *ecx0)
{
  if ( ecx0 )
    return strlen(ecx0) + 1;
  else
    return 1;
}
