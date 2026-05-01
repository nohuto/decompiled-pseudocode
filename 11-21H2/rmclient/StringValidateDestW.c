/*
 * XREFs of StringValidateDestW @ 0x1800110B8
 * Callers:
 *     HamPopulateActivityProperties @ 0x180007700 (HamPopulateActivityProperties.c)
 *     ?HampActivityPropertiesInitializeByClass@@YAXPEBG0W4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800083D0 (-HampActivityPropertiesInitializeByClass@@YAXPEBG0W4_HAM_ACTIVITY_CLASS@@PEAU_HAM_ACTIVITY_PROPE.c)
 *     HamHostIdInitializeKey @ 0x1800087D0 (HamHostIdInitializeKey.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringValidateDestW(STRSAFE_PCNZWCH pszDest, size_t cchDest, const size_t cchMax)
{
  HRESULT result; // eax

  result = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    return -2147024809;
  return result;
}
