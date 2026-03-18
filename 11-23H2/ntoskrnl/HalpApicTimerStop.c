/*
 * XREFs of HalpApicTimerStop @ 0x140347A00
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicTimerInitialize @ 0x140347A30 (HalpApicTimerInitialize.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 HalpApicTimerStop()
{
  HalpApicTimerInitialize();
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpApicWrite)(896LL, 0LL);
}
