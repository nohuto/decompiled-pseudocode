/*
 * XREFs of HvpHeaderCheckSum @ 0x140AF6640
 * Callers:
 *     HvpGenerateLogEntryHeader @ 0x1402911EC (HvpGenerateLogEntryHeader.c)
 *     HvHiveStartFileBacked @ 0x1407012B4 (HvHiveStartFileBacked.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x14074DDCC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvpGetHiveHeader @ 0x14074F11C (HvpGetHiveHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1407D9A80 (HvWriteHivePrimaryFile.c)
 *     HvApplyLogFiles @ 0x1407FE0E4 (HvApplyLogFiles.c)
 *     HvAnalyzeLogFiles @ 0x1407FE1B8 (HvAnalyzeLogFiles.c)
 *     HvHiveStartMemoryBacked @ 0x140826DF0 (HvHiveStartMemoryBacked.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1D708 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvWriteExternal @ 0x140A20BF4 (HvWriteExternal.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140A20E44 (HvIsInPlaceBaseBlockValid.c)
 *     HvpLogInvalidLogHeader @ 0x140A2A5EC (HvpLogInvalidLogHeader.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140AF6DB4 (HvSnapshotHiveToOffsetArray.c)
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
