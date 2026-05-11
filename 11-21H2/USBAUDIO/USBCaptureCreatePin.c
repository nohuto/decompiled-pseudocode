/*
 * XREFs of USBCaptureCreatePin @ 0x1C003A8B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 */

__int64 __fastcall USBCaptureCreatePin(PKSPIN Pin)
{
  _QWORD *Context; // r13
  NTSTATUS v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r10
  int v7; // r11d
  __int64 v8; // rbp
  int v9; // r8d
  int v10; // r12d
  __int64 v11; // r9
  char v12; // r15
  char v13; // dl
  _QWORD *v14; // r14
  unsigned int v15; // ebp
  __int64 v16; // rax
  PIRP Irp; // rax
  PKSDATAFORMAT ConnectionFormat; // rdx
  _QWORD *v19; // r14
  __int64 v20; // rbp
  const KSALLOCATOR_FRAMING_EX *AllocatorFraming; // rcx
  PKSGATE i; // rax
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v24; // rax
  __int64 Tag; // [rsp+20h] [rbp-68h]
  int v27; // [rsp+90h] [rbp+8h]

  Context = Pin->Context;
  v3 = -1073741637;
  v4 = Context[19];
  v5 = Context[18];
  v6 = v4 + 960;
  v7 = *(_DWORD *)(v5 + 220);
  v27 = v7;
  v8 = *(_QWORD *)(*(_QWORD *)(Context[2] + 16LL) + 72LL);
  v9 = *(_DWORD *)(v8 + 208);
  v10 = 12 * v9 + 152;
  v11 = v4 + 960 + (unsigned int)(12 * v10);
  v12 = 1;
  v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Tag,
      8u,
      0x11u,
      (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
    v9 = *(_DWORD *)(v8 + 208);
    v6 = v4 + 960;
    v11 = v4 + 960 + (unsigned int)(12 * v10);
    v7 = v27;
  }
  *(_DWORD *)(v4 + 108) = v9;
  *(_BYTE *)(v4 + 112) = *(_BYTE *)(v8 + 212);
  if ( (*(_DWORD *)(v5 + 216) & 0xF000) == 0 )
  {
    v3 = 0;
    v14 = (_QWORD *)(v4 + 336);
    v15 = 0;
    while ( v3 >= 0 )
    {
      *(v14 - 1) = Pin;
      v16 = *(_DWORD *)(v4 + 108) * v7 * v15;
      *(v14 - 3) = v6 + v10 * v15;
      *v14 = v11 + v16;
      Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(Context[2] + 40LL) + 76LL), 0);
      *(v14 - 4) = Irp;
      if ( Irp )
      {
        v3 = KsAddItemToObjectBag(Pin->Bag, Irp, (PFNKSFREE)IoFreeIrp);
        if ( v3 < 0 )
          IoFreeIrp((PIRP)*(v14 - 4));
      }
      else
      {
        v3 = -1073741670;
      }
      v11 = v4 + 960 + (unsigned int)(12 * v10);
      v6 = v4 + 960;
      v7 = v27;
      ++v15;
      v14 += 7;
      if ( v15 >= 0xC )
      {
        if ( v3 >= 0 )
        {
          ConnectionFormat = Pin->ConnectionFormat;
          v19 = Pin->Context;
          v20 = v19[19];
          *((_DWORD *)v19 + 26) = ConnectionFormat[1].Flags;
          *(_DWORD *)(v20 + 100) = ConnectionFormat[1].SampleSize;
          *(_DWORD *)(v20 + 8) = WORD1(ConnectionFormat[1].Alignment)
                               * (*((unsigned __int16 *)&ConnectionFormat[1].Alignment + 7) >> 3);
          v3 = _KsEdit(Pin->Bag, (PVOID *)Pin, 0x88u, 0x88u, 0x41627845u);
          if ( v3 >= 0 )
          {
            v3 = _KsEdit(Pin->Bag, (PVOID *)&Pin->Descriptor->AllocatorFraming, 0x70u, 0x70u, 0x41627845u);
            if ( v3 >= 0 )
            {
              AllocatorFraming = Pin->Descriptor->AllocatorFraming;
              AllocatorFraming->FramingItem[0].FramingRange.Range.MinFrameSize = *(_DWORD *)(v20 + 8)
                                                                               * (*((_DWORD *)v19 + 26)
                                                                                / 0x64u);
              AllocatorFraming->FramingItem[0].FramingRange.Range.MaxFrameSize = *(_DWORD *)(v20 + 8)
                                                                               * (*((_DWORD *)v19 + 26)
                                                                                / 0x64u);
              AllocatorFraming->FramingItem[0].FramingRange.Range.Stepping = *(_DWORD *)(v20 + 8);
              *(_QWORD *)(v4 + 144) = v4 + 136;
              *(_QWORD *)(v4 + 136) = v4 + 136;
              *(_QWORD *)(v4 + 128) = v4 + 120;
              *(_QWORD *)(v4 + 120) = v4 + 120;
              KeInitializeMutex((PRKMUTEX)(v4 + 152), 0);
              KeInitializeEvent((PRKEVENT)(v4 + 256), NotificationEvent, 0);
              KeInitializeEvent((PRKEVENT)(v4 + 216), NotificationEvent, 0);
              for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
                ;
              WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
              *(_QWORD *)(v4 + 240) = WorkItem;
              if ( WorkItem )
              {
                v24 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
                *(_QWORD *)(v4 + 280) = v24;
                if ( v24 )
                  return (unsigned int)v3;
                IoFreeWorkItem(*(PIO_WORKITEM *)(v4 + 240));
              }
              v3 = -1073741670;
            }
          }
        }
        break;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v12 = 0;
  }
  if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v12,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Tag,
      8u,
      0x12u,
      (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
  return (unsigned int)v3;
}
