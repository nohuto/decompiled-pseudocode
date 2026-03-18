/*
 * XREFs of EtwpTimeProfileStart @ 0x1409E6B48
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1407D5090 (EtwpEnableKernelTrace.c)
 *     EtwTimeProfileReset @ 0x140864C68 (EtwTimeProfileReset.c)
 * Callees:
 *     KeStartProfile @ 0x140573EDC (KeStartProfile.c)
 *     KeInitializeProfileCallback @ 0x140974F60 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x140975118 (KeSetIntervalProfile.c)
 */

__int64 EtwpTimeProfileStart()
{
  KeSetIntervalProfile(EtwpProfileInterval, 0);
  KeInitializeProfileCallback(EtwpProfileObject, (__int64)EtwpProfileInterrupt, 0LL, 0);
  return KeStartProfile((ULONG_PTR)EtwpProfileObject);
}
