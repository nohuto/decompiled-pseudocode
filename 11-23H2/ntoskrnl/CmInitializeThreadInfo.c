/*
 * XREFs of CmInitializeThreadInfo @ 0x1403380D0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407AC030 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E640 (CmpInitializeThreadInfo.c)
 */

_OWORD *__fastcall CmInitializeThreadInfo(__int64 a1)
{
  return CmpInitializeThreadInfo(a1);
}
