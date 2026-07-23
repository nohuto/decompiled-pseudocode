/*
 * XREFs of _purecall @ 0x14060D400
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
