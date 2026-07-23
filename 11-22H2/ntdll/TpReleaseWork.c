/*
 * XREFs of TpReleaseWork @ 0x18004E710
 * Callers:
 *     RtlpFcFreeChangeRegistration @ 0x18005052C (RtlpFcFreeChangeRegistration.c)
 *     LdrpDetectDetour @ 0x18007145C (LdrpDetectDetour.c)
 *     RtlpCtContextFree @ 0x18010F068 (RtlpCtContextFree.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x18004E780 (TppWorkpValidateWork.c)
 *     TppCleanupGroupMemberRelease @ 0x18004F040 (TppCleanupGroupMemberRelease.c)
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
