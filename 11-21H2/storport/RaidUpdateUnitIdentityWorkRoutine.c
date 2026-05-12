/*
 * XREFs of RaidUpdateUnitIdentityWorkRoutine @ 0x1C0056490
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaidDeleteBusEnumerator @ 0x1C001A9D8 (RaidDeleteBusEnumerator.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C001B258 (RaidBusEnumeratorVisitUnit.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0053EFC (RaidLogRequestComplete.c)
 */

void __fastcall RaidUpdateUnitIdentityWorkRoutine(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  void *DeviceExtension; // rdi
  CCHAR v4; // si
  int v5; // [rsp+28h] [rbp-A0h]
  int v6; // [rsp+28h] [rbp-A0h]
  __int64 v7[15]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v8[3]; // [rsp+A8h] [rbp-20h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  memset(v7, 0, sizeof(v7));
  v8[1] = v8;
  v8[0] = v8;
  v7[0] = *((_QWORD *)DeviceExtension + 3);
  RaidBusEnumeratorVisitUnit(v7, *((_DWORD *)DeviceExtension + 24));
  RaidDeleteBusEnumerator((__int64)v7);
  v4 = 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)DeviceExtension + 3) + 5632LL), 0, 0) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v5 = *((_DWORD *)Context[1] + 12);
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Au,
        (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
        DeviceExtension,
        Context[1],
        v5);
    }
    if ( (qword_1C00793A8 & 0x10) != 0 )
      RaidLogRequestComplete(
        *((_QWORD *)DeviceExtension + 3),
        (__int64)Context[1],
        *(_QWORD *)(*((_QWORD *)Context[1] + 23) + 8LL));
    v4 = 1;
LABEL_14:
    RaidCompleteRequestEx((PIRP)Context[1], v4, *((_DWORD *)Context[1] + 12));
    goto LABEL_15;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)DeviceExtension + 3) + 5632LL), 0xFFFFFFFF) == 1 )
  {
    *((_QWORD *)Context[1] + 7) = 0LL;
    *((_DWORD *)Context[1] + 12) = 0;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v6 = *((_DWORD *)Context[1] + 12);
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Bu,
        (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
        *((_QWORD *)DeviceExtension + 3),
        Context[1],
        v6);
    }
    goto LABEL_14;
  }
LABEL_15:
  IoFreeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0x49576152u);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
}
