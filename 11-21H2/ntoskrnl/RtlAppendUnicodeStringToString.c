/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1402DFA30
 * Callers:
 *     sub_14057D77C @ 0x14057D77C (sub_14057D77C.c)
 *     sub_140593B18 @ 0x140593B18 (sub_140593B18.c)
 *     sub_140642A44 @ 0x140642A44 (sub_140642A44.c)
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 *     sub_14064C4AC @ 0x14064C4AC (sub_14064C4AC.c)
 *     sub_14064C858 @ 0x14064C858 (sub_14064C858.c)
 *     sub_140660F7C @ 0x140660F7C (sub_140660F7C.c)
 *     sub_14066119C @ 0x14066119C (sub_14066119C.c)
 *     sub_14067AFB0 @ 0x14067AFB0 (sub_14067AFB0.c)
 *     sub_14067B1DC @ 0x14067B1DC (sub_14067B1DC.c)
 *     sub_14067B694 @ 0x14067B694 (sub_14067B694.c)
 *     sub_14067DB18 @ 0x14067DB18 (sub_14067DB18.c)
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_1406B9BC0 @ 0x1406B9BC0 (sub_1406B9BC0.c)
 *     IoQueryDeviceDescription @ 0x1406DDED0 (IoQueryDeviceDescription.c)
 *     sub_1406DE008 @ 0x1406DE008 (sub_1406DE008.c)
 *     sub_1406DE494 @ 0x1406DE494 (sub_1406DE494.c)
 *     sub_140713F8C @ 0x140713F8C (sub_140713F8C.c)
 *     sub_140742C78 @ 0x140742C78 (sub_140742C78.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 *     sub_140748300 @ 0x140748300 (sub_140748300.c)
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 *     sub_140760554 @ 0x140760554 (sub_140760554.c)
 *     sub_14077CB98 @ 0x14077CB98 (sub_14077CB98.c)
 *     sub_14077FB68 @ 0x14077FB68 (sub_14077FB68.c)
 *     sub_14077FDA0 @ 0x14077FDA0 (sub_14077FDA0.c)
 *     NaptrDnsRecordConvert_1 @ 0x140801108 (NaptrDnsRecordConvert_1.c)
 *     sub_14080B4F0 @ 0x14080B4F0 (sub_14080B4F0.c)
 *     sub_14080B938 @ 0x14080B938 (sub_14080B938.c)
 *     sub_14080CD20 @ 0x14080CD20 (sub_14080CD20.c)
 *     sub_14081F468 @ 0x14081F468 (sub_14081F468.c)
 *     sub_140826270 @ 0x140826270 (sub_140826270.c)
 *     sub_14082ED84 @ 0x14082ED84 (sub_14082ED84.c)
 *     sub_140843AA4 @ 0x140843AA4 (sub_140843AA4.c)
 *     sub_140843B58 @ 0x140843B58 (sub_140843B58.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_140916454 @ 0x140916454 (sub_140916454.c)
 *     sub_140934EA4 @ 0x140934EA4 (sub_140934EA4.c)
 *     sub_140947628 @ 0x140947628 (sub_140947628.c)
 *     sub_14095C12C @ 0x14095C12C (sub_14095C12C.c)
 *     sub_14095D038 @ 0x14095D038 (sub_14095D038.c)
 *     sub_14095DC2C @ 0x14095DC2C (sub_14095DC2C.c)
 *     sub_1409AC86C @ 0x1409AC86C (sub_1409AC86C.c)
 *     sub_1409B9B50 @ 0x1409B9B50 (sub_1409B9B50.c)
 *     sub_1409BAE18 @ 0x1409BAE18 (sub_1409BAE18.c)
 *     sub_1409CC540 @ 0x1409CC540 (sub_1409CC540.c)
 *     sub_140A139FC @ 0x140A139FC (sub_140A139FC.c)
 *     sub_140A1B9F0 @ 0x140A1B9F0 (sub_140A1B9F0.c)
 *     sub_140A1BCE4 @ 0x140A1BCE4 (sub_140A1BCE4.c)
 *     sub_140A1BF48 @ 0x140A1BF48 (sub_140A1BF48.c)
 *     sub_140A1C148 @ 0x140A1C148 (sub_140A1C148.c)
 *     sub_140A1C7F0 @ 0x140A1C7F0 (sub_140A1C7F0.c)
 *     sub_140A1C88C @ 0x140A1C88C (sub_140A1C88C.c)
 *     sub_140A2CF6C @ 0x140A2CF6C (sub_140A2CF6C.c)
 *     sub_140A34854 @ 0x140A34854 (sub_140A34854.c)
 *     sub_140B12AF0 @ 0x140B12AF0 (sub_140B12AF0.c)
 *     sub_140B13B7C @ 0x140B13B7C (sub_140B13B7C.c)
 *     sub_140B2B730 @ 0x140B2B730 (sub_140B2B730.c)
 *     sub_140B4FF80 @ 0x140B4FF80 (sub_140B4FF80.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  unsigned int Length; // esi
  wchar_t *v4; // r14

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  if ( Destination->Length + Length <= Destination->MaximumLength )
  {
    v4 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
    memmove(v4, Source->Buffer, Source->Length);
    Destination->Length += Length;
    if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
      v4[(unsigned __int64)Length >> 1] = 0;
    return 0;
  }
  return -1073741789;
}
