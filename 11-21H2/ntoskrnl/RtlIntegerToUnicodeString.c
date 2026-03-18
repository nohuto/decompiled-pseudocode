/*
 * XREFs of RtlIntegerToUnicodeString @ 0x14075AC60
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403CCE24 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14064B9D8 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14064C858 (AdtpFormatPrefix.c)
 *     pIoQueryDeviceDescription @ 0x1406DE008 (pIoQueryDeviceDescription.c)
 *     RtlpInitNlsFileName @ 0x1406E9530 (RtlpInitNlsFileName.c)
 *     AdtpObjsInitialize @ 0x14084CD18 (AdtpObjsInitialize.c)
 *     ExProcessCounterSetCallback @ 0x1409F5F90 (ExProcessCounterSetCallback.c)
 *     AdtpBuildAccessesString @ 0x140A1C148 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140A1C7F0 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140A1C88C (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x140A34510 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A34854 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x14075ACF0 (RtlIntegerToChar.c)
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
