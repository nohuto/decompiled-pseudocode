/*
 * XREFs of __report_rangecheckfailure @ 0x1C0022C30
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C001769C (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C008E1A0 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
