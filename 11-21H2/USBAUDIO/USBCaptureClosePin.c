/*
 * XREFs of USBCaptureClosePin @ 0x1C003A530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C00071C0 (USBCaptureWaitForWorkerComplete.c)
 *     USBHwFreeOffloadInformation @ 0x1C0033630 (USBHwFreeOffloadInformation.c)
 *     USBHwFreePipes @ 0x1C0033684 (USBHwFreePipes.c)
 */

__int64 __fastcall USBCaptureClosePin(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  char v4; // dl
  __int64 v6; // [rsp+20h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v1 + 152);
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      8u,
      0x13u,
      (__int64)&WPP_5fab551e02ac3a407362f7b09a9004fb_Traceguids);
  USBCaptureWaitForWorkerComplete(v1, (_BYTE *)(v3 + 208), (struct _KEVENT *)(v3 + 216));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v3 + 240));
  USBCaptureWaitForWorkerComplete(v1, (_BYTE *)(v3 + 248), (struct _KEVENT *)(v3 + 256));
  IoFreeWorkItem(*(PIO_WORKITEM *)(v3 + 280));
  USBHwFreePipes(a1);
  USBHwFreeOffloadInformation(a1);
  return 0LL;
}
