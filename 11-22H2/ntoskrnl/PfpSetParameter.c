/*
 * XREFs of PfpSetParameter @ 0x1408480C4
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14075FEA4 (PfSetSuperfetchInformation.c)
 *     PfpSetBaseTime @ 0x140848030 (PfpSetBaseTime.c)
 *     PfpParametersInitialize @ 0x140B655B0 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14041B2A0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PfpSetParameter(HANDLE KeyHandle, const WCHAR *a2, __int64 a3, void *a4, ULONG DataSize)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( KeyHandle )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a4, DataSize);
  else
    return -1073741811;
}
