/*
 * XREFs of USBCaptureResetWorker @ 0x1C0006A30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     PinWaitForStarvationTimeout @ 0x1C0002270 (PinWaitForStarvationTimeout.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C00071C0 (USBCaptureWaitForWorkerComplete.c)
 *     USBCaptureStartTransfers @ 0x1C003ACD4 (USBCaptureStartTransfers.c)
 */

void __fastcall USBCaptureResetWorker(PDEVICE_OBJECT DeviceObject, struct _KSPIN *Context)
{
  _QWORD *v2; // r15
  __int64 v4; // rdi
  KIRQL v5; // bp
  char v6; // bl
  char v7; // dl
  char v8; // r8
  KSPIN_LOCK *v9; // rcx
  _QWORD **v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // r9
  unsigned int *v15; // rcx
  __int64 v16; // rdx
  KIRQL v17; // bl
  int v18; // [rsp+20h] [rbp-48h]

  v2 = Context->Context;
  v4 = v2[19];
  KsPinAcquireProcessingMutex(Context);
  USBCaptureWaitForWorkerComplete(v2, v4 + 248, v4 + 256);
  v5 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v7 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v8 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v8 = 0;
  }
  if ( v7 || v8 )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v8,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      3u,
      0xAu,
      (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
  v9 = v2 + 14;
  if ( *(_BYTE *)(v4 + 96) )
  {
    KeReleaseSpinLock(v9, v5);
    PinWaitForStarvationTimeout((__int64)Context, 0LL);
    *(_QWORD *)(v4 + 128) = v4 + 120;
    v10 = (_QWORD **)(v4 + 136);
    *(_QWORD *)(v4 + 120) = v4 + 120;
    while ( 1 )
    {
      v11 = *v10;
      if ( *v10 == v10 )
        break;
      if ( (_QWORD **)v11[1] != v10 || (v12 = (_QWORD *)*v11, *(_QWORD **)(*v11 + 8LL) != v11) )
        __fastfail(3u);
      *v10 = v12;
      v13 = 0;
      v12[1] = v10;
      v14 = v11[3];
      if ( *(_DWORD *)(v14 + 132) )
      {
        v15 = (unsigned int *)(v14 + 144);
        do
        {
          if ( (v15[1] & 0x80000000) == 0 )
            v2[11] -= *v15;
          ++v13;
          v15 += 3;
        }
        while ( v13 < *(_DWORD *)(v14 + 132) );
      }
    }
  }
  else
  {
    KeReleaseSpinLock(v9, v5);
  }
  KsPinReleaseProcessingMutex(Context);
  if ( *(_BYTE *)(v4 + 96) )
  {
    LOBYTE(v16) = 1;
    if ( (int)USBCaptureStartTransfers(Context, v16) < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v6 = 0;
      }
      if ( v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v6,
          *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v18,
          8u,
          0xBu,
          (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
    }
  }
  v17 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  KeSetEvent((PRKEVENT)(v4 + 216), 0, 0);
  *(_BYTE *)(v4 + 208) = 0;
  KeReleaseSpinLock(v2 + 14, v17);
}
