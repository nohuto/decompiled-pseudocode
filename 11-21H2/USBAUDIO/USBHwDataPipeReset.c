/*
 * XREFs of USBHwDataPipeReset @ 0x1C0033508
 * Callers:
 *     USBType1ChangePowerState @ 0x1C0004640 (USBType1ChangePowerState.c)
 *     USBType1StateChangePin @ 0x1C0005490 (USBType1StateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C00060B0 (USBCaptureChangePowerState.c)
 *     USBCaptureStateChangePin @ 0x1C0006D10 (USBCaptureStateChangePin.c)
 *     USBType1HandleUrbError @ 0x1C0039D28 (USBType1HandleUrbError.c)
 *     USBCaptureStartTransfers @ 0x1C003ACD4 (USBCaptureStartTransfers.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     PinWaitForStarvation @ 0x1C0002258 (PinWaitForStarvation.c)
 *     USBHwAbortOrResetPipe @ 0x1C00333E8 (USBHwAbortOrResetPipe.c)
 */

__int64 __fastcall USBHwDataPipeReset(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  char v8; // dl
  int v10; // [rsp+20h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v1 + 152);
  v4 = *(_QWORD *)(v1 + 16);
  v5 = USBHwAbortOrResetPipe(*(PDEVICE_OBJECT *)(v4 + 40), *(void **)(v3 + 64), 2u);
  v6 = v5;
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741810
    || (PinWaitForStarvation(a1),
        v7 = USBHwAbortOrResetPipe(*(PDEVICE_OBJECT *)(v4 + 40), *(void **)(v3 + 64), 0x1Eu),
        v6 = v7,
        ((v7 + 0x80000000) & 0x80000000) == 0)
    && v7 != -1073741810
    || (*(_BYTE *)v3 = 0, v7 < 0) )
  {
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        8u,
        0x2Bu,
        (__int64)&WPP_0c4dbd50b0493a06c28798d01c904647_Traceguids);
  }
  return v6;
}
