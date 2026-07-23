/*
 * XREFs of RtlAppendUnicodeToString @ 0x1402DFAC0
 * Callers:
 *     sub_1403D7C1C @ 0x1403D7C1C (sub_1403D7C1C.c)
 *     sub_14057D77C @ 0x14057D77C (sub_14057D77C.c)
 *     sub_140593B18 @ 0x140593B18 (sub_140593B18.c)
 *     sub_140642A44 @ 0x140642A44 (sub_140642A44.c)
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 *     sub_14064C4AC @ 0x14064C4AC (sub_14064C4AC.c)
 *     sub_14064C858 @ 0x14064C858 (sub_14064C858.c)
 *     sub_140669CBC @ 0x140669CBC (sub_140669CBC.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14066B5D0 (RtlFormatCurrentUserKeyPath.c)
 *     sub_14067B694 @ 0x14067B694 (sub_14067B694.c)
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_1406B9BC0 @ 0x1406B9BC0 (sub_1406B9BC0.c)
 *     sub_1406DD50C @ 0x1406DD50C (sub_1406DD50C.c)
 *     sub_1406DE008 @ 0x1406DE008 (sub_1406DE008.c)
 *     sub_1406DE494 @ 0x1406DE494 (sub_1406DE494.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_140769668 @ 0x140769668 (sub_140769668.c)
 *     sub_14077CB98 @ 0x14077CB98 (sub_14077CB98.c)
 *     sub_14077FB68 @ 0x14077FB68 (sub_14077FB68.c)
 *     sub_14077FDA0 @ 0x14077FDA0 (sub_14077FDA0.c)
 *     sub_14080B4F0 @ 0x14080B4F0 (sub_14080B4F0.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     sub_14081F468 @ 0x14081F468 (sub_14081F468.c)
 *     sub_14082071C @ 0x14082071C (sub_14082071C.c)
 *     sub_140826270 @ 0x140826270 (sub_140826270.c)
 *     sub_1408268AC @ 0x1408268AC (sub_1408268AC.c)
 *     sub_14082ED84 @ 0x14082ED84 (sub_14082ED84.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_1408337BC @ 0x1408337BC (sub_1408337BC.c)
 *     sub_140833B08 @ 0x140833B08 (sub_140833B08.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 *     sub_140843AA4 @ 0x140843AA4 (sub_140843AA4.c)
 *     sub_140843B58 @ 0x140843B58 (sub_140843B58.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_140917A40 @ 0x140917A40 (sub_140917A40.c)
 *     sub_140934EA4 @ 0x140934EA4 (sub_140934EA4.c)
 *     sub_14095C12C @ 0x14095C12C (sub_14095C12C.c)
 *     sub_1409B9B50 @ 0x1409B9B50 (sub_1409B9B50.c)
 *     sub_1409BAE18 @ 0x1409BAE18 (sub_1409BAE18.c)
 *     IoWMISuggestInstanceName @ 0x1409DBE80 (IoWMISuggestInstanceName.c)
 *     sub_140A084FC @ 0x140A084FC (sub_140A084FC.c)
 *     sub_140A0A718 @ 0x140A0A718 (sub_140A0A718.c)
 *     sub_140A139FC @ 0x140A139FC (sub_140A139FC.c)
 *     sub_140A17490 @ 0x140A17490 (sub_140A17490.c)
 *     sub_140A1B9F0 @ 0x140A1B9F0 (sub_140A1B9F0.c)
 *     sub_140A1BCE4 @ 0x140A1BCE4 (sub_140A1BCE4.c)
 *     sub_140A1C148 @ 0x140A1C148 (sub_140A1C148.c)
 *     sub_140A1C7F0 @ 0x140A1C7F0 (sub_140A1C7F0.c)
 *     sub_140A1C88C @ 0x140A1C88C (sub_140A1C88C.c)
 *     sub_140A1D568 @ 0x140A1D568 (sub_140A1D568.c)
 *     sub_140B12AF0 @ 0x140B12AF0 (sub_140B12AF0.c)
 *     sub_140B13B7C @ 0x140B13B7C (sub_140B13B7C.c)
 *     sub_140B16B94 @ 0x140B16B94 (sub_140B16B94.c)
 *     sub_140B2B730 @ 0x140B2B730 (sub_140B2B730.c)
 *     sub_140B4FF80 @ 0x140B4FF80 (sub_140B4FF80.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned int Length; // ebp
  wchar_t *v5; // r14
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( !Source )
    return 0;
  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, Source) >= 0 )
  {
    Length = DestinationString.Length;
    if ( Destination->Length + (unsigned int)DestinationString.Length <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, DestinationString.Length);
      Destination->Length += Length;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)Length >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
