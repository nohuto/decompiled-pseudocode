/*
 * XREFs of PmIoctlRedirect @ 0x1C001DAB0
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     PmIoctlDsm @ 0x1C001D9C0 (PmIoctlDsm.c)
 * Callees:
 *     PmIsOverlap @ 0x1C0004E2C (PmIsOverlap.c)
 *     PmRedirectRequest @ 0x1C000F320 (PmRedirectRequest.c)
 *     PmIoctlPassThroughQuerySectorWriteAta @ 0x1C00236F6 (PmIoctlPassThroughQuerySectorWriteAta.c)
 *     PmIoctlPassThroughQuerySectorWriteScsi @ 0x1C0023976 (PmIoctlPassThroughQuerySectorWriteScsi.c)
 *     PmIoctlDsmQuerySectorWrite @ 0x1C0025660 (PmIoctlDsmQuerySectorWrite.c)
 */

__int64 __fastcall PmIoctlRedirect(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v4; // r9
  __int64 QuadPart; // r8
  IRP *v6; // rbx
  char v7; // dl
  char v8; // r10
  int Status; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  struct _IO_STACK_LOCATION *v18; // rax
  struct _IO_STACK_LOCATION *v19; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-20h] BYREF
  int v21; // [rsp+70h] [rbp+20h] BYREF
  __int64 v22; // [rsp+78h] [rbp+28h] BYREF
  union _LARGE_INTEGER v23; // [rsp+80h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  QuadPart = 0LL;
  v6 = a2;
  v22 = 0LL;
  v7 = 0;
  v23.QuadPart = 0LL;
  LOBYTE(v21) = 0;
  v8 = 0;
  Status = 0;
  memset(&Event, 0, sizeof(Event));
  if ( (CurrentStackLocation->Flags & 0x10) != 0 || *(_DWORD *)(v2 + 648) != 1 )
    goto LABEL_2;
  v11 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315396;
  if ( !v11 || (v12 = v11 - 16) == 0 )
  {
    v8 = 1;
    goto LABEL_15;
  }
  v13 = v12 - 24;
  if ( !v13 || (v14 = v13 - 4) == 0 )
  {
    v17 = PmIoctlPassThroughQuerySectorWriteAta(v6, &v21, &v22, &v23);
    goto LABEL_16;
  }
  v15 = v14 - 20;
  if ( !v15 || (v16 = v15 - 4) == 0 )
  {
LABEL_15:
    LOBYTE(a2) = v8;
    v17 = PmIoctlPassThroughQuerySectorWriteScsi((int)v6, (int)a2, (int)&v21, (int)&v22, (ULONGLONG *)&v23.QuadPart);
    goto LABEL_16;
  }
  if ( v16 == 2671548 )
  {
    v17 = PmIoctlDsmQuerySectorWrite(v6, &v21, &v22, &v23);
LABEL_16:
    Status = v17;
    if ( v17 < 0 )
    {
LABEL_22:
      v6->IoStatus.Status = Status;
      IofCompleteRequest(v6, 0);
      return (unsigned int)Status;
    }
    v4 = v22;
    v7 = v21;
    QuadPart = v23.QuadPart;
  }
  if ( v7 )
  {
    if ( PmIsOverlap(v2, v4, QuadPart) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v18 = v6->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v18->MajorFunction;
      *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v18->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v18[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v18->Parameters.SetQuota + 6);
      v18[-1].FileObject = v18->FileObject;
      v18[-1].Control = 0;
      v19 = v6->Tail.Overlay.CurrentStackLocation;
      v19[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PmSignalCompletion;
      v19[-1].Context = &Event;
      v19[-1].Control = -32;
      --v6->CurrentLocation;
      --v6->Tail.Overlay.CurrentStackLocation;
      PmRedirectRequest(v2, v6);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v6->IoStatus.Status;
    }
    if ( Status < 0 )
      goto LABEL_22;
  }
LABEL_2:
  ++v6->CurrentLocation;
  ++v6->Tail.Overlay.CurrentStackLocation;
  return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 16), v6);
}
