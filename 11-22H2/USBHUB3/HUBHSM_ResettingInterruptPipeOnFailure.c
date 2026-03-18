/*
 * XREFs of HUBHSM_ResettingInterruptPipeOnFailure @ 0x1C0008F10
 * Callers:
 *     <none>
 * Callees:
 *     HUBPARENT_ResetInterruptPipe @ 0x1C0007A80 (HUBPARENT_ResetInterruptPipe.c)
 */

__int64 __fastcall HUBHSM_ResettingInterruptPipeOnFailure(__int64 a1)
{
  HUBPARENT_ResetInterruptPipe(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
