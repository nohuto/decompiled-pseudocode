/*
 * XREFs of IoDisconnectInterruptEx @ 0x14078DE40
 * Callers:
 *     DifIoDisconnectInterruptExWrapper @ 0x1405DF560 (DifIoDisconnectInterruptExWrapper.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     IoDisconnectInterrupt @ 0x14078E3C0 (IoDisconnectInterrupt.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __stdcall IoDisconnectInterruptEx(PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters)
{
  _DWORD *Generic; // rdi
  unsigned int j; // ebx
  unsigned int i; // ebx

  if ( Parameters->Version == 1 )
    goto LABEL_5;
  if ( Parameters->Version == 2 )
  {
    Generic = Parameters->ConnectionContext.Generic;
    for ( i = 0; i < Generic[73]; ++i )
      IoDisconnectInterrupt((PKINTERRUPT)(*(_QWORD *)&Generic[2 * i + 74] + 112LL));
  }
  else
  {
    if ( Parameters->Version != 3 )
    {
      if ( Parameters->Version == 4 )
      {
LABEL_5:
        IoDisconnectInterrupt(Parameters->ConnectionContext.InterruptObject);
        return;
      }
      if ( Parameters->Version != 5 )
        KeBugCheckEx(0xCAu, 9uLL, Parameters->Version, 0LL, 0LL);
    }
    Generic = Parameters->ConnectionContext.Generic;
    for ( j = 0; j < Generic[1]; ++j )
      IoDisconnectInterrupt(*(PKINTERRUPT *)&Generic[12 * j + 6]);
  }
  ExFreePoolWithTag(Generic, 0);
}
