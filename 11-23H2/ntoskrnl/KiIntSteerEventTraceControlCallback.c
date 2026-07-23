/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x1408660F0
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x14022183C (KiIntSteerLogStatus.c)
 */

void __fastcall KiIntSteerEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( (ControlCode & 0xFFFFFFFD) == 0 )
    KiIntSteerLogStatus(1);
}
