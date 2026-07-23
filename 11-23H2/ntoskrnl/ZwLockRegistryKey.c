/*
 * XREFs of ZwLockRegistryKey @ 0x14041D370
 * Callers:
 *     NtLockProductActivationKeys @ 0x140838680 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1408661F0 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
