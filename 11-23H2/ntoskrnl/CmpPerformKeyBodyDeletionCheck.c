/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140AF5160
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x1402F659C (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x14035DC84 (CmQueryLayeredKey.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpQueryKeySecurity @ 0x1406D5BA0 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1406DC440 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2300 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     CmEnumerateValueKey @ 0x14070E840 (CmEnumerateValueKey.c)
 *     NtFlushKey @ 0x1407AC4C0 (NtFlushKey.c)
 *     CmLockKeyForWrite @ 0x1408472CC (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x14085838C (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140A0A518 (CmpSaveBootControlSet.c)
 *     CmSaveKey @ 0x140A0B990 (CmSaveKey.c)
 *     CmpLoadHiveVolatile @ 0x140A0C330 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D0A0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140A0D370 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D640 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140A0DA20 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0DC60 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A13EA0 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A159B4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15EE8 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A16414 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A17F74 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A18238 (CmKeyBodyReplicateToVirtual.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140AF5AE0 (CmpIsKeyBodyEligibleForDump.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140B3F9E4 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x1407691C0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x140AF56A8 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 48) & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    return 0LL;
  result = CmListGetNextElement(v3 + 208, &v8, 32LL);
  if ( !result )
    return 0LL;
  do
  {
    v7 = *(_DWORD *)(result + 68);
    if ( v7 == 2 || v7 == 11 )
      break;
    result = CmListGetNextElement(v6, &v8, 32LL);
  }
  while ( result );
  if ( !CmEqualTrans(*(_QWORD *)(result + 56), v5) )
    return 0LL;
LABEL_9:
  result = 3221225852LL;
  if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
    return 3221226533LL;
  return result;
}
