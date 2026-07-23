/*
 * XREFs of ZwLockProductActivationKeys @ 0x14041D9A0
 * Callers:
 *     sub_140B0E000 @ 0x140B0E000 (sub_140B0E000.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  _disable();
  __readeflags();
  return sub_140433F80(pPrivateVer, pSafeMode);
}
