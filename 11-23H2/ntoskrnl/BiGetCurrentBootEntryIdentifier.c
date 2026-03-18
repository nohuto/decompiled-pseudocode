/*
 * XREFs of BiGetCurrentBootEntryIdentifier @ 0x140806EC8
 * Callers:
 *     BcdOpenObject @ 0x140804F44 (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041B420 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall BiGetCurrentBootEntryIdentifier(_OWORD *a1)
{
  __int64 result; // rax
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  result = ZwQuerySystemInformation(90LL, (__int64)v3);
  if ( (int)result >= 0 )
    *a1 = v3[0];
  return result;
}
