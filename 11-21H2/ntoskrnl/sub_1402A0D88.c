/*
 * XREFs of sub_1402A0D88 @ 0x1402A0D88
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1402A0D88(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)(a1 + 2528) = a2;
  if ( a3 )
    *(_QWORD *)(a1 + 2536) = a2;
}
