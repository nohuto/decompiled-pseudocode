/*
 * XREFs of IsHgsEnabled @ 0x1C0005E14
 * Callers:
 *     ConnectHwpInterrupt @ 0x1C002B540 (ConnectHwpInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 */

__int64 IsHgsEnabled()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_1C001E090 )
    return ((__int64 (*)(void))qword_1C001E090)();
  return result;
}
