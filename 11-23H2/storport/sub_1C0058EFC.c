/*
 * XREFs of sub_1C0058EFC @ 0x1C0058EFC
 * Callers:
 *     sub_1C003FB90 @ 0x1C003FB90 (sub_1C003FB90.c)
 * Callees:
 *     sub_1C00207BC @ 0x1C00207BC (sub_1C00207BC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C00576D4 @ 0x1C00576D4 (sub_1C00576D4.c)
 */

__int64 __fastcall sub_1C0058EFC(__int64 a1, struct _UNICODE_STRING *a2, unsigned __int32 *a3)
{
  unsigned __int32 v6; // ebx
  __int64 v7; // r8
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[32]; // [rsp+30h] [rbp-68h] BYREF

  v6 = _InterlockedIncrement(&dword_1C0093474);
  sub_1C00207BC(SourceString, 32LL, L"\\Device\\RaidPort%d", v6, 0LL, 0LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = sub_1C00576D4(a2, &DestinationString, v7, a1);
  *a3 = v6;
  return result;
}
