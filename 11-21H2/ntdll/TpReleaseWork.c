/*
 * XREFs of TpReleaseWork @ 0x180020220
 * Callers:
 *     LdrpDetectDetour @ 0x180074E0C (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x180084C00 (RtlpFcFreeChangeRegistration.c)
 *     RtlpCtContextFree @ 0x18010EE38 (RtlpCtContextFree.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x180020290 (TppWorkpValidateWork.c)
 *     TppCleanupGroupMemberRelease @ 0x1800214A0 (TppCleanupGroupMemberRelease.c)
 */

void __cdecl TpReleaseWork(PTP_WORK Work)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppWorkpValidateWork(Work, 1LL) && (unsigned int)TppCleanupGroupMemberRelease(Work, 1LL) )
  {
    *((_QWORD *)Work + 23) = retaddr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Work, 0xFFFFFFFF) == 1 )
      (**((void (__fastcall ***)(PTP_WORK))Work + 1))(Work);
  }
}
