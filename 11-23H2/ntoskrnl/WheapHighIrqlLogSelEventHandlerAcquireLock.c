/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140613318
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x140613050 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x1406130C0 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x1406133E0 (WheapLogIpmiSELEventHighIrql.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange((_DWORD *)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink + 1, 1, 0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}
