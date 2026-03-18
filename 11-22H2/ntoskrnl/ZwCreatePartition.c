/*
 * XREFs of ZwCreatePartition @ 0x14041BE00
 * Callers:
 *     ExpInitializeMemoryMirroring @ 0x140B37BD4 (ExpInitializeMemoryMirroring.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreatePartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
