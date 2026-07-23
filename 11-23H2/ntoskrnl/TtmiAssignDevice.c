/*
 * XREFs of TtmiAssignDevice @ 0x1409A2CAC
 * Callers:
 *     TtmpDispatchAssignDevice @ 0x1409A6588 (TtmpDispatchAssignDevice.c)
 * Callees:
 *     TtmpFindDeviceByDeviceId @ 0x1409A3884 (TtmpFindDeviceByDeviceId.c)
 *     TtmpPublishDeviceEvent @ 0x1409A3AE4 (TtmpPublishDeviceEvent.c)
 *     TtmiScheduleSessionWorker @ 0x1409A4CA4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceToTerminalAssigned @ 0x1409A8094 (TtmiLogDeviceToTerminalAssigned.c)
 *     TtmiLogError @ 0x1409A8544 (TtmiLogError.c)
 */

__int64 __fastcall TtmiAssignDevice(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  v10 = 0LL;
  if ( (unsigned __int8)TtmpFindDeviceByDeviceId(a1, a3, &v10) )
  {
    v7 = v10;
    v8 = v10;
    *(_DWORD *)(v10 + 596) = *(_DWORD *)(v6 + 28);
    TtmpPublishDeviceEvent(a1, 0LL, v8, 4LL);
    TtmiLogDeviceToTerminalAssigned(*(unsigned int *)(v7 + 596), a3);
    *(_DWORD *)(v7 + 600) |= 0x60u;
    TtmiScheduleSessionWorker(a1, 1LL);
  }
  else
  {
    v4 = -1073741275;
    TtmiLogError("TtmiAssignDevice", 1125LL, 0xFFFFFFFFLL, 3221226021LL);
  }
  return v4;
}
