/*
 * XREFs of TpReleaseWork @ 0x18004E5B0
 * Callers:
 *     RtlpFcFreeChangeRegistration @ 0x1800503CC (RtlpFcFreeChangeRegistration.c)
 *     LdrpDetectDetour @ 0x180071780 (LdrpDetectDetour.c)
 *     RtlpCtContextFree @ 0x1801104E8 (RtlpCtContextFree.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x18004E620 (TppWorkpValidateWork.c)
 *     TppCleanupGroupMemberRelease @ 0x18004EEE0 (TppCleanupGroupMemberRelease.c)
 */

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppWorkpValidateWork(Work, 1LL, 0LL) && (unsigned int)TppCleanupGroupMemberRelease(Work, 1LL) )
  {
    *((_QWORD *)Work + 23) = retaddr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_WORK))Work + 1))(Work);
  }
}
