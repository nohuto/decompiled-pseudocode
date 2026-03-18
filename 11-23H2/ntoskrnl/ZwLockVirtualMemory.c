/*
 * XREFs of ZwLockVirtualMemory @ 0x14041D000
 * Callers:
 *     CmSiLockViewOfSection @ 0x140207D4C (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1405CC0A4 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
