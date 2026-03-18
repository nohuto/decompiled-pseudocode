/*
 * XREFs of ZwLockRegistryKey @ 0x14041D9C0
 * Callers:
 *     NtLockProductActivationKeys @ 0x14080D370 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x140865540 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockRegistryKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
