/*
 * XREFs of sub_1403DE020 @ 0x1403DE020
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

wchar_t *__fastcall sub_1403DE020(ULONG_PTR BugCheckParameter3)
{
  const CHAR *v1; // rdx
  wchar_t *result; // rax
  ANSI_STRING SourceString; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(const CHAR **)(BugCheckParameter3 + 216);
  SourceString = 0LL;
  RtlInitAnsiString(&SourceString, v1);
  DestinationString.Length = 0;
  DestinationString.MaximumLength = 2 * (SourceString.Length + 1);
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          PagedPool,
                                          2LL * ((unsigned int)SourceString.Length + 1),
                                          0x30394D43u);
  if ( !DestinationString.Buffer )
    KeBugCheckEx(0x74u, 3uLL, 1uLL, BugCheckParameter3, 0LL);
  RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
  result = DestinationString.Buffer;
  DestinationString.Buffer[SourceString.Length] = 0;
  DestinationString.Length += 2;
  return result;
}
