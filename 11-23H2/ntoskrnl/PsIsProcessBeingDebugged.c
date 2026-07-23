/*
 * XREFs of PsIsProcessBeingDebugged @ 0x1408A5D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessBeingDebugged(__int64 a1)
{
  return *(_QWORD *)(a1 + 1400) != 0LL;
}
