/*
 * XREFs of HvpHeaderCheckSum @ 0x140AF5640
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x14029130C (HvpGenerateLogEntryHeader.c)
 *     HvHiveStartFileBacked @ 0x140701204 (HvHiveStartFileBacked.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14074D8BC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpGetHiveHeader @ 0x14074EC0C (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1407D9500 (HvWriteHivePrimaryFile.c)
 *     HvApplyLogFiles @ 0x1407FDA34 (HvApplyLogFiles.c)
 *     HvAnalyzeLogFiles @ 0x1407FDB08 (HvAnalyzeLogFiles.c)
 *     HvHiveStartMemoryBacked @ 0x140826290 (HvHiveStartMemoryBacked.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1D658 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvWriteExternal @ 0x140A20B44 (HvWriteExternal.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140A20D94 (HvIsInPlaceBaseBlockValid.c)
 *     HvpLogInvalidLogHeader @ 0x140A2A53C (HvpLogInvalidLogHeader.c)
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
