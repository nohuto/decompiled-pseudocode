/*
 * XREFs of PsSetProcessPriorityByClass @ 0x14079D240
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_1402EBB00 @ 0x1402EBB00 (sub_1402EBB00.c)
 *     sub_14079D270 @ 0x14079D270 (sub_14079D270.c)
 */

__int64 __fastcall PsSetProcessPriorityByClass(__int64 a1, __int64 a2)
{
  if ( (_DWORD)a2 == 2 )
    return sub_1402EBB00(a1, 2);
  LOBYTE(a2) = (_DWORD)a2 == 1;
  return sub_14079D270(a1, a2, 0LL);
}
