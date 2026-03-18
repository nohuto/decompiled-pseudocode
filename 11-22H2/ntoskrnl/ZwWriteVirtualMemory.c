/*
 * XREFs of ZwWriteVirtualMemory @ 0x14041ADE0
 * Callers:
 *     SepAdtCopyToLsaSharedMemory @ 0x1409D1C24 (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWriteVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
