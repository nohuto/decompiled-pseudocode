/*
 * XREFs of PopShutdownSystem @ 0x140AA8F14
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x140506960 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14053F54C (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x14054BD18 (VslNotifyShutdown.c)
 *     DbgUnLoadImageSymbols @ 0x1405A7810 (DbgUnLoadImageSymbols.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140AA09AC (PopSetMemoryOverwriteRequestAction.c)
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 *     PopNotifyShutdownListener @ 0x140AA8E9C (PopNotifyShutdownListener.c)
 */

void __fastcall __noreturn PopShutdownSystem(int a1)
{
  int v2; // ebx
  int v3; // ebx

  PopNotifyShutdownListener();
  VslNotifyShutdown(0);
  if ( HvlHypervisorConnected )
    HvlConfigureMemoryZeroingOnReset(0);
  PopSetMemoryOverwriteRequestAction();
  DbgUnLoadImageSymbols();
  if ( (PopSimulate & 0x800) == 0 || ((a1 - 4) & 0xFFFFFFFD) != 0 )
  {
    v2 = a1 - 4;
    if ( !v2 )
    {
      if ( PopShutdownPowerOffPolicy )
        qword_140C3D9C8 = (__int64)PopShutdownHandler;
      goto LABEL_12;
    }
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
LABEL_13:
        HalReturnToFirmware(3);
LABEL_12:
      PopInvokeSystemStateHandler(4, 0LL);
      HalReturnToFirmware(1);
    }
  }
  PopInvokeSystemStateHandler(5, 0LL);
  goto LABEL_13;
}
