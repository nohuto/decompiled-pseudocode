/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x140758B90
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14020AA14 (DbgUnicodeStringToAnsiString.c)
 *     DifRtlUnicodeStringToAnsiStringWrapper @ 0x1405EBD40 (DifRtlUnicodeStringToAnsiStringWrapper.c)
 *     EtwpBuildProcessEvent @ 0x140754A38 (EtwpBuildProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x140756D80 (MmGetSystemRoutineAddress.c)
 *     ExpQueryModuleInformation @ 0x1407589F0 (ExpQueryModuleInformation.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x1407CE314 (ExpConvertLdrEntryToModuleInfo.c)
 *     CmpQueryDowncastString @ 0x1407DBAA4 (CmpQueryDowncastString.c)
 *     CmpLoadLayerVersion @ 0x14080FA28 (CmpLoadLayerVersion.c)
 *     ObCreateObjectTypeEx @ 0x140821770 (ObCreateObjectTypeEx.c)
 *     KsepGetModuleInfoByName @ 0x140977654 (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FF6C0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140A00030 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB210 (ExpSystemErrorHandler2.c)
 *     ViThunkHookExportAddress @ 0x140ADCC48 (ViThunkHookExportAddress.c)
 *     HdlspProcessDumpCommand @ 0x140AEBCAC (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x140B70E7C (IopReassignSystemRoot.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x1406D9F90 (RtlUnicodeToMultiByteN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407561F0 (RtlxUnicodeStringToOemSize.c)
 *     ExpAllocateStringRoutine @ 0x1407C7520 (ExpAllocateStringRoutine.c)
 *     ExFreePool @ 0x140AAFCC0 (ExFreePool.c)
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
