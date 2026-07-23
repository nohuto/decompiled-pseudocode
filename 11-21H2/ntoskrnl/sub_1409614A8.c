/*
 * XREFs of sub_1409614A8 @ 0x1409614A8
 * Callers:
 *     sub_14070E104 @ 0x14070E104 (sub_14070E104.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409614A8(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 5u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 5u);
}
