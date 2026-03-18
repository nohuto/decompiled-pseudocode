/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x1402264A8
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140200068 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x14069F47C (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextReinitialize(a1 + 1);
}
