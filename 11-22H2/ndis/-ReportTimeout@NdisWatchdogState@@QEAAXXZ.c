/*
 * XREFs of ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x1C01395C0
 * Callers:
 *     ndisWatchdogTimeoutWorkerRoutine @ 0x1C0139A50 (ndisWatchdogTimeoutWorkerRoutine.c)
 * Callees:
 *     ndisFindSomeoneToBlame @ 0x1C0139680 (ndisFindSomeoneToBlame.c)
 *     ndisWaitForAllProcessorsIdle @ 0x1C0139928 (ndisWaitForAllProcessorsIdle.c)
 */

void __fastcall NdisWatchdogState::ReportTimeout(struct _KEVENT *this)
{
  signed __int32 Blink; // eax
  signed __int32 v3; // ett
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  _m_prefetchw(&this[6].Header.WaitListHead.Blink);
  Blink = (signed __int32)this[6].Header.WaitListHead.Blink;
  do
  {
    v3 = Blink;
    Blink = _InterlockedCompareExchange((volatile signed __int32 *)&this[6].Header.WaitListHead.Blink, Blink, Blink);
  }
  while ( v3 != Blink );
  if ( Blink )
    ndisWaitForAllProcessorsIdle();
  _m_prefetchw(&this[6].Header.WaitListHead.Blink);
  v4 = (signed __int32)this[6].Header.WaitListHead.Blink;
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)&this[6].Header.WaitListHead.Blink, v4, v4);
  }
  while ( v5 != v4 );
  if ( v4 )
  {
    ndisFindSomeoneToBlame((unsigned int)this[8].Header.Lock, (unsigned __int64)&this[8].Header.WaitListHead);
    LODWORD(this[6].Header.WaitListHead.Blink) = 0;
    this[11].Header.Type = 1;
  }
  KeSetEvent(this + 7, 0, 0);
}
