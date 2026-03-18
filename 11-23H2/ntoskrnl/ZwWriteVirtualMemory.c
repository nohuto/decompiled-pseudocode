/*
 * XREFs of ZwWriteVirtualMemory @ 0x14041B4A0
 * Callers:
 *     SepAdtCopyToLsaSharedMemory @ 0x1409D1B74 (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWriteVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
