/*
 * XREFs of TpWaitForWork @ 0x180084C50
 * Callers:
 *     LdrpDetectDetour @ 0x180074E0C (LdrpDetectDetour.c)
 *     RtlpFcFreeChangeRegistration @ 0x180084C00 (RtlpFcFreeChangeRegistration.c)
 * Callees:
 *     TppWorkWait @ 0x18001F59C (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x180020290 (TppWorkpValidateWork.c)
 */

struct _PEB *__fastcall TpWaitForWork(_PEB_LDR_DATA *a1, int a2)
{
  struct _PEB *result; // rax

  result = (struct _PEB *)TppWorkpValidateWork(a1, 0LL, 0LL);
  if ( (_DWORD)result )
    return TppWorkWait(a1, a2);
  return result;
}
