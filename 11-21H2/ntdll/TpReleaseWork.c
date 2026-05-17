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

__int64 __fastcall TpReleaseWork(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = TppWorkpValidateWork(a1, 1LL);
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
