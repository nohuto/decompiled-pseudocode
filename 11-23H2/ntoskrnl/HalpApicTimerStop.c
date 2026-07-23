/*
 * XREFs of HalpApicTimerStop @ 0x140347C90
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicTimerInitialize @ 0x140347CC0 (HalpApicTimerInitialize.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 HalpApicTimerStop()
{
  HalpApicTimerInitialize();
  return ((__int64 (__fastcall *)(__int64, _QWORD))HalpApicWrite)(896LL, 0LL);
}
