/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1407CF660
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x140373A58 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14067033C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140671134 (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x1407A5798 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x1407CEB14 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x140843E58 (AdtpObjsInitialize.c)
 *     ExProcessCounterSetCallback @ 0x1409F5E80 (ExProcessCounterSetCallback.c)
 *     AdtpBuildAccessesString @ 0x140A5B944 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A5BFEC (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A5C088 (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B70 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A73EB4 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1407CF6F0 (RtlIntegerToChar.c)
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
