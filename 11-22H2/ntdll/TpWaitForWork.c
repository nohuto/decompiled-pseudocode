/*
 * XREFs of TpWaitForWork @ 0x18004C990
 * Callers:
 *     RtlpFcFreeChangeRegistration @ 0x18005052C (RtlpFcFreeChangeRegistration.c)
 *     LdrpDetectDetour @ 0x18007145C (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x18002FC48 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x18004E780 (TppWorkpValidateWork.c)
 */

struct _PEB *__fastcall TpWaitForWork(_QWORD *a1, int a2)
{
  struct _PEB *result; // rax

  result = (struct _PEB *)TppWorkpValidateWork(a1, 0LL, 0LL);
  if ( (_DWORD)result )
    return TppWorkWait(a1, a2);
  return result;
}
