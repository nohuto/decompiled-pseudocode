/*
 * XREFs of IssueVerw @ 0x1C0004230
 * Callers:
 *     MWaitIdle @ 0x1C0001550 (MWaitIdle.c)
 *     C1Idle @ 0x1C0005430 (C1Idle.c)
 *     C2Idle @ 0x1C0009740 (C2Idle.c)
 *     C3Idle @ 0x1C0009820 (C3Idle.c)
 *     IoHaltC1Idle @ 0x1C00099A0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __fastcall IssueVerw(__int16 a1)
{
  __int16 v1; // [rsp+8h] [rbp+8h]

  v1 = a1;
  __asm { verw    [rsp+arg_0] }
}
