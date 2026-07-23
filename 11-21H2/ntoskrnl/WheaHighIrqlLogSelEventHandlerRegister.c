/*
 * XREFs of WheaHighIrqlLogSelEventHandlerRegister @ 0x140645EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406460B8 @ 0x1406460B8 (sub_1406460B8.c)
 */

char __fastcall WheaHighIrqlLogSelEventHandlerRegister(void *a1)
{
  void *v1; // rbx
  __int32 v2; // r9d
  ULONG v3; // r10d
  void *v4; // r11

  v1 = a1;
  if ( stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    sub_1406460B8(a1);
    if ( stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters == v2 )
    {
      stru_140C0E9A8.Queue.Wcb.DeviceObject = v1;
      stru_140C0E9A8.Queue.Wcb.CurrentIrp = v4;
      stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters = v3;
    }
    else
    {
      LOBYTE(v3) = v2;
    }
    _InterlockedExchange((volatile __int32 *)(&stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters + 1), v2);
  }
  return v3;
}
