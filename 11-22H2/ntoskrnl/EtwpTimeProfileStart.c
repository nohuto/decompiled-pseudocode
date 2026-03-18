/*
 * XREFs of EtwpTimeProfileStart @ 0x1409E6BF8
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1407D5610 (EtwpEnableKernelTrace.c)
 *     EtwTimeProfileReset @ 0x140865088 (EtwTimeProfileReset.c)
 * Callees:
 *     KeStartProfile @ 0x140573F7C (KeStartProfile.c)
 *     KeInitializeProfileCallback @ 0x140975010 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x1409751C8 (KeSetIntervalProfile.c)
 */

__int64 EtwpTimeProfileStart()
{
  KeSetIntervalProfile(EtwpProfileInterval, 0);
  KeInitializeProfileCallback(EtwpProfileObject, (__int64)EtwpProfileInterrupt, 0LL, 0);
  return KeStartProfile((ULONG_PTR)EtwpProfileObject);
}
