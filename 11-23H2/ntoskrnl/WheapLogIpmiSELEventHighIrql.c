/*
 * XREFs of WheapLogIpmiSELEventHighIrql @ 0x140613930
 * Callers:
 *     WheapLogIpmiSELEvent @ 0x140613890 (WheapLogIpmiSELEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140613868 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

void WheapLogIpmiSELEventHighIrql()
{
  if ( WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters && WheapHighIrqlLogSelEventHandlerAcquireLock(0) )
  {
    if ( WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
      ((void (__fastcall *)(PVOID, KSPIN_LOCK *))WheapDispatchPtr.Queue.Wcb.DeviceObject)(
        WheapDispatchPtr.Queue.Wcb.CurrentIrp,
        &WheapDispatchPtr.DeviceQueue.Lock);
    _InterlockedExchange((volatile __int32 *)(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1), 0);
  }
}
