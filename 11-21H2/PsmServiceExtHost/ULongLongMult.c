/*
 * XREFs of ULongLongMult @ 0x180096690
 * Callers:
 *     SdbpCheckPackageAttributes @ 0x18009B1A0 (SdbpCheckPackageAttributes.c)
 *     AslPathWildcardFindFirst @ 0x1800A42F4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1800A48BC (AslPathWildcardFindNext.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A5A10 (AslpPathWildcardFreeFindContext.c)
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
