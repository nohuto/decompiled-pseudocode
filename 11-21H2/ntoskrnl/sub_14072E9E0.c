/*
 * XREFs of sub_14072E9E0 @ 0x14072E9E0
 * Callers:
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_1407ADB90 @ 0x1407ADB90 (sub_1407ADB90.c)
 * Callees:
 *     sub_14020B0A0 @ 0x14020B0A0 (sub_14020B0A0.c)
 *     sub_1402A36D0 @ 0x1402A36D0 (sub_1402A36D0.c)
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402A7370 @ 0x1402A7370 (sub_1402A7370.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AA860 @ 0x1402AA860 (sub_1402AA860.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_1403489B0 @ 0x1403489B0 (sub_1403489B0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406C9A28 @ 0x1406C9A28 (sub_1406C9A28.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140933FE8 @ 0x140933FE8 (sub_140933FE8.c)
 *     sub_14093FC6C @ 0x14093FC6C (sub_14093FC6C.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 */

void __fastcall sub_14072E9E0(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v7; // r13
  __int64 v8; // rbp
  int v9; // r15d
  ULONG Flags; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  int v12; // edi
  struct _DEVICE_OBJECT *v13; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rax
  IRP *v16; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rcx
  ULONG v21; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v23; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  struct _KTHREAD *v25; // rax
  __int64 v26; // rax
  PFAST_IO_UNLOCK_ALL FastIoUnlockAll; // rbp
  __int64 v28; // rdi
  char v29; // r14
  IRP *v30; // rdi
  struct _IO_STACK_LOCATION *v31; // rcx
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a4;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( a3 == 1 )
  {
    if ( a2->FileObjectExtension )
    {
      v7 = sub_1402A3A14((__int64)a2, 2, 0LL);
      v8 = sub_1402A3A14(v20, (int)v19 + 4, v19);
    }
    if ( v4 == 1 )
    {
      Flags = a2->Flags;
      if ( (Flags & 0x800) != 0 )
      {
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      }
      else
      {
        AttachedDevice = IoGetRelatedDeviceObject(a2);
        Flags = a2->Flags;
      }
      v12 = Flags | 0x40000;
      v13 = AttachedDevice;
      a2->Flags = v12;
      if ( a1 && (v12 & 2) != 0 )
      {
        v9 = 1;
        while ( 1 )
        {
          CurrentThread = KeGetCurrentThread();
          --*((_WORD *)CurrentThread + 242);
          v15 = sub_140347C10((__int64)&a2->Lock, 0LL);
          if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
            break;
          if ( !(unsigned int)sub_140709FAC((volatile signed __int32 *)&a2->Type, 0LL, 0LL, v15, &v32) )
            goto LABEL_14;
        }
        if ( v15 )
          *(_BYTE *)(v15 + 18) = 1;
        ObfReferenceObject(a2);
      }
LABEL_14:
      if ( v8 )
        sub_14093FC6C(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (a2->Flags & 0x4000000) == 0 )
        KeResetEvent(&a2->Event);
      v16 = (IRP *)sub_1402AA860((__int64)v13, (unsigned __int8)v13->StackSize);
      v16->Tail.Overlay.OriginalFileObject = a2;
      v16->Tail.Overlay.Thread = KeGetCurrentThread();
      v16->UserIosb = &v16->IoStatus;
      CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
      v16->RequestorMode = 0;
      v16->UserEvent = &Event;
      v16->Overlay.AllocationSize.QuadPart = 0LL;
      v16->Flags = 1028;
      CurrentStackLocation[-1].MajorFunction = 18;
      CurrentStackLocation[-1].FileObject = a2;
      sub_1402AE1B0((__int64)v16);
      v18 = KeGetCurrentThread();
      ++*((_QWORD *)v18 + 114);
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v13, v16) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      v16->Tail.Overlay.Thread = KeGetCurrentThread();
      sub_1403489B0(v16);
      IoFreeIrp(v16);
      if ( v9 )
        sub_1402AD350((volatile __int32 *)&a2->Type);
      sub_1402A7370((__int64)a2, a1, 0LL, 0LL, 1, 1);
      for ( ; v7; v7 = *(_QWORD *)(v7 + 40) )
      {
        if ( *(_QWORD *)(v7 + 32) == a1 )
          sub_140933FE8(v7);
      }
      if ( a2->FileObjectExtension )
        sub_14020B0A0((__int64)a2);
    }
    else
    {
      sub_1406C9A28((__int64)a2, a1, v7);
      if ( (int)sub_1402A36D0((__int64)a2, a1, 1) >= 0 )
      {
        v21 = a2->Flags;
        v33 = 0LL;
        if ( (v21 & 0x800) != 0 )
        {
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        }
        else
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
          v21 = a2->Flags;
        }
        v23 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (v21 & 2) != 0 && (*((_DWORD *)KeGetCurrentThread() + 344) & 1) == 0 )
        {
          v9 = 1;
          while ( 1 )
          {
            v25 = KeGetCurrentThread();
            --*((_WORD *)v25 + 242);
            v26 = sub_140347C10((__int64)&a2->Lock, 0LL);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)sub_140709FAC((volatile signed __int32 *)&a2->Type, 0LL, 0LL, v26, &v35) )
              goto LABEL_40;
          }
          if ( v26 )
            *(_BYTE *)(v26 + 18) = 1;
          ObfReferenceObject(a2);
        }
LABEL_40:
        if ( !FastIoDispatch )
          goto LABEL_49;
        FastIoUnlockAll = FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_49;
        if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(v23->DriverObject) )
          v28 = sub_140A8A9AC();
        else
          v28 = 0LL;
        v29 = sub_14042A5E0(a2, *((_QWORD *)KeGetCurrentThread() + 23));
        if ( v28 )
          sub_140A8A8D4(v28, FastIoUnlockAll);
        if ( !v29 )
        {
LABEL_49:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          if ( (a2->Flags & 0x4000000) == 0 )
            KeResetEvent(&a2->Event);
          v30 = (IRP *)sub_1402AA860((__int64)v23, (unsigned __int8)v23->StackSize);
          v30->Tail.Overlay.OriginalFileObject = a2;
          v30->Tail.Overlay.Thread = KeGetCurrentThread();
          v30->UserIosb = &v30->IoStatus;
          v31 = v30->Tail.Overlay.CurrentStackLocation;
          v30->RequestorMode = 0;
          v30->UserEvent = &Event;
          v30->Flags = 4;
          v30->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v31[-1].MajorFunction = 785;
          v31[-1].FileObject = a2;
          ObfReferenceObject(a2);
          sub_1402AE1B0((__int64)v30);
          if ( IofCallDriver(v23, v30) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v9 == 1 )
          sub_1402AD350((volatile __int32 *)&a2->Type);
      }
    }
  }
}
