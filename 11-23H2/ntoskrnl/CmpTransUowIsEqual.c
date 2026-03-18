/*
 * XREFs of CmpTransUowIsEqual @ 0x140A1C2D0
 * Callers:
 *     CmpSearchForTrans @ 0x140768734 (CmpSearchForTrans.c)
 *     CmEqualTrans @ 0x1407691C0 (CmEqualTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429820 (RtlCompareMemory.c)
 */

bool __fastcall CmpTransUowIsEqual(const void *a1, const void *a2)
{
  return RtlCompareMemory(a1, a2, 0x10uLL) == 16;
}
