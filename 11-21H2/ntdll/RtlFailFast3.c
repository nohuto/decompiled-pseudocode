/*
 * XREFs of RtlFailFast3 @ 0x1800A9010
 * Callers:
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A4F0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast3(unsigned int a1)
{
  __fastfail(a1);
}
