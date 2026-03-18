/*
 * XREFs of SepRmVerifyLsaProtectionLevel @ 0x14082BC84
 * Callers:
 *     SepRmLsaConnectRequest @ 0x14082B9DC (SepRmLsaConnectRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwQuerySystemEnvironmentValueEx @ 0x14041DAC0 (ZwQuerySystemEnvironmentValueEx.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     ObReferenceObjectByHandle @ 0x1406E62C0 (ObReferenceObjectByHandle.c)
 */

__int64 SepRmVerifyLsaProtectionLevel()
{
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v2[4]; // [rsp+50h] [rbp-20h] BYREF

  v2[0] = 2012912317;
  v2[1] = 1295123289;
  DestinationString = 0LL;
  v2[2] = -198680387;
  v2[3] = 1266192359;
  RtlInitUnicodeString(&DestinationString, L"Kernel_Lsa_Ppl_Config");
  return ZwQuerySystemEnvironmentValueEx((__int64)&DestinationString, (__int64)v2);
}
