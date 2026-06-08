/*
 * XREFs of CpcConnectNativeInterrupt @ 0x1C002C5DC
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002AB4C (InitCpcStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcConnectNativeInterrupt(struct _DEVICE_OBJECT **DeferredContext)
{
  struct _DEVICE_OBJECT *v1; // rsi
  struct _DEVICE_OBJECT *v3; // rcx
  PIO_WORKITEM WorkItem; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-20h] BYREF

  v1 = DeferredContext[31];
  v3 = *DeferredContext;
  ProcNumber = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  WorkItem = IoAllocateWorkItem(v3);
  v1[1].Vpb = (_VPB *)WorkItem;
  if ( WorkItem )
  {
    KeInitializeDpc((PRKDPC)(&v1->Reserved + 1), (PKDEFERRED_ROUTINE)CpcNativeInterruptDpc, DeferredContext);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    KeSetTargetProcessorDpcEx((PKDPC)(&v1->Reserved + 1), &ProcNumber);
    KeSetImportanceDpc((PRKDPC)(&v1->Reserved + 1), MediumHighImportance);
    KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( (int)((__int64 (__fastcall *)(struct _DEVICE_OBJECT **))qword_1C001F250)(DeferredContext) >= 0 )
    {
      LOBYTE(v1->Queue.Wcb.CurrentIrp) = 1;
      ((void (*)(void))qword_1C001F268)();
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x12u,
      (__int64)&WPP_d96244bd3e763d8819ec805b3358b28f_Traceguids);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
