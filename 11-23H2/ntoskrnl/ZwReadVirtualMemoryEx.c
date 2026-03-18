/*
 * XREFs of ZwReadVirtualMemoryEx @ 0x14041DC00
 * Callers:
 *     MmCopyMemory @ 0x1402EDB50 (MmCopyMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReadVirtualMemoryEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
