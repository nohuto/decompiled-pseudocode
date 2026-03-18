/*
 * XREFs of ZwCreateJobObject @ 0x14041C3A0
 * Callers:
 *     DifZwCreateJobObjectWrapper @ 0x1405EE7C0 (DifZwCreateJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
