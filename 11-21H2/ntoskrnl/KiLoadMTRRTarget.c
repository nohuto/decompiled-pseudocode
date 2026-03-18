/*
 * XREFs of KiLoadMTRRTarget @ 0x140A5B8F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140A53A50 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
