/*
 * XREFs of sub_140783A9C @ 0x140783A9C
 * Callers:
 *     sub_14078362C @ 0x14078362C (sub_14078362C.c)
 *     sub_1407839B4 @ 0x1407839B4 (sub_1407839B4.c)
 *     sub_14078CD70 @ 0x14078CD70 (sub_14078CD70.c)
 *     sub_140810B00 @ 0x140810B00 (sub_140810B00.c)
 *     sub_14081AB80 @ 0x14081AB80 (sub_14081AB80.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E00A4 @ 0x1402E00A4 (sub_1402E00A4.c)
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406C8550 @ 0x1406C8550 (sub_1406C8550.c)
 *     sub_1406D839C @ 0x1406D839C (sub_1406D839C.c)
 */

__int64 __fastcall sub_140783A9C(PIRP Irp, unsigned __int8 a2, unsigned int a3, UNICODE_STRING *a4, int a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  struct _DEVICE_OBJECT *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // r13
  CCHAR v16; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v18; // rax
  struct _IO_STACK_LOCATION *v19; // rax
  NTSTATUS Status; // esi
  __int64 result; // rax
  unsigned int v22; // ebx
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF

  v6 = a2;
  memset(&Event, 0, sizeof(Event));
  v9 = sub_1402E00A4(a3);
  v10 = v9;
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 + 48);
    if ( (v11 & 0x20000000) == 0 )
    {
      v12 = *(struct _DEVICE_OBJECT **)(v10 + 16);
      if ( (v11 & 0x10000000) != 0 )
      {
        v22 = sub_14042A5E0(v6, a4);
        Irp->IoStatus.Information = 0LL;
        Irp->IoStatus.Status = v22;
        sub_1402E0164(v10);
        return v22;
      }
      else
      {
        if ( (_BYTE)v6 != 11 && (_BYTE)v6 != 8 )
        {
          v13 = *(_QWORD *)(a6 + 24) - 0x11D1AADBC7BF35D2LL;
          if ( *(_QWORD *)(a6 + 24) == 0x11D1AADBC7BF35D2LL )
            v13 = *(_QWORD *)(a6 + 32) - 0x102906C9A0004ABFLL;
          if ( !v13 )
            goto LABEL_36;
          v14 = *(_QWORD *)(a6 + 24) - 0x11D1AADBC7BF35D3LL;
          if ( *(_QWORD *)(a6 + 24) == 0x11D1AADBC7BF35D3LL )
            v14 = *(_QWORD *)(a6 + 32) - 0x102906C9A0004ABFLL;
          if ( !v14 )
          {
LABEL_36:
            if ( *(_QWORD *)(v10 + 24) )
              v12 = qword_140C164D8;
          }
        }
        AttachedDeviceReference = IoGetAttachedDeviceReference(v12);
        v16 = AttachedDeviceReference->StackSize + 1;
        if ( v16 <= qword_140C164D8->StackSize || AttachedDeviceReference == qword_140C164D8 )
        {
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_140248550;
          CurrentStackLocation[-1].Context = &Event;
          CurrentStackLocation[-1].Control = -32;
          v18 = Irp->Tail.Overlay.CurrentStackLocation;
          v18[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)a6;
          v18[-1].MajorFunction = 23;
          v18[-1].MinorFunction = v6;
          v18[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v12;
          v18[-1].Parameters.QueryDirectory.FileName = a4;
          v18[-1].Parameters.Read.ByteOffset.LowPart = a5;
          v19 = Irp->Tail.Overlay.CurrentStackLocation;
          Irp->IoStatus.Status = -1073741637;
          v19->Control |= 1u;
          Status = IofCallDriver(AttachedDeviceReference, Irp);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = Irp->IoStatus.Status;
          }
          if ( Status == -1073741637 )
          {
            Status = -1073741163;
            Irp->IoStatus.Status = -1073741163;
          }
          if ( ((_BYTE)v6 == 11 || (_BYTE)v6 == 8) && Status >= 0 && Irp->IoStatus.Information > 0x18 )
            sub_1406D839C((__int64)Irp, v6, a5, v10);
          sub_1402E0164(v10);
        }
        else
        {
          sub_1402E0164(v10);
          sub_1406C8550(v16);
          Status = -1073741160;
        }
        ObfDereferenceObject(AttachedDeviceReference);
        return (unsigned int)Status;
      }
    }
    sub_1402E0164(v10);
  }
  result = 3221226134LL;
  if ( (unsigned __int8)(v6 - 1) > 1u )
    return 3221225473LL;
  return result;
}
