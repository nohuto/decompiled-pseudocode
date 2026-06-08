/*
 * XREFs of __report_rangecheckfailure @ 0x1C0003380
 * Callers:
 *     GetHwDebugRegisters @ 0x1C002CB90 (GetHwDebugRegisters.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
