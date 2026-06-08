/*
 * XREFs of PerfStatesInstantaneousFrequency @ 0x1C0001DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfStatesInstantaneousFrequency(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 44);
  *a2 = result;
  return result;
}
