/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x140758680
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14020A9F4 (DbgUnicodeStringToAnsiString.c)
 *     DifRtlUnicodeStringToAnsiStringWrapper @ 0x1405EBCB0 (DifRtlUnicodeStringToAnsiStringWrapper.c)
 *     EtwpBuildProcessEvent @ 0x140754528 (EtwpBuildProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x140756870 (MmGetSystemRoutineAddress.c)
 *     ExpQueryModuleInformation @ 0x1407584E0 (ExpQueryModuleInformation.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x1407CDD84 (ExpConvertLdrEntryToModuleInfo.c)
 *     CmpQueryDowncastString @ 0x1407DB524 (CmpQueryDowncastString.c)
 *     CmpLoadLayerVersion @ 0x14080D4A8 (CmpLoadLayerVersion.c)
 *     ObCreateObjectTypeEx @ 0x14081F1F0 (ObCreateObjectTypeEx.c)
 *     KsepGetModuleInfoByName @ 0x1409775A4 (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF610 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1409FFF80 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB150 (ExpSystemErrorHandler2.c)
 *     ViThunkHookExportAddress @ 0x140ADBC78 (ViThunkHookExportAddress.c)
 *     HdlspProcessDumpCommand @ 0x140AEACAC (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x140B6FE8C (IopReassignSystemRoot.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x1406D9EE0 (RtlUnicodeToMultiByteN.c)
 *     RtlxUnicodeStringToOemSize @ 0x140755CE0 (RtlxUnicodeStringToOemSize.c)
 *     ExpAllocateStringRoutine @ 0x1407C6F90 (ExpAllocateStringRoutine.c)
 *     ExFreePool @ 0x140AAECC0 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  char v6; // r14
  ULONG v7; // eax
  unsigned __int16 v8; // di
  ULONG MaximumLength; // ecx
  int v10; // edi
  unsigned __int16 v11; // dx
  char *StringRoutine; // rax
  ULONG BytesInMultiByteString; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = RtlxUnicodeStringToOemSize(SourceString);
  v8 = v7;
  BytesInMultiByteString = v7;
  if ( v7 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    StringRoutine = (char *)ExpAllocateStringRoutine(v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    DestinationString->MaximumLength = v8;
    LOWORD(MaximumLength) = v8;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v7 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v6 = 1;
    }
  }
  v10 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          (unsigned __int16)MaximumLength - 1,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v10 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
      DestinationString->MaximumLength = 0;
    }
  }
  else
  {
    v11 = BytesInMultiByteString;
    DestinationString->Buffer[BytesInMultiByteString] = 0;
    DestinationString->Length = v11;
  }
  if ( v6 )
    return -2147483643;
  return v10;
}
