/*
 * XREFs of EtwpTimeProfileStart @ 0x1409E6DD8
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1407D5360 (EtwpEnableKernelTrace.c)
 *     EtwTimeProfileReset @ 0x140864EA8 (EtwTimeProfileReset.c)
 * Callees:
 *     KeStartProfile @ 0x14057441C (KeStartProfile.c)
 *     KeInitializeProfileCallback @ 0x140975160 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x140975318 (KeSetIntervalProfile.c)
 */

__int64 EtwpTimeProfileStart()
{
  KeSetIntervalProfile(EtwpProfileInterval, 0);
  KeInitializeProfileCallback(EtwpProfileObject, (__int64)EtwpProfileInterrupt, 0LL, 0);
  return KeStartProfile((ULONG_PTR)EtwpProfileObject);
}
