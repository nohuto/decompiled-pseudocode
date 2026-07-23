/*
 * XREFs of CmpTransUowIsEqual @ 0x140A1C580
 * Callers:
 *     CmpSearchForTrans @ 0x140768924 (CmpSearchForTrans.c)
 *     CmEqualTrans @ 0x1407693B0 (CmEqualTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429BB0 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
