/*
 * XREFs of PspGetFreezeState @ 0x140377390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PspGetFreezeState(__int64 a1)
{
  return (*(_DWORD *)(a1 + 632) & 8) != 0;
}
