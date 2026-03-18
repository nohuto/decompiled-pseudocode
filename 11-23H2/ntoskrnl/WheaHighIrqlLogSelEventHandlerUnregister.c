/*
 * XREFs of WheaHighIrqlLogSelEventHandlerUnregister @ 0x1406130C0
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140613318 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

__int64 __fastcall WheaHighIrqlLogSelEventHandlerUnregister(__int64 a1)
{
  __int64 result; // rax
  DRIVER_CONTROL *v2; // r9

  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) )
  {
    LOBYTE(a1) = 1;
    result = WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfChannels = v2;
    WheapDispatchPtr.Queue.Wcb.DeviceRoutine = v2;
    LODWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) = (_DWORD)v2;
    _InterlockedExchange((_DWORD *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink + 1, (__int32)v2);
  }
  return result;
}
