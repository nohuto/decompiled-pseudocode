/*
 * XREFs of sub_14041BF40 @ 0x14041BF40
 * Callers:
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14041BF40(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return sub_140433F80(a1, a2);
}
