/*
 * XREFs of sub_1403DF560 @ 0x1403DF560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1403DF560(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  _InterlockedExchange(&dword_140D00A94, ControlCode != 0);
}
