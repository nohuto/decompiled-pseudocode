/*
 * XREFs of ZwLockVirtualMemory @ 0x14041D9E0
 * Callers:
 *     CmSiLockViewOfSection @ 0x14020B76C (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1405FC1B0 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
