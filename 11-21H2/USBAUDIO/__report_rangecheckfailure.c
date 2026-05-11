/*
 * XREFs of __report_rangecheckfailure @ 0x1C0001050
 * Callers:
 *     IsClassDriverOnly @ 0x1C0029204 (IsClassDriverOnly.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
