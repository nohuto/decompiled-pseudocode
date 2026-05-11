/*
 * XREFs of USBHwLogStartFailure @ 0x1C003D448
 * Callers:
 *     USBDeviceStart @ 0x1C003CF90 (USBDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C000A650 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     memmove @ 0x1C001AC80 (memmove.c)
 */

void __fastcall USBHwLogStartFailure(__int64 a1, int a2, const void *a3, unsigned int a4)
{
  size_t v4; // r13
  const void *v5; // rbp
  int v6; // r14d
  __int64 v7; // rsi
  _DWORD *Pool2; // rbx
  PIRP v10; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  v4 = a4;
  v5 = a3;
  memset(&Event, 0, sizeof(Event));
  v6 = a2;
  v7 = a4 + 20;
  IoStatusBlock = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_sd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( (unsigned __int64)(v7 - 4) <= 0x1000 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)v7, 1096972357LL);
    if ( Pool2 )
    {
      v10 = IoBuildDeviceIoControlRequest(
              0x22002Bu,
              *(PDEVICE_OBJECT *)(a1 + 40),
              0LL,
              0,
              0LL,
              0,
              1u,
              &Event,
              &IoStatusBlock);
      if ( v10 )
      {
        *Pool2 = v7;
        Pool2[3] = 3;
        Pool2[1] = v6;
        memmove(Pool2 + 4, v5, v4);
        v10->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)Pool2;
        if ( IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), v10) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      ExFreePool(Pool2);
    }
  }
}
