/*
 * XREFs of ZwLockProductActivationKeys @ 0x14041C900
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140B3CBEC (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer);
}
