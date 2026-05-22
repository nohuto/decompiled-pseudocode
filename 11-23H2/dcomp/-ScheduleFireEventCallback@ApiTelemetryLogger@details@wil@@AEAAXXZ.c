/*
 * XREFs of ?ScheduleFireEventCallback@ApiTelemetryLogger@details@wil@@AEAAXXZ @ 0x1800644E4
 * Callers:
 *     ?FireEvent_@ApiTelemetryLogger@details@wil@@QEAAXXZ @ 0x180064488 (-FireEvent_@ApiTelemetryLogger@details@wil@@QEAAXXZ.c)
 *     ?Initialize@ApiTelemetryLogger@details@wil@@EEAAXXZ @ 0x1800894C0 (-Initialize@ApiTelemetryLogger@details@wil@@EEAAXXZ.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

void __fastcall wil::details::ApiTelemetryLogger::ScheduleFireEventCallback(wil::details::ApiTelemetryLogger *this)
{
  struct _TP_TIMER *v2; // rcx
  _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 6) )
  {
    if ( !wil::ProcessShutdownInProgress(this) )
    {
      v2 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
      pftDueTime = (_FILETIME)-(__int64)(unsigned int)(10000 * *((_DWORD *)this + 14));
      SetThreadpoolTimer(v2, &pftDueTime, 0, 0);
    }
  }
}
