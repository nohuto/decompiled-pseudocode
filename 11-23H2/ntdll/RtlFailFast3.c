/*
 * XREFs of RtlFailFast3 @ 0x1800A5F00
 * Callers:
 *     RtlpHandleInvalidUserCallTarget @ 0x18010BB20 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast3(unsigned int a1)
{
  __fastfail(a1);
}
