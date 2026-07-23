/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1407CF3D0
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403ABE10 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14067081C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140671614 (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x1407A5478 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x1407CE854 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x1408423C8 (AdtpObjsInitialize.c)
 *     ExProcessCounterSetCallback @ 0x1409F6060 (ExProcessCounterSetCallback.c)
 *     AdtpBuildAccessesString @ 0x140A5BB84 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A5C22C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A5C2C8 (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x140A73DB0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A740F4 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1407CF460 (RtlIntegerToChar.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(Value, Base, 33, Stringa);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = Stringa;
    v5 = -1LL;
    do
      ++v5;
    while ( Stringa[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
