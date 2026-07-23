/*
 * XREFs of sub_140A9BF20 @ 0x140A9BF20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A9BF20(PVOID P)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&stru_140D58B40, &word_140A7CB00);
  RtlInitUnicodeString(&stru_140D58B50, &word_140A7CB00);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (unsigned __int64)sub_140A834A0);
  dword_140D049A0 = 2;
  ExFreePoolWithTag(P, 0);
}
