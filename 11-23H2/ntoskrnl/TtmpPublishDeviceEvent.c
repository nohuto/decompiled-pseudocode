/*
 * XREFs of TtmpPublishDeviceEvent @ 0x1409A3AE4
 * Callers:
 *     TtmiAssignDevice @ 0x1409A2CAC (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1409A2E7C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSessionDeviceListWorker @ 0x1409A2F10 (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14022C7C0 (RtlStringCchCopyW.c)
 *     memset @ 0x140435E00 (memset.c)
 *     TtmiWriteEventToAllQueues @ 0x1409A50B8 (TtmiWriteEventToAllQueues.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1409A7634 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceAssignedTerminalEvent @ 0x1409A7774 (TtmiLogDeviceAssignedTerminalEvent.c)
 *     TtmiLogDeviceDepartedTerminalEvent @ 0x1409A7864 (TtmiLogDeviceDepartedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A7A4C (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     TtmiWriteEventToSingleQueue @ 0x1409AC4A8 (TtmiWriteEventToSingleQueue.c)
 */

__int64 __fastcall TtmpPublishDeviceEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v8; // esi
  int v9; // edx
  int v10; // r9d
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  __int64 v15; // [rsp+28h] [rbp-E0h]
  _DWORD v16[136]; // [rsp+38h] [rbp-D0h] BYREF

  memset(&v16[1], 0, 0x21CuLL);
  v8 = 0;
  v16[0] = a4;
  switch ( a4 )
  {
    case 0:
    case 3:
      v16[2] = *(_DWORD *)(a3 + 32);
      v16[3] = *(_DWORD *)(a3 + 596);
      v16[4] = *(_DWORD *)(a3 + 16);
      v16[5] = *(_DWORD *)(a3 + 72);
      RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v16[6], 0x104uLL, (NTSTRSAFE_PCWSTR)(a3 + 76));
      v10 = *(_DWORD *)(a3 + 72);
      v11 = *(_DWORD *)(a3 + 16);
      v12 = *(_DWORD *)(a3 + 596);
      v13 = *(_DWORD *)(a3 + 32);
      v15 = a3 + 76;
      if ( a4 )
        TtmiLogDeviceArrivedTerminalEvent(v13, v12, v11, v10, v15);
      else
        TtmiLogDeviceEnumeratedTerminalEvent(v13, v12, v11, v10, v15);
      break;
    case 4:
      v9 = *(_DWORD *)(a3 + 596);
      v16[2] = *(_DWORD *)(a3 + 32);
      v16[3] = v9;
      TtmiLogDeviceAssignedTerminalEvent();
      break;
    case 5:
      v16[2] = *(_DWORD *)(a3 + 32);
      TtmiLogDeviceDepartedTerminalEvent();
      break;
  }
  if ( a2 )
    return (unsigned int)TtmiWriteEventToSingleQueue(a2, v16);
  else
    TtmiWriteEventToAllQueues(a1, v16);
  return v8;
}
