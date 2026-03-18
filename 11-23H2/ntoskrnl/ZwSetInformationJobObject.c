/*
 * XREFs of ZwSetInformationJobObject @ 0x14041E220
 * Callers:
 *     DifZwSetInformationJobObjectWrapper @ 0x1405F6F60 (DifZwSetInformationJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
