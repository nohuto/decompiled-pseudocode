/*
 * XREFs of EtwpInitializeRegistration @ 0x140B73E10
 * Callers:
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x14033B07C (KiInitializeMutant.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectType @ 0x14081F4D0 (ObCreateObjectType.c)
 */

__int64 EtwpInitializeRegistration()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  KiInitializeMutant((__int64)&EtwpGlobalMutex, 0, 1, 0);
  EtwpReplyListLock = 0LL;
  qword_140C31C88 = (__int64)&EtwpReplyListHead;
  EtwpReplyListHead = (__int64)&EtwpReplyListHead;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 0x18u;
  v2[7] = IopOpenIoRing;
  LOWORD(v2[0]) = 120;
  v2[8] = EtwpCloseRegistrationObject;
  LODWORD(v2[1]) = 256;
  v2[9] = EtwpDeleteRegistrationObject;
  *(GENERIC_MAPPING *)((char *)&v2[1] + 4) = EtwpGenericMapping;
  HIDWORD(v2[3]) = 2052;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 112;
  RtlInitUnicodeString(&DestinationString, L"EtwRegistration");
  return ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&EtwpRegistrationObjectType);
}
