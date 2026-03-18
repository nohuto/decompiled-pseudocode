/*
 * XREFs of _guard_check_icall @ 0x1C00D7C2C
 * Callers:
 *     qsort @ 0x1C00D5A30 (qsort.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x1C0019C10 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  _guard_check_icall_fptr((CIgnoreInputQueue *)Target);
}
