/*
 * XREFs of ULongLongMult @ 0x180090010
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x180052810 (SdbpCheckApplicationTypeAttributes.c)
 *     AslPathWildcardFindFirst @ 0x18009DFEC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x18009E5BC (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x18009F75C (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  ULONGLONG v4; // rcx
  HRESULT result; // eax

  v4 = ullMultiplicand * ullMultiplier;
  result = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = v4;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  return result;
}
