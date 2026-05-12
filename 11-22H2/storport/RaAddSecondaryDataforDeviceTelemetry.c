/*
 * XREFs of RaAddSecondaryDataforDeviceTelemetry @ 0x1C00562F0
 * Callers:
 *     RaidCaptureLiveDumpCallBack @ 0x1C0058760 (RaidCaptureLiveDumpCallBack.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaAddSecondaryDataforDeviceTelemetry(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, GUID *, __int64, _QWORD),
        __int64 a3)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a3 + 144) || !*(_DWORD *)(a3 + 140) )
    return 3221225485LL;
  result = a2(a1, &GUID_STORAGE_LIVE_DUMP_DEVICE_TELEMETRY_LOG_HEADER, a3, *(unsigned int *)(a3 + 4));
  if ( (int)result >= 0 )
    return a2(a1, &GUID_STORAGE_LIVE_DUMP_DEVICE_TELEMETRY_LOG, *(_QWORD *)(a3 + 144), *(unsigned int *)(a3 + 140));
  return result;
}
