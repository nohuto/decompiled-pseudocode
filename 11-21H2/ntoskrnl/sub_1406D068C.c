/*
 * XREFs of sub_1406D068C @ 0x1406D068C
 * Callers:
 *     sub_1406D04CC @ 0x1406D04CC (sub_1406D04CC.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     sub_1406D0858 @ 0x1406D0858 (sub_1406D0858.c)
 *     sub_140789084 @ 0x140789084 (sub_140789084.c)
 */

int __fastcall sub_1406D068C(int a1, const WCHAR *a2, _WORD *a3, _DWORD *a4)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v7; // [rsp+60h] [rbp-A0h] BYREF

  DestinationString = 0LL;
  if ( a3 && *a4 )
    *a3 = 0;
  *a4 = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    result = sub_140789084(a1, (unsigned int)&DestinationString, 2, (unsigned int)&v7);
    if ( result >= 0 )
      return -1073741275;
  }
  return result;
}
