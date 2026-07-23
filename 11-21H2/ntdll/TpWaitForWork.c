/*
 * XREFs of TpWaitForWork @ 0x180084C50
 * Callers:
 *     LdrpDetectDetour @ 0x180074E0C (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x180084C00 (RtlpFcFreeChangeRegistration.c)
 * Callees:
 *     TppWorkWait @ 0x18001F59C (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x180020290 (TppWorkpValidateWork.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppWorkpValidateWork((_PEB_LDR_DATA *)Work, 0LL, 0LL) )
    TppWorkWait(Work, CancelPendingCallbacks);
}
