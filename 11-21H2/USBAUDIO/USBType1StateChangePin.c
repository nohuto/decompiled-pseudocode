/*
 * XREFs of USBType1StateChangePin @ 0x1C0005490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0001D78 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     PinWaitForStarvationTimeout @ 0x1C0002270 (PinWaitForStarvationTimeout.c)
 *     USBType1AsyncEndpointAbortFeedback @ 0x1C000374C (USBType1AsyncEndpointAbortFeedback.c)
 *     USBType1ClearLeftovers @ 0x1C0004868 (USBType1ClearLeftovers.c)
 *     USBHwDataPipeReset @ 0x1C0033508 (USBHwDataPipeReset.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0034900 (USBHwSelectStreamingAudioInterface.c)
 *     USBType1NeedLockDelay @ 0x1C0039EC8 (USBType1NeedLockDelay.c)
 *     USBType1SetSampleRate @ 0x1C003A3D0 (USBType1SetSampleRate.c)
 */

__int64 __fastcall USBType1StateChangePin(PKSPIN Pin, int a2, __int64 a3)
{
  _QWORD *Context; // rbp
  int v4; // ebx
  unsigned int v7; // r14d
  _QWORD *v8; // r13
  __int64 v9; // rsi
  char v10; // r15
  char v11; // dl
  int v12; // ebx
  int v13; // ebx
  KIRQL v14; // al
  char v15; // dl
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r9
  PDEVICE_OBJECT v19; // rcx
  char v20; // dl
  unsigned __int16 v21; // ax
  KIRQL v22; // bl
  int v24; // [rsp+20h] [rbp-68h]
  union _LARGE_INTEGER v25; // [rsp+90h] [rbp+8h] BYREF

  Context = Pin->Context;
  v4 = a3;
  v7 = 0;
  v8 = (_QWORD *)Context[18];
  v9 = Context[19];
  v10 = 1;
  v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qdd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      a3,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v24,
      8u,
      0x13u,
      (__int64)&WPP_1518cd3ab610380295f9683503cbea4d_Traceguids);
  if ( !v4 )
  {
    v22 = KeAcquireSpinLockRaiseToDpc(Context + 14);
    *((_BYTE *)Context + 45) = 0;
    USBType1ClearLeftovers(Context);
    Context[10] = 0LL;
    Context[11] = 0LL;
    Context[12] = 0LL;
    *(_BYTE *)(v9 + 97) = 0;
    KeReleaseSpinLock(Context + 14, v22);
    return v7;
  }
  v12 = v4 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *(_BYTE *)(v9 + 100) = 1;
        *(_BYTE *)(v9 + 98) = 1;
      }
      return v7;
    }
    if ( a2 != 3 )
      return v7;
    KsPinAcquireProcessingMutex(Pin);
    v14 = KeAcquireSpinLockRaiseToDpc(Context + 14);
    *(_BYTE *)(v9 + 100) = 0;
    KeReleaseSpinLock(Context + 14, v14);
    v25.QuadPart = -50000000LL;
    v7 = PinWaitForStarvationTimeout((__int64)Pin, &v25);
    if ( v7 == 258 )
    {
      USBHwDataPipeReset(Pin);
      PinWaitForStarvationTimeout((__int64)Pin, 0LL);
    }
    if ( *(_BYTE *)(v9 + 96) )
      USBType1AsyncEndpointAbortFeedback((__int64)Pin);
    KsPinReleaseProcessingMutex(Pin);
    *(_BYTE *)(v9 + 99) = USBType1NeedLockDelay(Context);
    goto LABEL_60;
  }
  if ( a2 )
  {
    if ( a2 != 2 )
      return v7;
    if ( !*((_BYTE *)Context + 46) )
      v7 = USBHwSelectStreamingAudioInterface(Pin, v8[18], a3);
    goto LABEL_60;
  }
  v7 = USBHwSelectStreamingAudioInterface(Pin, v8[17], a3);
  if ( (v7 & 0x80000000) == 0 )
  {
    if ( *(_BYTE *)(v9 + 96) )
    {
      v16 = *(unsigned int *)(v9 + 56);
      v17 = 0LL;
      if ( (_DWORD)v16 )
      {
        v18 = *(_QWORD *)(v9 + 72);
        while ( *(_BYTE *)(v18 + 24 * v17 + 2) != *(_BYTE *)(v8[22] + 2LL) )
        {
          v17 = (unsigned int)(v17 + 1);
          if ( (unsigned int)v17 >= (unsigned int)v16 )
            goto LABEL_37;
        }
        *(_QWORD *)(v9 + 888) = *(_QWORD *)(v18 + 24 * v17 + 8);
      }
LABEL_37:
      if ( !*(_QWORD *)(v9 + 888) )
      {
        v7 = -1073741668;
        v19 = WPP_GLOBAL_Control;
        v20 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v20 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_56;
        v21 = 21;
LABEL_46:
        WPP_RECORDER_AND_TRACE_SF_qd(
          (__int64)v19->AttachedDevice,
          v20,
          v16,
          (__int64)v19->DeviceExtension,
          v24,
          8u,
          v21,
          (__int64)&WPP_1518cd3ab610380295f9683503cbea4d_Traceguids);
LABEL_56:
        USBHwSelectStreamingAudioInterface(Pin, v8[18], v16);
LABEL_60:
        if ( (v7 & 0x80000000) == 0 )
          return v7;
        goto LABEL_61;
      }
      *((_DWORD *)Context + 26) = *(_DWORD *)(v9 + 856);
    }
    v7 = USBType1SetSampleRate(Pin, *((unsigned int *)Context + 26));
    if ( (v7 & 0x80000000) == 0 )
      return v7;
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v20 = 0;
    }
    LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v20 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_56;
    v21 = 22;
    goto LABEL_46;
  }
  v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v15 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v15,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v24,
      8u,
      0x14u,
      (__int64)&WPP_1518cd3ab610380295f9683503cbea4d_Traceguids);
LABEL_61:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v24,
      8u,
      0x17u,
      (__int64)&WPP_1518cd3ab610380295f9683503cbea4d_Traceguids);
  return v7;
}
