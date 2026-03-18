/*
 * XREFs of SepRmReferenceFindCap @ 0x1405B98B8
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140228CE0 (SepCommonAccessCheckEx.c)
 *     SeComputeCreatorDeniedRights @ 0x14022F320 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckWithHint @ 0x1402316C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1402B3AC0 (SeAccessCheckByType.c)
 *     SeRmReferenceFindCapName @ 0x1405B9738 (SeRmReferenceFindCapName.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x14022A770 (RtlEqualSid.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     RtlGetNextEntryHashTable @ 0x140338020 (RtlGetNextEntryHashTable.c)
 *     RtlLookupEntryHashTable @ 0x140371080 (RtlLookupEntryHashTable.c)
 *     SepRmDereferenceCapTable @ 0x1405B7EB0 (SepRmDereferenceCapTable.c)
 *     SepComputeSidSignature @ 0x1407F4A80 (SepComputeSidSignature.c)
 */

__int64 __fastcall SepRmReferenceFindCap(PSID Sid1, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a2)
{
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  struct _RTL_DYNAMIC_HASH_TABLE *v6; // rbx
  ULONG_PTR v7; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v9; // rdi
  struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-38h] BYREF

  memset(&Context, 0, sizeof(Context));
  *a2 = 0LL;
  v4 = -1073741275;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&SepRmCapTableLock, 0LL);
  v6 = SepRmCapTable;
  if ( SepRmCapTable && _InterlockedIncrement64((volatile signed __int64 *)&SepRmCapTable[1]) <= 1 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock);
  KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    if ( SepRmEnforceCap )
    {
      v7 = SepComputeSidSignature(Sid1);
      for ( i = RtlLookupEntryHashTable(v6, v7, &Context); ; i = RtlGetNextEntryHashTable(v6, &Context) )
      {
        v9 = i;
        if ( !i )
          break;
        if ( RtlEqualSid(Sid1, i[1].Linkage.Flink) == 1 )
        {
          *a2 = v9;
          return 0;
        }
      }
    }
    SepRmDereferenceCapTable((volatile signed __int64 *)v6);
  }
  return v4;
}
