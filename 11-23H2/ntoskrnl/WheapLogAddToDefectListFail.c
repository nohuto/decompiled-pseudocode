/*
 * XREFs of WheapLogAddToDefectListFail @ 0x140A088E0
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x140A0844C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x140380BF0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

LONG WheapLogAddToDefectListFail()
{
  _DWORD Src[8]; // [rsp+20h] [rbp-38h] BYREF

  Src[3] = 0;
  Src[7] = 0;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 32;
  Src[5] = -2147483569;
  Src[4] = 1280201291;
  Src[6] = 2;
  return WheaLogInternalEvent(Src);
}
