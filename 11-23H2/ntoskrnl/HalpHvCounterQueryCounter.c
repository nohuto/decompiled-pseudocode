/*
 * XREFs of HalpHvCounterQueryCounter @ 0x1403C8750
 * Callers:
 *     HalpHvTimerArm @ 0x1403C86C0 (HalpHvTimerArm.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 HalpHvCounterQueryCounter()
{
  if ( HalpHvTimerApi )
    return HalpHvTimerApi(0LL);
  else
    return __readmsr(0x40000020u);
}
