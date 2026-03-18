/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1407CF100
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403ABC30 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1406702CC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1406710C4 (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x1407A5288 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x1407CE584 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x1408420C8 (AdtpObjsInitialize.c)
 *     ExProcessCounterSetCallback @ 0x1409F5DD0 (ExProcessCounterSetCallback.c)
 *     AdtpBuildAccessesString @ 0x140A5B8D4 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A5BF7C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A5C018 (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B00 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73E44 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773C00 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1407CF190 (RtlIntegerToChar.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(Value, Base, 33LL, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
