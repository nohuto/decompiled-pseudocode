/*
 * XREFs of ?ndisStackExpansionAddProcessor@@YAXK@Z @ 0x1C00B16DC
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C0074140 (ndisCpuHotAddHandler.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C0110B78 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 */

void __fastcall ndisStackExpansionAddProcessor(PVOID DeferredContext)
{
  unsigned int v1; // ebx
  struct _KEVENT Event; // [rsp+20h] [rbp-68h] BYREF
  struct _KDPC Dpc; // [rsp+40h] [rbp-48h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+90h] [rbp+8h] BYREF

  ProcNumber = 0;
  v1 = (unsigned int)DeferredContext;
  KeGetProcessorNumberFromIndex((ULONG)DeferredContext, &ProcNumber);
  memset(&Dpc, 0, sizeof(Dpc));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)ndisStackExpansionDpc, (PVOID)v1);
  KeSetTargetProcessorDpcEx(&Dpc, &ProcNumber);
  KeInsertQueueDpc(&Dpc, 0LL, &Event);
  KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(&Event);
}
