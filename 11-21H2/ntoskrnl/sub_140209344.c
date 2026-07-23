/*
 * XREFs of sub_140209344 @ 0x140209344
 * Callers:
 *     sub_140683088 @ 0x140683088 (sub_140683088.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_1406E2540 @ 0x1406E2540 (sub_1406E2540.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140209344(volatile signed __int32 *a1, int a2, int a3)
{
  unsigned __int32 v3; // r10d
  int v4; // r8d
  signed __int32 i; // r9d
  signed __int32 v6; // r9d

  v3 = *a1;
  v4 = ~a3;
  for ( i = *a1; ; v3 = i )
  {
    v6 = v4 & (a2 | i);
    if ( v6 == v3 )
      break;
    i = _InterlockedCompareExchange(a1, v6, v3);
    if ( v3 == i )
      break;
  }
  return v3;
}
