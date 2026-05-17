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

__int64 __fastcall TpReleaseWork(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = TppWorkpValidateWork(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
