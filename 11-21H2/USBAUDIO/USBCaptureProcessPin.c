/*
 * XREFs of USBCaptureProcessPin @ 0x1C00066A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     USBCaptureCopyRequestToBuffer @ 0x1C003A63C (USBCaptureCopyRequestToBuffer.c)
 */

__int64 __fastcall USBCaptureProcessPin(PKSPIN Pin)
{
  _QWORD *Context; // rax
  __int64 v3; // rbx
  KSPIN_LOCK *v4; // r12
  KIRQL v5; // al
  char v6; // bp
  KIRQL v7; // r13
  struct _KSSTREAM_POINTER *LeadingEdgeStreamPointer; // r14
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  struct _IO_WORKITEM *v14; // rcx
  PKSGATE i; // rax
  char v16; // dl
  __int64 v18; // [rsp+20h] [rbp-58h]
  char v19; // [rsp+80h] [rbp+8h] BYREF

  Context = Pin->Context;
  v3 = Context[19];
  v4 = Context + 14;
  v5 = KeAcquireSpinLockRaiseToDpc(Context + 14);
  v6 = 1;
  *(_BYTE *)(v3 + 98) = 1;
  v7 = v5;
  LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
  if ( LeadingEdgeStreamPointer )
  {
    v9 = v3 + 136;
    do
    {
      v10 = *(_QWORD **)v9;
      if ( *(_QWORD *)v9 == v9 )
        break;
      if ( !*(_BYTE *)(v3 + 96) )
        goto LABEL_33;
      v19 = 0;
      KeReleaseSpinLock(v4, v7);
      USBCaptureCopyRequestToBuffer(v10, LeadingEdgeStreamPointer, &v19);
      if ( v19 )
        LeadingEdgeStreamPointer = KsPinGetLeadingEdgeStreamPointer(Pin, KSSTREAM_POINTER_STATE_LOCKED);
      v7 = KeAcquireSpinLockRaiseToDpc(v4);
      if ( *((_DWORD *)v10 + 8) == *(_DWORD *)(v3 + 108) && *(_BYTE *)(v3 + 96) )
      {
        *((_DWORD *)v10 + 8) = 0;
        v11 = *(_QWORD **)v9;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9
          || (v12 = *v11, *(_QWORD **)(*v11 + 8LL) != v11)
          || (*(_QWORD *)v9 = v12, *(_QWORD *)(v12 + 8) = v9, v13 = *(_QWORD **)(v3 + 128), *v13 != v3 + 120) )
        {
          __fastfail(3u);
        }
        *v11 = v3 + 120;
        v11[1] = v13;
        *v13 = v11;
        *(_QWORD *)(v3 + 128) = v11;
        if ( !*(_BYTE *)(v3 + 248) )
        {
          v14 = *(struct _IO_WORKITEM **)(v3 + 280);
          *(_BYTE *)(v3 + 248) = 1;
          IoQueueWorkItem(v14, USBCaptureRequeueWorker, CriticalWorkQueue, Pin);
        }
      }
    }
    while ( LeadingEdgeStreamPointer );
  }
  if ( *(_BYTE *)(v3 + 96) && *(_QWORD *)(v3 + 136) == v3 + 136 )
  {
    for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
      ;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v16 = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( v16 || v6 )
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v16,
        v6,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v18,
        3u,
        0x15u,
        (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
    *(_BYTE *)(v3 + 97) = 0;
  }
LABEL_33:
  if ( LeadingEdgeStreamPointer )
    KsStreamPointerUnlock(LeadingEdgeStreamPointer, 0);
  *(_BYTE *)(v3 + 98) = 0;
  KeReleaseSpinLock(v4, v7);
  return 0LL;
}
