/*
 * XREFs of ZwFlushBuffersFileEx @ 0x14041CB00
 * Callers:
 *     DifZwFlushBuffersFileExWrapper @ 0x1405F0310 (DifZwFlushBuffersFileExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushBuffersFileEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
