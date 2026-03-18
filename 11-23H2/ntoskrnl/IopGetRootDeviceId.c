/*
 * XREFs of IopGetRootDeviceId @ 0x1408354B8
 * Callers:
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140835270 (IoReportRootDevice.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14022A860 (RtlAppendUnicodeToString.c)
 *     IopGetOriginalServiceName @ 0x140835544 (IopGetOriginalServiceName.c)
 */

int __fastcall IopGetRootDeviceId(PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  int result; // eax
  int v5; // edi
  unsigned __int64 Length; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  Destination->Length = 0;
  result = RtlAppendUnicodeToString(Destination, L"ROOT\\");
  v5 = result;
  if ( result >= 0 )
  {
    Length = Destination->Length;
    v7 = Destination->MaximumLength - (_DWORD)Length;
    if ( (int)IopGetOriginalServiceName(Source, &Destination->Buffer[Length >> 1], &v7) < 0 )
      return RtlAppendUnicodeStringToString(Destination, Source);
    Destination->Length += v7 - 2;
    return v5;
  }
  return result;
}
