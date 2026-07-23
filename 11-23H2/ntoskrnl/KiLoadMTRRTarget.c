/*
 * XREFs of KiLoadMTRRTarget @ 0x140A8F7B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140A8F7D0 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(ULONG_PTR Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
