/*
 * XREFs of IoHaltC1Idle @ 0x1C00099A0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0002000 (ReadGenAddr.c)
 *     C1Halt @ 0x1C00041F0 (C1Halt.c)
 *     IssueVerw @ 0x1C0004230 (IssueVerw.c)
 */

void __fastcall __noreturn IoHaltC1Idle(unsigned __int8 *a1, int a2)
{
  if ( (_WORD)a2 )
    __writemsr(0x48u, 0LL);
  if ( HIWORD(a2) )
    IssueVerw(SHIWORD(a2));
  ReadGenAddr(a1);
  C1Halt();
}
