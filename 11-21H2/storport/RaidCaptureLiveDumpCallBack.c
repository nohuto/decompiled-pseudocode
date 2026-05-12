/*
 * XREFs of RaidCaptureLiveDumpCallBack @ 0x1C004E490
 * Callers:
 *     <none>
 * Callees:
 *     RaAddSecondaryDataforDeviceTelemetry @ 0x1C004CDDC (RaAddSecondaryDataforDeviceTelemetry.c)
 */

__int64 __fastcall RaidCaptureLiveDumpCallBack(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, GUID *, __int64, _QWORD),
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  if ( !a8 || *(_DWORD *)a8 != 40 || *(_DWORD *)(a8 + 4) != 40 )
    return 3221225485LL;
  if ( *(_DWORD *)(a8 + 24) == 1 )
    return RaAddSecondaryDataforDeviceTelemetry(a1, a2, *(_QWORD *)(a8 + 32));
  return 3221225659LL;
}
