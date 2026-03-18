/*
 * XREFs of NtDeleteWnfStateData @ 0x14085BE50
 * Callers:
 *     <none>
 * Callees:
 *     ExpNtDeleteWnfStateData @ 0x14085BE6C (ExpNtDeleteWnfStateData.c)
 */

__int64 __fastcall NtDeleteWnfStateData(__int64 a1, __int64 a2)
{
  return ExpNtDeleteWnfStateData(a1, a2, 1LL);
}
