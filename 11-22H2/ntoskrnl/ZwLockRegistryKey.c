/*
 * XREFs of ZwLockRegistryKey @ 0x14041C920
 * Callers:
 *     NtLockProductActivationKeys @ 0x140839ED0 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x140866480 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
