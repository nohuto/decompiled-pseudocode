/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x140616CEC
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140616D10 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x140A259E8 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextReinitialize(a1 + 1);
}
