/*
 * XREFs of _tlgWriteEx_EtwWriteEx @ 0x1C0010DCC
 * Callers:
 *     RaidAdapterRequestComplete @ 0x1C000E5C0 (RaidAdapterRequestComplete.c)
 *     StorpTelemetryMiniportEventWStr @ 0x1C00105B0 (StorpTelemetryMiniportEventWStr.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C001272C (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     StorpTelemetryMiniportEventUnit @ 0x1C00139B8 (StorpTelemetryMiniportEventUnit.c)
 *     StorpMeasuresMiniportEventAdapter @ 0x1C006D58C (StorpMeasuresMiniportEventAdapter.c)
 *     StorpMeasuresMiniportEventUnit @ 0x1C006D8A8 (StorpMeasuresMiniportEventUnit.c)
 *     StorpTelemetryMiniportLogError @ 0x1C0070E34 (StorpTelemetryMiniportLogError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tlgWriteEx_EtwWriteEx(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a8)
{
  unsigned __int64 v8; // rax
  unsigned __int16 *v9; // rdx
  EVENT_DESCRIPTOR v11; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v11.Id = *a2 << 24;
  *(_DWORD *)&v11.Level = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  v9 = (unsigned __int16 *)(a2 + 11);
  v11.Keyword = v8;
  a8->Ptr = (unsigned __int64)off_1C00920D0;
  a8->Size = *(unsigned __int16 *)off_1C00920D0;
  a8[1].Ptr = (unsigned __int64)v9;
  a8->Reserved = 2;
  a8[1].Size = *v9;
  a8[1].Reserved = 1;
  return EtwWriteEx(RegHandle, &v11, 0LL, 1u, 0LL, 0LL, UserDataCount, a8);
}
