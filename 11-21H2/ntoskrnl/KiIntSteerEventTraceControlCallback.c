/*
 * XREFs of KiIntSteerEventTraceControlCallback @ 0x1408653D0
 * Callers:
 *     <none>
 * Callees:
 *     KiIntSteerLogStatus @ 0x140578454 (KiIntSteerLogStatus.c)
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
