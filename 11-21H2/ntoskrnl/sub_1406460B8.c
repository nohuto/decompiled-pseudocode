/*
 * XREFs of sub_1406460B8 @ 0x1406460B8
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x140645EA0 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x140645F10 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     sub_140646180 @ 0x140646180 (sub_140646180.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1406460B8(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange(
            (volatile signed __int32 *)(&stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters + 1),
            1,
            0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}
