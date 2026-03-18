/*
 * XREFs of ExpTryAcquireSpinLockShared @ 0x140277630
 * Callers:
 *     MiLocateCombineBlock @ 0x140215B20 (MiLocateCombineBlock.c)
 *     MiQueryAddressSpan @ 0x140273D60 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiLockPageListAndLastPage @ 0x140278FA0 (MiLockPageListAndLastPage.c)
 *     MiEndingOffsetWithLock @ 0x140279E50 (MiEndingOffsetWithLock.c)
 *     MiGetControlAreaPtes @ 0x140288610 (MiGetControlAreaPtes.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14046B410 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B4F2 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14060B120 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryAcquireSpinLockShared(_DWORD *a1)
{
  signed __int32 v2; // [rsp+8h] [rbp+8h]
  signed __int32 v3; // [rsp+8h] [rbp+8h]
  signed __int32 v4; // [rsp+10h] [rbp+10h]

  _m_prefetchw(a1);
  v2 = *a1 & 0x7FFFFFFF;
  v4 = _InterlockedCompareExchange(a1, v2 + 1, v2);
  if ( v4 == v2 )
    return 1;
  while ( v4 >= 0 )
  {
    v3 = v4;
    v4 = _InterlockedCompareExchange(a1, v4 + 1, v4);
    if ( v4 == v3 )
      return 1;
  }
  return 0;
}
