/*
 * XREFs of ZwRequestWaitReplyPort @ 0x14041BBA0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1402037E8 (SepRmDispatchDataToLsa.c)
 *     DifZwRequestWaitReplyPortWrapper @ 0x140626560 (DifZwRequestWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRequestWaitReplyPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
