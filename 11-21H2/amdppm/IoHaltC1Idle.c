/*
 * XREFs of IoHaltC1Idle @ 0x1C00094A0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0003958 (ReadGenAddr.c)
 *     C1Halt @ 0x1C000BAD0 (C1Halt.c)
 */

void __fastcall __noreturn IoHaltC1Idle(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( a2 )
    __writemsr(0x48u, 0LL);
  ReadGenAddr(a1);
  C1Halt(v3, v2);
}
