/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x14061679C
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1406167C0 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x140A25738 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1406E029C (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextReinitialize(a1 + 1);
}
