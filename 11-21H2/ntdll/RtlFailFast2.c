/*
 * XREFs of RtlFailFast2 @ 0x1800A9000
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x180032BD0 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180034D40 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A4F0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
