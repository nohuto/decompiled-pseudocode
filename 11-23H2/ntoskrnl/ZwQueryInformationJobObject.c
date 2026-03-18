/*
 * XREFs of ZwQueryInformationJobObject @ 0x14041D7E0
 * Callers:
 *     DifZwQueryInformationJobObjectWrapper @ 0x1405F4670 (DifZwQueryInformationJobObjectWrapper.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationJobObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
