/*
 * XREFs of C1Idle @ 0x1C0001620
 * Callers:
 *     <none>
 * Callees:
 *     C1Halt @ 0x1C000C410 (C1Halt.c)
 */

void __fastcall __noreturn C1Idle(__int64 a1, __int64 a2)
{
  if ( !(_DWORD)a2 )
    C1Halt(a1, a2);
  __writemsr(0x48u, 0LL);
  C1Halt(72LL, 0LL);
}
