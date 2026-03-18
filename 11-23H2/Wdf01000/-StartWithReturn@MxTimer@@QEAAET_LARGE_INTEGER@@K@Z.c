/*
 * XREFs of ?StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z @ 0x1C00064A8
 * Callers:
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C0005E68 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x1C003FB68 (-Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 */

BOOLEAN __fastcall MxTimer::StartWithReturn(MxTimer *this, _LARGE_INTEGER DueTime, ULONG TolerableDelay)
{
  _EXT_SET_PARAMETERS_V0 parameters; // [rsp+30h] [rbp-28h] BYREF

  if ( !this->m_Timer.m_IsExtTimer )
    return KeSetCoalescableTimer(
             &this->m_Timer.KernelTimer,
             DueTime,
             this->m_Timer.m_Period,
             TolerableDelay,
             &this->m_Timer.TimerDpc);
  *(_QWORD *)&parameters.Version = 0LL;
  if ( TolerableDelay == -1 )
    parameters.NoWakeTolerance = -1LL;
  else
    parameters.NoWakeTolerance = 10000LL * TolerableDelay;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
           this->m_Timer.m_KernelExTimer,
           (_LARGE_INTEGER)DueTime.QuadPart,
           10000LL * this->m_Timer.m_Period,
           &parameters);
}
