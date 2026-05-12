/*
 * XREFs of __report_rangecheckfailure @ 0x1C00220E0
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C0012C3C (StorCompareScsiDeviceId.c)
 *     ParseTPerProperties @ 0x1C007E6C0 (ParseTPerProperties.c)
 *     WppInitGlobalLogger @ 0x1C00A887C (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
