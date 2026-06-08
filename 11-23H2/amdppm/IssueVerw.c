/*
 * XREFs of IssueVerw @ 0x1C000C4F0
 * Callers:
 *     C1Idle @ 0x1C0002770 (C1Idle.c)
 *     MWaitIdle @ 0x1C0002DB0 (MWaitIdle.c)
 *     C2Idle @ 0x1C0004C50 (C2Idle.c)
 *     C3Idle @ 0x1C0004D30 (C3Idle.c)
 *     IoHaltC1Idle @ 0x1C0004F60 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __fastcall IssueVerw(__int16 a1)
{
  __int16 v1; // [rsp+8h] [rbp+8h]

  v1 = a1;
  __asm { verw    [rsp+arg_0] }
}
