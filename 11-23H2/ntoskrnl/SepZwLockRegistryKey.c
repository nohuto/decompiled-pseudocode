/*
 * XREFs of SepZwLockRegistryKey @ 0x1408661F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x14041D370 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
