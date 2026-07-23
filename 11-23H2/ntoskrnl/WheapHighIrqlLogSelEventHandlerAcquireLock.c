/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140613868
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x1406135A0 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x140613610 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x140613930 (WheapLogIpmiSELEventHighIrql.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange(
            (volatile signed __int32 *)(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1),
            1,
            0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}
