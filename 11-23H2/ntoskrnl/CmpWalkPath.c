/*
 * XREFs of CmpWalkPath @ 0x140825B68
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x140A224FC (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5952C (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140B59984 (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     CmpWalkUnicodeStringPath @ 0x140825BB0 (CmpWalkUnicodeStringPath.c)
 */

__int64 __fastcall CmpWalkPath(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, PCWSTR SourceString)
{
  unsigned int v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = BugCheckParameter4;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return CmpWalkUnicodeStringPath(BugCheckParameter3, v3);
}
