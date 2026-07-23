/*
 * XREFs of sub_1403DF580 @ 0x1403DF580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1403DF580(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  _InterlockedExchange(&dword_140D00A70, ControlCode != 0);
}
