/*
 * XREFs of USBCaptureClosePin @ 0x1C0036DA0
 * Callers:
 *     <none>
 * Callees:
 *     USBCaptureWaitForWorkerComplete @ 0x1C0009268 (USBCaptureWaitForWorkerComplete.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0009A84 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     USBHwFreePipes @ 0x1C002A2A8 (USBHwFreePipes.c)
 *     USBHwFreeOffloadInformation @ 0x1C0031F0C (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBCaptureClosePin(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  bool v4; // dl

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v1 + 152);
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      WPP_GLOBAL_Control->DeviceExtension);
  USBCaptureWaitForWorkerComplete(v1, (_BYTE *)(v3 + 208), (struct _KEVENT *)(v3 + 216));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v3 + 240));
  USBCaptureWaitForWorkerComplete(v1, (_BYTE *)(v3 + 248), (struct _KEVENT *)(v3 + 256));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v3 + 280));
  USBHwFreePipes(a1);
  USBHwFreeOffloadInformation(a1);
  return 0LL;
}
