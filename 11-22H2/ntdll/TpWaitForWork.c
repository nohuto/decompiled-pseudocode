/*
 * XREFs of TpWaitForWork @ 0x18004C990
 * Callers:
 *     RtlpFcFreeChangeRegistration @ 0x18005052C (RtlpFcFreeChangeRegistration.c)
 *     LdrpDetectDetour @ 0x18007145C (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x18002FC48 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x18004E780 (TppWorkpValidateWork.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppWorkpValidateWork(Work, 0LL, 0LL) )
    TppWorkWait(Work, CancelPendingCallbacks);
}
