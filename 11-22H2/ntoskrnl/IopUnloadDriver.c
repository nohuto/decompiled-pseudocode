/*
 * XREFs of IopUnloadDriver @ 0x1408585F4
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x140869C04 (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x140951B90 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140B6C1F8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     PnpDiagnosticTraceObject @ 0x1403229A0 (PnpDiagnosticTraceObject.c)
 *     DbgPrint @ 0x14032A510 (DbgPrint.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1403622E4 (PnpDiagnosticTraceDriverFullInfo.c)
 *     IopCheckUnloadDriver @ 0x1403AB540 (IopCheckUnloadDriver.c)
 *     IopCleanupNotifications @ 0x1403AB5EC (IopCleanupNotifications.c)
 *     ZwUnloadDriver @ 0x14041E160 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     IopGetDriverNameFromKeyNode @ 0x14068CCD4 (IopGetDriverNameFromKeyNode.c)
 *     PnpIsLegacyDriver @ 0x14068F830 (PnpIsLegacyDriver.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     IopOpenRegistryKey @ 0x1407CF480 (IopOpenRegistryKey.c)
 *     ObMakeTemporaryObject @ 0x1407E1210 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140858898 (EtwTiLogDriverObjectUnLoad.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopUnloadDriver(UNICODE_STRING *a1, char a2)
{
  unsigned __int16 MinorImageVersion; // r14
  KPROCESSOR_MODE PreviousMode; // dl
  int DriverNameFromKeyNode; // edi
  _QWORD *v7; // rbx
  void (__fastcall *v8)(PVOID); // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rcx
  unsigned __int64 v13; // rdx
  void *Pool2; // rdi
  unsigned int v15; // ebx
  void *v16; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-E8h] BYREF
  HANDLE v18; // [rsp+48h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-D8h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-C8h] BYREF
  PVOID v21; // [rsp+70h] [rbp-B8h]
  _DWORD v22[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+80h] [rbp-A8h]
  UNICODE_STRING *p_Destination; // [rsp+88h] [rbp-A0h]
  int v25; // [rsp+90h] [rbp-98h]
  int v26; // [rsp+94h] [rbp-94h]
  __int128 v27; // [rsp+98h] [rbp-90h]
  struct _WORK_QUEUE_ITEM WorkItem[3]; // [rsp+B0h] [rbp-78h] BYREF
  char v29; // [rsp+140h] [rbp+18h] BYREF
  PVOID Object; // [rsp+148h] [rbp+20h] BYREF

  *(_OWORD *)Src = 0LL;
  v21 = 0LL;
  v22[1] = 0;
  v26 = 0;
  Handle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v18 = 0LL;
  v29 = 0;
  LOBYTE(MinorImageVersion) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || a2 )
  {
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
        v22[0] = 48;
        v23 = 0LL;
        v25 = 576;
        p_Destination = &Destination;
        v27 = 0LL;
        DriverNameFromKeyNode = ObOpenObjectByName(
                                  (__int64)v22,
                                  (__int64)IoDriverObjectType,
                                  0,
                                  0LL,
                                  1,
                                  0LL,
                                  (__int64)&v18);
        if ( DriverNameFromKeyNode >= 0 )
        {
          Object = 0LL;
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v18, 0, IoDriverObjectType, 0, &Object, 0LL);
          ObCloseHandle(v18, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v7 = Object;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)Object + 3))->OptionalHeader.MinorImageVersion;
            if ( v7[13] && v7[5] )
            {
              if ( a2 || (unsigned int)PnpIsLegacyDriver((__int64)v7) )
              {
                DriverNameFromKeyNode = IopCheckUnloadDriver(v7, &v29);
                if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
                {
                  if ( v29 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                    {
                      v8 = (void (__fastcall *)(PVOID))v7[13];
                      v7 = Object;
                      v8(Object);
                    }
                    else
                    {
                      memset(WorkItem, 0, 0x50uLL);
                      KeInitializeEvent((PRKEVENT)&WorkItem[1], NotificationEvent, 0);
                      v7 = Object;
                      WorkItem[1].Parameter = Object;
                      WorkItem[0].WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                      WorkItem[0].Parameter = WorkItem;
                      WorkItem[0].List.Flink = 0LL;
                      ExQueueWorkItem(WorkItem, DelayedWorkQueue);
                      KeWaitForSingleObject(&WorkItem[1], Executive, 0, 0, 0LL);
                    }
                    EtwTiLogDriverObjectUnLoad(v7 + 7);
                    IopCleanupNotifications(v7, v7);
                    ObMakeTemporaryObject(v7);
                    ObfDereferenceObject(v7);
                  }
                  ObfDereferenceObject(v7);
                  DriverNameFromKeyNode = 0;
                }
                goto LABEL_17;
              }
            }
            else
            {
              v16 = v7;
            }
            ObfDereferenceObject(v16);
            DriverNameFromKeyNode = -1073741808;
          }
        }
      }
    }
LABEL_17:
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverUnload_Stop,
      &a1->Length,
      DriverNameFromKeyNode,
      &Destination,
      MinorImageVersion);
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)DriverNameFromKeyNode;
  }
  if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    return 3221225569LL;
  v10 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v10 = (__int64)a1;
  v11 = *(_DWORD *)v10;
  LODWORD(Src[0]) = v11;
  v12 = *(void **)(v10 + 8);
  Src[1] = v12;
  if ( !(_WORD)v11 )
    return 3221225485LL;
  if ( ((unsigned __int8)v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (unsigned __int64)v12 + (unsigned __int16)v11;
  if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)v12 )
    MEMORY[0x7FFFFFFF0000] = 0;
  Pool2 = (void *)ExAllocatePool2(289LL, LOWORD(Src[0]), 844001097LL);
  v21 = Pool2;
  memmove(Pool2, Src[1], LOWORD(Src[0]));
  Src[1] = Pool2;
  v15 = ZwUnloadDriver((PUNICODE_STRING)Src);
  ExFreePoolWithTag(Pool2, 0);
  return v15;
}
