/*
 * XREFs of ZwOpenCpuPartition @ 0x14041D570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenCpuPartition(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
