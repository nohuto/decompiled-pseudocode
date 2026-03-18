/*
 * XREFs of UsbhQueueWorkItemWithRetry @ 0x1C000B390
 * Callers:
 *     UsbhSS_SignalPdoWake @ 0x1C001A04C (UsbhSS_SignalPdoWake.c)
 *     UsbhHubIsr @ 0x1C001D8F0 (UsbhHubIsr.c)
 *     UsbhIsrRetryTimer @ 0x1C0038DD0 (UsbhIsrRetryTimer.c)
 *     UsbhResetIrqPipeRetryTimer @ 0x1C0039480 (UsbhResetIrqPipeRetryTimer.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C0041D10 (UsbHubhInitTimeoutTimer.c)
 *     UsbhInitCallback @ 0x1C00437F0 (UsbhInitCallback.c)
 *     UsbhInitRetryTimer @ 0x1C0043B10 (UsbhInitRetryTimer.c)
 *     UsbhIdleIrpRetryTimer @ 0x1C0057BC0 (UsbhIdleIrpRetryTimer.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C00580F0 (UsbhIdleIrp_NoIrp.c)
 *     UsbhSS_WakeIrpRetryTimer @ 0x1C0058A00 (UsbhSS_WakeIrpRetryTimer.c)
 * Callees:
 *     UsbhEnableTimerObject @ 0x1C0008770 (UsbhEnableTimerObject.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhAllocWorkItem @ 0x1C001E570 (UsbhAllocWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002E788 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhQueueWorkItemWithRetry(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // ebp
  _DWORD *v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rax
  char v13; // r12
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // r14
  void (__fastcall *v18)(__int64, __int64, void *, _QWORD, __int64, int); // rax
  int v19; // ecx
  int v21; // [rsp+28h] [rbp-50h]

  v7 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_DWORD **)(a1 + 64);
  if ( !v10 )
    goto LABEL_38;
  if ( *v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v10);
  Log(a1, 8, 1364479299, a7, a5);
  v11 = a6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 )
LABEL_38:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v12 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v13 = *(_BYTE *)(v12 + 5268);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  if ( a7 != 2001228627 )
    Log(a1, 8, 1632720717, a7, a5);
  v14 = UsbhAllocWorkItem(a1, a3, a5, a6, a7, v13);
  v16 = v14;
  if ( !v14 )
  {
    LOBYTE(v19) = -102;
LABEL_32:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        1,
        49,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        v11,
        v19);
    Log(a1, 8, 1364476705, a7, a5);
    v15 = a2;
    if ( a2 )
      UsbhEnableTimerObject(a1, a2, 0, v11, a5, a7);
    v7 = 1;
    goto LABEL_23;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  if ( a7 != 2001228627 )
    Log(a1, 8, 1364479275, a7, v16);
  v17 = *(_QWORD *)(v16 + 40);
  v18 = *(void (__fastcall **)(__int64, __int64, void *, _QWORD, __int64, int))(FdoExt(a1) + 4784);
  if ( v18 )
  {
    LOBYTE(v21) = v13;
    v18(a1, v17, &UsbhHubWorker, a4, v16, v21);
    v19 = 0;
  }
  else
  {
    v19 = -1073741822;
  }
  v11 = a6;
  if ( (v19 & 0xC0000000) == 0xC0000000 )
    goto LABEL_32;
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      1,
      50,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v11,
      v7);
  return v7;
}
