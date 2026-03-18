/*
 * XREFs of _purecall @ 0x14060CEB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
