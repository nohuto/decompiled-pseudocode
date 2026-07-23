/*
 * XREFs of SepZwLockRegistryKey @ 0x140866480
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x14041C920 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
