/*
 * XREFs of IopUnloadDriver @ 0x140857B78
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x140869974 (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x140951CE0 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140B6B2A8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402936E0 (PdcCreateWatchdogAroundClientCall.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CF20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CF40 (PsAttachSiloToCurrentThread.c)
 *     PnpDiagnosticTraceObject @ 0x140322E10 (PnpDiagnosticTraceObject.c)
 *     DbgPrint @ 0x14032A980 (DbgPrint.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140362AD4 (PnpDiagnosticTraceDriverFullInfo.c)
 *     IopCheckUnloadDriver @ 0x1403ABEFC (IopCheckUnloadDriver.c)
 *     IopCleanupNotifications @ 0x1403ABFA8 (IopCleanupNotifications.c)
 *     Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage @ 0x14040FF68 (Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage.c)
 *     ZwUnloadDriver @ 0x14041EBB0 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     PnpIsLegacyDriver @ 0x14068F830 (PnpIsLegacyDriver.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     IopOpenRegistryKey @ 0x1407CF1EC (IopOpenRegistryKey.c)
 *     ObMakeTemporaryObject @ 0x1407E0F60 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140858000 (EtwTiLogDriverObjectUnLoad.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopUnloadDriver(UNICODE_STRING *a1, char a2)
{
  unsigned __int16 MinorImageVersion; // r14
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v7; // rax
  int v8; // edx
  void *v9; // rcx
  unsigned __int64 v10; // rdx
  void *Pool2; // rdi
  int DriverNameFromKeyNode; // ebx
  wchar_t *Buffer; // rcx
  _QWORD *v14; // rdi
  void *v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *v17; // rbx
  void (__fastcall *v18)(PVOID); // rax
  void (__fastcall *v19)(PVOID); // rax
  HANDLE Handle; // [rsp+40h] [rbp-E8h] BYREF
  HANDLE v21; // [rsp+48h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-D8h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-C8h] BYREF
  PVOID P; // [rsp+70h] [rbp-B8h]
  _DWORD v25[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+80h] [rbp-A8h]
  UNICODE_STRING *p_Destination; // [rsp+88h] [rbp-A0h]
  int v28; // [rsp+90h] [rbp-98h]
  int v29; // [rsp+94h] [rbp-94h]
  __int128 v30; // [rsp+98h] [rbp-90h]
  struct _WORK_QUEUE_ITEM WorkItem[3]; // [rsp+B0h] [rbp-78h] BYREF
  char v32; // [rsp+140h] [rbp+18h] BYREF
  PVOID Object; // [rsp+148h] [rbp+20h] BYREF

  *(_OWORD *)Src = 0LL;
  P = 0LL;
  v25[1] = 0;
  v29 = 0;
  Handle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v21 = 0LL;
  v32 = 0;
  LOBYTE(MinorImageVersion) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !a2 )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
      return 3221225569LL;
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    v8 = *(_DWORD *)v7;
    LODWORD(Src[0]) = v8;
    v9 = *(void **)(v7 + 8);
    Src[1] = v9;
    if ( !(_WORD)v8 )
      return 3221225485LL;
    if ( ((unsigned __int8)v9 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (unsigned __int64)v9 + (unsigned __int16)v8;
    if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)v9 )
      MEMORY[0x7FFFFFFF0000] = 0;
    Pool2 = (void *)ExAllocatePool2(289LL, LOWORD(Src[0]), 844001097LL);
    P = Pool2;
    memmove(Pool2, Src[1], LOWORD(Src[0]));
    Src[1] = Pool2;
    DriverNameFromKeyNode = ZwUnloadDriver((PUNICODE_STRING)Src);
    Buffer = (wchar_t *)Pool2;
    goto LABEL_37;
  }
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverUnload_Start, &a1->Length);
  Destination.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  if ( PsIsCurrentThreadInServerSilo() )
  {
    DbgPrint("Server Silo attempting to unload driver %wZ\n", a1);
    return 3221225569LL;
  }
  DriverNameFromKeyNode = IopOpenRegistryKey(&Handle, 0LL, a1, 0x20019u, 0);
  if ( DriverNameFromKeyNode >= 0 )
  {
    DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
    ObCloseHandle(Handle, 0);
    if ( DriverNameFromKeyNode >= 0 )
    {
      v25[0] = 48;
      v26 = 0LL;
      v28 = 576;
      p_Destination = &Destination;
      v30 = 0LL;
      DriverNameFromKeyNode = ObOpenObjectByName(
                                (__int64)v25,
                                (__int64)IoDriverObjectType,
                                0,
                                0LL,
                                1,
                                0LL,
                                (__int64)&v21);
      if ( DriverNameFromKeyNode >= 0 )
      {
        Object = 0LL;
        DriverNameFromKeyNode = ObReferenceObjectByHandle(v21, 0, IoDriverObjectType, 0, &Object, 0LL);
        ObCloseHandle(v21, 0);
        if ( DriverNameFromKeyNode >= 0 )
        {
          v14 = Object;
          MinorImageVersion = RtlImageNtHeader(*((PVOID *)Object + 3))->OptionalHeader.MinorImageVersion;
          if ( v14[13] && v14[5] )
          {
            if ( a2 || (unsigned int)PnpIsLegacyDriver((__int64)v14) )
            {
              DriverNameFromKeyNode = IopCheckUnloadDriver(v14, &v32);
              if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
              {
                if ( v32 )
                {
                  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                  {
                    if ( (unsigned int)Feature_Servicing_DriverEntryThreadAttachIssue__private_IsEnabledDeviceUsage() )
                    {
                      v16 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
                      v17 = PsAttachSiloToCurrentThread(v16);
                      v18 = (void (__fastcall *)(PVOID))v14[13];
                      v14 = Object;
                      v18(Object);
                      PsDetachSiloFromCurrentThread(v17);
                    }
                    else
                    {
                      v19 = (void (__fastcall *)(PVOID))v14[13];
                      v14 = Object;
                      v19(Object);
                    }
                  }
                  else
                  {
                    memset(WorkItem, 0, 0x50uLL);
                    KeInitializeEvent((PRKEVENT)&WorkItem[1], NotificationEvent, 0);
                    v14 = Object;
                    WorkItem[1].Parameter = Object;
                    WorkItem[0].WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                    WorkItem[0].Parameter = WorkItem;
                    WorkItem[0].List.Flink = 0LL;
                    ExQueueWorkItem(WorkItem, DelayedWorkQueue);
                    KeWaitForSingleObject(&WorkItem[1], Executive, 0, 0, 0LL);
                  }
                  EtwTiLogDriverObjectUnLoad(v14 + 7);
                  IopCleanupNotifications(v14, v14);
                  ObMakeTemporaryObject(v14);
                  ObfDereferenceObject(v14);
                }
                ObfDereferenceObject(v14);
                DriverNameFromKeyNode = 0;
              }
              goto LABEL_36;
            }
          }
          else
          {
            v15 = v14;
          }
          ObfDereferenceObject(v15);
          DriverNameFromKeyNode = -1073741808;
        }
      }
    }
  }
LABEL_36:
  PnpDiagnosticTraceDriverFullInfo(
    &KMPnPEvt_DriverUnload_Stop,
    &a1->Length,
    DriverNameFromKeyNode,
    &Destination,
    MinorImageVersion);
  Buffer = Destination.Buffer;
  if ( Destination.Buffer )
LABEL_37:
    ExFreePoolWithTag(Buffer, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
