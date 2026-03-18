/*
 * XREFs of RtlInitString @ 0x14036B950
 * Callers:
 *     HalMatchAcpiOemId @ 0x1403B1D20 (HalMatchAcpiOemId.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405D9260 (PopEmModuleAddressMatchCallback.c)
 *     RtlInitUTF8String @ 0x1405E4060 (RtlInitUTF8String.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407F0C38 (PopPowerRequestStatsGetIdForRequest.c)
 *     SepInitializationPhase1 @ 0x140847FF0 (SepInitializationPhase1.c)
 *     NtQuerySystemEnvironmentValue @ 0x140A00DB0 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x140A14988 (AslStringAnsiToUnicode.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
