/*
 * XREFs of IsHgsEnabled @ 0x1C0007814
 * Callers:
 *     ConnectHwpInterrupt @ 0x1C0026D20 (ConnectHwpInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 IsHgsEnabled()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_1C001F3C0 )
    return ((__int64 (*)(void))qword_1C001F3C0)();
  return result;
}
