/*
 * XREFs of USBType1StateChangePin @ 0x1C0004AB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C0004F74 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     PinWaitForStarvationTimeout @ 0x1C000508C (PinWaitForStarvationTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBType1ClearLeftovers @ 0x1C00073B4 (USBType1ClearLeftovers.c)
 *     USBType1AsyncEndpointAbortFeedback @ 0x1C000A7F4 (USBType1AsyncEndpointAbortFeedback.c)
 *     USBHwDataPipeReset @ 0x1C0031DF0 (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C00381D0 (USBType1SetSampleRate.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C003850C (USBHwSelectStreamingAudioInterface.c)
 *     USBType1NeedLockDelay @ 0x1C00397C4 (USBType1NeedLockDelay.c)
 */

__int64 __fastcall USBType1StateChangePin(PKSPIN Pin, int a2, __int64 a3)
{
  char *Context; // rsi
  int v4; // ebx
  int v5; // r12d
  unsigned int v7; // r14d
  _QWORD *v8; // r13
  __int64 v9; // rbp
  char v10; // r15
  void *v11; // r9
  int v12; // ebx
  int v13; // ebx
  KIRQL v14; // al
  __int64 v16; // r9
  __int64 i; // rdx
  PDEVICE_OBJECT v18; // rcx
  _DWORD *v19; // rsi
  KIRQL v20; // bl
  __int64 v21; // [rsp+90h] [rbp+8h] BYREF

  Context = (char *)Pin->Context;
  v4 = a3;
  v5 = a2;
  v7 = 0;
  v8 = (_QWORD *)*((_QWORD *)Context + 18);
  v9 = *((_QWORD *)Context + 19);
  v10 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v11 = &WPP_1518cd3ab610380295f9683503cbea4d_Traceguids;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qdd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  if ( !v4 )
  {
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    Context[45] = 0;
    USBType1ClearLeftovers(Context);
    *((_QWORD *)Context + 10) = 0LL;
    *((_QWORD *)Context + 11) = 0LL;
    *((_QWORD *)Context + 12) = 0LL;
    *(_BYTE *)(v9 + 97) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v20);
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
    if ( v5 != 3 )
      return v7;
    KsPinAcquireProcessingMutex(Pin);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 14);
    *(_BYTE *)(v9 + 100) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 14, v14);
    v21 = -50000000LL;
    v7 = PinWaitForStarvationTimeout(Pin, &v21);
    if ( v7 == 258 )
    {
      USBHwDataPipeReset(Pin);
      PinWaitForStarvationTimeout(Pin, 0LL);
    }
    if ( *(_BYTE *)(v9 + 96) )
      USBType1AsyncEndpointAbortFeedback(Pin);
    KsPinReleaseProcessingMutex(Pin);
    *(_BYTE *)(v9 + 99) = USBType1NeedLockDelay(Context);
    goto LABEL_18;
  }
  if ( v5 )
  {
    if ( v5 != 2 )
      return v7;
    if ( !Context[46] )
      v7 = USBHwSelectStreamingAudioInterface(Pin, v8[18], a3, v11);
LABEL_18:
    if ( (v7 & 0x80000000) == 0 )
      return v7;
    goto LABEL_34;
  }
  v7 = USBHwSelectStreamingAudioInterface(Pin, v8[17], a3, v11);
  if ( (v7 & 0x80000000) == 0 )
  {
    if ( *(_BYTE *)(v9 + 96) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v9 + 56); i = (unsigned int)(i + 1) )
      {
        a3 = 3 * i;
        v16 = *(_QWORD *)(v9 + 72);
        if ( *(_BYTE *)(v16 + 24 * i + 2) == *(_BYTE *)(v8[22] + 2LL) )
        {
          *(_QWORD *)(v9 + 888) = *(_QWORD *)(v16 + 24 * i + 8);
          break;
        }
      }
      if ( !*(_QWORD *)(v9 + 888) )
      {
        v7 = -1073741668;
        v18 = WPP_GLOBAL_Control;
        LOBYTE(i) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)i && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_66;
        goto LABEL_56;
      }
      v19 = Context + 104;
      *v19 = *(_DWORD *)(v9 + 856);
    }
    else
    {
      v19 = Context + 104;
    }
    v7 = USBType1SetSampleRate(Pin, (unsigned int)*v19);
    if ( (v7 & 0x80000000) == 0 )
      return v7;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || (LOBYTE(i) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(i) = 0;
    }
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)i && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_66;
LABEL_56:
    WPP_RECORDER_AND_TRACE_SF_qd(v18->AttachedDevice, i, a3, v18->DeviceExtension);
LABEL_66:
    USBHwSelectStreamingAudioInterface(Pin, v8[18], a3, v16);
    goto LABEL_18;
  }
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  }
LABEL_34:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v10 = 0;
  }
  if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = v10;
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  }
  return v7;
}
