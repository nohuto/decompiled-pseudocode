/*
 * XREFs of ZwCancelIoFile @ 0x14041C300
 * Callers:
 *     DifZwCancelIoFileWrapper @ 0x14061DB10 (DifZwCancelIoFileWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCancelIoFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
