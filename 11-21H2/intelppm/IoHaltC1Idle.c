/*
 * XREFs of IoHaltC1Idle @ 0x1C000B270
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00013E0 (ReadGenAddr.c)
 *     C1Halt @ 0x1C00036C0 (C1Halt.c)
 */

void __fastcall __noreturn IoHaltC1Idle(unsigned __int8 *a1, int a2)
{
  if ( a2 )
    __writemsr(0x48u, 0LL);
  ReadGenAddr(a1);
  C1Halt();
}
