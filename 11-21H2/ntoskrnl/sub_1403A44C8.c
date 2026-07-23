/*
 * XREFs of sub_1403A44C8 @ 0x1403A44C8
 * Callers:
 *     PoQueryWatchdogTime @ 0x14022DFC0 (PoQueryWatchdogTime.c)
 *     sub_1403A4428 @ 0x1403A4428 (sub_1403A4428.c)
 *     sub_1403A51D0 @ 0x1403A51D0 (sub_1403A51D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403A44C8(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 188);
  if ( !v1 && *(_DWORD *)(a1 + 192) == 1 || v1 == 1 && *(_DWORD *)(a1 + 192) == 1 )
    return (unsigned int)dword_140D0514C;
  else
    return (unsigned int)dword_140D05078;
}
