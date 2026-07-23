/*
 * XREFs of HalpHvNotifyDebugDeviceAvailable @ 0x14050C484
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A96470 (HalpAcpiPostSleep.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpHvNotifyDebugDeviceAvailable()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C624C0 )
    return ((__int64 (*)(void))qword_140C624C0)();
  return result;
}
