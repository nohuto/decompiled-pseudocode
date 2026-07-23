/*
 * XREFs of ZwQueryInformationCpuPartition @ 0x14041DB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationCpuPartition(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
