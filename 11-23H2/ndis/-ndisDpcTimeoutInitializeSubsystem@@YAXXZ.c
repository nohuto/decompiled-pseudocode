/*
 * XREFs of ?ndisDpcTimeoutInitializeSubsystem@@YAXXZ @ 0x1C0163624
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void ndisDpcTimeoutInitializeSubsystem(void)
{
  struct _KEVENT Event; // [rsp+20h] [rbp-68h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-48h] BYREF

  memset(&Event, 0, sizeof(Event));
  memset(&Dpc, 0, sizeof(Dpc));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  qword_1C00F5628 = 0LL;
  qword_1C00F5600 = 0LL;
  xmmword_1C00F5608 = 0LL;
  xmmword_1C00F5618 = 0LL;
  *(_OWORD *)&WPP_MAIN_CB.SectorSize = 0LL;
  *(_OWORD *)&WPP_MAIN_CB.Reserved = 0LL;
  KeInitializeDpc(&Dpc, ndisGetDpcWatchdogInfo, &Event);
  KeSetImportanceDpc(&Dpc, HighImportance);
  KeInsertQueueDpc(&Dpc, 0LL, 0LL);
  ndisWaitForKernelObject(&Event);
}
