/*
 * XREFs of sub_1407E766C @ 0x1407E766C
 * Callers:
 *     sub_1407E7694 @ 0x1407E7694 (sub_1407E7694.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407E766C(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 0);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 0);
}
