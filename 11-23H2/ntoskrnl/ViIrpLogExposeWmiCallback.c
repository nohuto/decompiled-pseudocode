/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x140ADCFC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x140810200 (IoCreateDriver.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(PVOID P)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_140ABDB60);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_140ABDB60);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(void **, _QWORD))ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(P, 0);
}
