/*
 * XREFs of __report_rangecheckfailure @ 0x1C00037B0
 * Callers:
 *     GetHwDebugRegisters @ 0x1C002DD80 (GetHwDebugRegisters.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
