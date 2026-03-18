/*
 * XREFs of rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x1C018E844
 * Callers:
 *     RIMAddToActiveDevices @ 0x1C01863D8 (RIMAddToActiveDevices.c)
 *     RIMRemoveFromActiveDevices @ 0x1C018B4C4 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C0074AA0 (RIMAllocateAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C018E288 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(void *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  char v5; // dl
  int v6; // [rsp+28h] [rbp-50h]

  v4 = RIMAllocateAsyncPnpWorkItem(a1, *(_QWORD **)(a2 + 32), 0LL, 0LL, 0, 0LL, 0LL, 0LL, a3, 7);
  if ( v4 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, v4);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (v5 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        48LL,
        2u,
        v6,
        0x30u,
        (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids);
  }
}
