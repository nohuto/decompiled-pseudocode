/*
 * XREFs of ZwCreatePartition @ 0x14041C4C0
 * Callers:
 *     ExpInitializeMemoryMirroring @ 0x140B75BDC (ExpInitializeMemoryMirroring.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreatePartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
