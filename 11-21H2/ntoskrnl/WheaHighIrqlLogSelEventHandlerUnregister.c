/*
 * XREFs of WheaHighIrqlLogSelEventHandlerUnregister @ 0x140645F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406460B8 @ 0x1406460B8 (sub_1406460B8.c)
 */

__int64 __fastcall WheaHighIrqlLogSelEventHandlerUnregister(__int64 a1)
{
  __int64 result; // rax
  void *v2; // r9

  if ( stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters )
  {
    LOBYTE(a1) = 1;
    result = sub_1406460B8(a1);
    stru_140C0E9A8.Queue.Wcb.DeviceObject = v2;
    stru_140C0E9A8.Queue.Wcb.CurrentIrp = v2;
    stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters = (unsigned int)v2;
    _InterlockedExchange((volatile __int32 *)(&stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters + 1), (__int32)v2);
  }
  return result;
}
