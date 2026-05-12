/*
 * XREFs of sub_1C0066B08 @ 0x1C0066B08
 * Callers:
 *     DoScreenSave @ 0x1C0034BE8 (DoScreenSave.c)
 *     sub_1C0066298 @ 0x1C0066298 (sub_1C0066298.c)
 * Callees:
 *     sub_1C0066C28 @ 0x1C0066C28 (sub_1C0066C28.c)
 */

__int64 __fastcall sub_1C0066B08(__int64 a1, ULONG *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( a2 )
    *a2 = ActiveProcessorCount;
  if ( (unsigned __int8)sub_1C0066C28(a1, v5, ActiveProcessorCount) && v6 > dword_1C0093AD8 )
    return dword_1C0093AD8 * ((v6 + dword_1C0093AD8 - 1) / dword_1C0093AD8) / dword_1C0093AD8;
  else
    return 1LL;
}
