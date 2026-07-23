/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140AF5160
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x14035DE24 (CmQueryLayeredKey.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpQueryKeySecurity @ 0x1406D5BD0 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1406DC470 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2330 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     CmEnumerateValueKey @ 0x14070EA50 (CmEnumerateValueKey.c)
 *     NtFlushKey @ 0x1407AC6B0 (NtFlushKey.c)
 *     CmLockKeyForWrite @ 0x1408475CC (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x1408585CC (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140A0A7C8 (CmpSaveBootControlSet.c)
 *     CmSaveKey @ 0x140A0BC40 (CmSaveKey.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0CB40 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D350 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140A0D620 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D8F0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140A0DCD0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0DF10 (NtQueryOpenSubKeysEx.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A14150 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A15C64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A16198 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A166C4 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18224 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A184E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140AF5AE0 (CmpIsKeyBodyEligibleForDump.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140B3F9E4 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x1407693B0 (CmEqualTrans.c)
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
