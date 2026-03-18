/*
 * XREFs of HUBHSM_ValidatingAndParsingHubPowerStatus @ 0x1C0009BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_ValidatingAndParsingHubPowerStatus(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(a1 + 960) + 92LL) = (*(_BYTE *)(*(_QWORD *)(a1 + 960) + 796LL) & 1) != 0 ? 500 : 100;
  return 2053LL;
}
