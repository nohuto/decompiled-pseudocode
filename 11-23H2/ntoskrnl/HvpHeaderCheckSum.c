/*
 * XREFs of HvpHeaderCheckSum @ 0x140AF5640
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x14029159C (HvpGenerateLogEntryHeader.c)
 *     HvHiveStartFileBacked @ 0x140701414 (HvHiveStartFileBacked.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14074DAAC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpGetHiveHeader @ 0x14074EDFC (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1407D97D0 (HvWriteHivePrimaryFile.c)
 *     HvApplyLogFiles @ 0x1407FDD04 (HvApplyLogFiles.c)
 *     HvAnalyzeLogFiles @ 0x1407FDDD8 (HvAnalyzeLogFiles.c)
 *     HvHiveStartMemoryBacked @ 0x140826590 (HvHiveStartMemoryBacked.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1D908 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvWriteExternal @ 0x140A20DF4 (HvWriteExternal.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140A21044 (HvIsInPlaceBaseBlockValid.c)
 *     HvpLogInvalidLogHeader @ 0x140A2A7EC (HvpLogInvalidLogHeader.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140AF5DB4 (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpHeaderCheckSum(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  LODWORD(result) = 0;
  v2 = 127LL;
  do
  {
    result = *a1++ ^ (unsigned int)result;
    --v2;
  }
  while ( v2 );
  if ( (_DWORD)result == -1 )
    return 4294967294LL;
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
