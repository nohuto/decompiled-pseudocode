/*
 * XREFs of ?ResultStringSize@details@wil@@YGIPB_W@Z @ 0x10002C17
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z @ 0x10002C3F (-SetFailureInfo@StoredFailureInfo@wil@@QAEXABUFailureInfo@2@@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z @ 0x100037C8 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z.c)
 *     ??$WriteResultString@PB_W@details@wil@@YGPAEPAE0PB_WPAPB_W@Z @ 0x10004576 (--$WriteResultString@PB_W@details@wil@@YGPAEPAE0PB_WPAPB_W@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall wil::details::ResultStringSize(_WORD *ecx0)
{
  _WORD *v2; // edx

  if ( !ecx0 )
    return 2;
  v2 = ecx0 + 1;
  while ( *ecx0++ )
    ;
  return 2 * (ecx0 - v2) + 2;
}
