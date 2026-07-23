/*
 * XREFs of RtlCopyUnicodeString @ 0x1402A76A0
 * Callers:
 *     sub_140204B30 @ 0x140204B30 (sub_140204B30.c)
 *     sub_140204DA0 @ 0x140204DA0 (sub_140204DA0.c)
 *     sub_14022B210 @ 0x14022B210 (sub_14022B210.c)
 *     IoQueryFullDriverPath @ 0x1403B5230 (IoQueryFullDriverPath.c)
 *     sub_1403BDD00 @ 0x1403BDD00 (sub_1403BDD00.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     RtlPcToFileName @ 0x1403D6E30 (RtlPcToFileName.c)
 *     sub_14051A18C @ 0x14051A18C (sub_14051A18C.c)
 *     sub_140642CDC @ 0x140642CDC (sub_140642CDC.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_140669CBC @ 0x140669CBC (sub_140669CBC.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     sub_14067AFB0 @ 0x14067AFB0 (sub_14067AFB0.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140694E60 (FsRtlFindInTunnelCacheEx.c)
 *     sub_140696E04 @ 0x140696E04 (sub_140696E04.c)
 *     sub_1406A2F6C @ 0x1406A2F6C (sub_1406A2F6C.c)
 *     sub_1406B9A14 @ 0x1406B9A14 (sub_1406B9A14.c)
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     sub_1406EF280 @ 0x1406EF280 (sub_1406EF280.c)
 *     sub_14071C4C0 @ 0x14071C4C0 (sub_14071C4C0.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_140748300 @ 0x140748300 (sub_140748300.c)
 *     sub_14075B9CC @ 0x14075B9CC (sub_14075B9CC.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140767AEC @ 0x140767AEC (sub_140767AEC.c)
 *     sub_140769010 @ 0x140769010 (sub_140769010.c)
 *     sub_1407690BC @ 0x1407690BC (sub_1407690BC.c)
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_14077FB68 @ 0x14077FB68 (sub_14077FB68.c)
 *     sub_1407FBA68 @ 0x1407FBA68 (sub_1407FBA68.c)
 *     sub_14080B370 @ 0x14080B370 (sub_14080B370.c)
 *     sub_14080B4F0 @ 0x14080B4F0 (sub_14080B4F0.c)
 *     IoReportRootDevice @ 0x14081F220 (IoReportRootDevice.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     PsRegisterSiloMonitor @ 0x1408257B0 (PsRegisterSiloMonitor.c)
 *     sub_140837574 @ 0x140837574 (sub_140837574.c)
 *     sub_14084CD18 @ 0x14084CD18 (sub_14084CD18.c)
 *     sub_14085475C @ 0x14085475C (sub_14085475C.c)
 *     sub_140858D04 @ 0x140858D04 (sub_140858D04.c)
 *     sub_140865354 @ 0x140865354 (sub_140865354.c)
 *     RtlPcToFilePath @ 0x1408828C0 (RtlPcToFilePath.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_140934EA4 @ 0x140934EA4 (sub_140934EA4.c)
 *     sub_14094488C @ 0x14094488C (sub_14094488C.c)
 *     sub_140947628 @ 0x140947628 (sub_140947628.c)
 *     sub_140950530 @ 0x140950530 (sub_140950530.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_14095E7EC @ 0x14095E7EC (sub_14095E7EC.c)
 *     sub_14095E9F0 @ 0x14095E9F0 (sub_14095E9F0.c)
 *     sub_14097100C @ 0x14097100C (sub_14097100C.c)
 *     sub_14097303C @ 0x14097303C (sub_14097303C.c)
 *     sub_140976F90 @ 0x140976F90 (sub_140976F90.c)
 *     sub_1409777B4 @ 0x1409777B4 (sub_1409777B4.c)
 *     sub_14098DCC4 @ 0x14098DCC4 (sub_14098DCC4.c)
 *     sub_1409AC7F8 @ 0x1409AC7F8 (sub_1409AC7F8.c)
 *     sub_1409AC86C @ 0x1409AC86C (sub_1409AC86C.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB230 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     sub_1409CC540 @ 0x1409CC540 (sub_1409CC540.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     sub_140A34148 @ 0x140A34148 (sub_140A34148.c)
 *     sub_140A34854 @ 0x140A34854 (sub_140A34854.c)
 *     sub_140A6B1E0 @ 0x140A6B1E0 (sub_140A6B1E0.c)
 *     sub_140B263A0 @ 0x140B263A0 (sub_140B263A0.c)
 *     sub_140B4BF38 @ 0x140B4BF38 (sub_140B4BF38.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void __stdcall RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // r8d
  unsigned int MaximumLength; // eax
  wchar_t *Buffer; // rdx
  wchar_t *v6; // rsi
  unsigned __int64 v7; // rbx

  if ( SourceString )
  {
    Length = SourceString->Length;
    MaximumLength = DestinationString->MaximumLength;
    Buffer = SourceString->Buffer;
    if ( (unsigned __int16)Length <= (unsigned __int16)MaximumLength )
      MaximumLength = Length;
    v6 = DestinationString->Buffer;
    v7 = MaximumLength;
    DestinationString->Length = MaximumLength;
    memmove(v6, Buffer, MaximumLength);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      v6[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
