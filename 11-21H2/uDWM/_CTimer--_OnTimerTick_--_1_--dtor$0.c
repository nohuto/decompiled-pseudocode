/*
 * XREFs of _CTimer::_OnTimerTick_::_1_::dtor$0 @ 0x1800E3F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTimer::_OnTimerTick_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)(a2 + 48));
}
