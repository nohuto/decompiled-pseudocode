/*
 * XREFs of C1Idle @ 0x1C0005430
 * Callers:
 *     <none>
 * Callees:
 *     C1Halt @ 0x1C00041F0 (C1Halt.c)
 *     IssueVerw @ 0x1C0004230 (IssueVerw.c)
 */

void __fastcall __noreturn C1Idle(__int64 a1, int a2)
{
  if ( (_WORD)a2 )
    __writemsr(0x48u, 0LL);
  if ( HIWORD(a2) )
    IssueVerw(SHIWORD(a2));
  C1Halt();
}
