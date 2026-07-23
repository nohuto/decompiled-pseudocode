/*
 * XREFs of sub_140856DC0 @ 0x140856DC0
 * Callers:
 *     sub_140766914 @ 0x140766914 (sub_140766914.c)
 *     sub_14093FE20 @ 0x14093FE20 (sub_14093FE20.c)
 *     sub_140B26B08 @ 0x140B26B08 (sub_140B26B08.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D1F98 @ 0x1402D1F98 (sub_1402D1F98.c)
 *     sub_1402D2774 @ 0x1402D2774 (sub_1402D2774.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_1403D87A8 @ 0x1403D87A8 (sub_1403D87A8.c)
 *     sub_1403D8834 @ 0x1403D8834 (sub_1403D8834.c)
 *     ZwUnloadDriver @ 0x14041F1A0 (ZwUnloadDriver.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067A4A0 @ 0x14067A4A0 (sub_14067A4A0.c)
 *     sub_14067B694 @ 0x14067B694 (sub_14067B694.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     sub_1406DE960 @ 0x1406DE960 (sub_1406DE960.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140857064 @ 0x140857064 (sub_140857064.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140856DC0(UNICODE_STRING *a1, char a2)
{
  WORD MinorImageVersion; // r14
  KPROCESSOR_MODE v5; // dl
  int v6; // edi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
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
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !v5 || a2 )
  {
    sub_1402D2774(&stru_140012F00, &a1->Length);
    Destination.Buffer = 0LL;
    *(_DWORD *)&Destination.Length = 0;
    if ( PsIsCurrentThreadInServerSilo() )
    {
      DbgPrint("Server Silo attempting to unload driver %wZ\n", a1);
      return 3221225569LL;
    }
    v6 = sub_1406DE960(&Handle, 0LL, a1, 0x20019u, 0);
    if ( v6 >= 0 )
    {
      v6 = sub_14067B694(Handle, &Destination);
      ObCloseHandle(Handle, 0);
      if ( v6 >= 0 )
      {
        v22[0] = 48;
        v23 = 0LL;
        v25 = 576;
        p_Destination = &Destination;
        v27 = 0LL;
        v6 = ObOpenObjectByName((__int64)v22, (__int64)IoDriverObjectType, 0, 0LL, 1, 0LL, (__int64)&v18);
        if ( v6 >= 0 )
        {
          Object = 0LL;
          v6 = ObReferenceObjectByHandle(v18, 0, IoDriverObjectType, 0, &Object, 0LL);
          ObCloseHandle(v18, 0);
          if ( v6 >= 0 )
          {
            v7 = Object;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)Object + 3))->OptionalHeader.MinorImageVersion;
            if ( v7[13] && v7[5] )
            {
              if ( a2 || sub_14067A4A0((__int64)v7) )
              {
                v6 = sub_1403D8834(v7, &v29);
                if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741808 )
                {
                  if ( v29 )
                  {
                    if ( *((PEPROCESS *)KeGetCurrentThread() + 23) == PsInitialSystemProcess )
                    {
                      v7 = Object;
                      sub_14042A5E0(Object, v8);
                      sub_140857064(v7 + 7);
                    }
                    else
                    {
                      memset(WorkItem, 0, 0x50uLL);
                      KeInitializeEvent((PRKEVENT)&WorkItem[1], NotificationEvent, 0);
                      v7 = Object;
                      WorkItem[1].Parameter = Object;
                      WorkItem[0].WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1406DE800;
                      WorkItem[0].Parameter = WorkItem;
                      WorkItem[0].List.Flink = 0LL;
                      ExQueueWorkItem(WorkItem, DelayedWorkQueue);
                      KeWaitForSingleObject(&WorkItem[1], Executive, 0, 0, 0LL);
                    }
                    sub_1403D87A8(v7, v7);
                    ObMakeTemporaryObject(v7);
                    ObfDereferenceObject(v7);
                  }
                  ObfDereferenceObject(v7);
                  v6 = 0;
                }
                goto LABEL_17;
              }
            }
            else
            {
              v16 = v7;
            }
            ObfDereferenceObject(v16);
            v6 = -1073741808;
          }
        }
      }
    }
LABEL_17:
    sub_1402D1F98(&stru_140012EF0, &a1->Length, v6, (__int64)&Destination, MinorImageVersion);
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)v6;
  }
  if ( !SeSinglePrivilegeCheck(PrivilegeValue, v5) )
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
  Pool2 = (void *)ExAllocatePool2(289LL, LOWORD(Src[0]), 538996553LL);
  v21 = Pool2;
  memmove(Pool2, Src[1], LOWORD(Src[0]));
  Src[1] = Pool2;
  v15 = ZwUnloadDriver((PUNICODE_STRING)Src);
  ExFreePoolWithTag(Pool2, 0);
  return v15;
}
