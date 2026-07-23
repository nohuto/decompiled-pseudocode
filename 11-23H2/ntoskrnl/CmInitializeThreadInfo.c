/*
 * XREFs of CmInitializeThreadInfo @ 0x140338360
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407AC220 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 */

_OWORD *__fastcall CmInitializeThreadInfo(__int64 a1)
{
  return CmpInitializeThreadInfo(a1);
}
