/*
 * XREFs of ZwLockRegistryKey @ 0x14041C920
 * Callers:
 *     NtLockProductActivationKeys @ 0x140839ED0 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x140866480 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockRegistryKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
