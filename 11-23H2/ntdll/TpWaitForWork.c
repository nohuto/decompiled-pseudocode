/*
 * XREFs of TpWaitForWork @ 0x18004C830
 * Callers:
 *     RtlpFcFreeChangeRegistration @ 0x1800503CC (RtlpFcFreeChangeRegistration.c)
 *     LdrpDetectDetour @ 0x180071780 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x18002FA78 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x18004E620 (TppWorkpValidateWork.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppWorkpValidateWork(Work, 0LL, 0LL) )
    TppWorkWait(Work, CancelPendingCallbacks);
}
