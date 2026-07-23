/*
 * XREFs of CmpLogCheckpoint @ 0x1406989A4
 * Callers:
 *     CmpStopRMLog @ 0x140697CEC (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x140708280 (CmpTransWriteLog.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     CmListGetNextElement @ 0x140AF56A8 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLogCheckpoint(__int64 a1, __int64 a2, char a3)
{
  int v3; // edi
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  const CLFS_LSN *NextElement; // rax
  NTSTATUS LogFileInformation; // eax
  CLFS_LSN LastLsn; // rcx
  CLFS_INFORMATION *Pool2; // rax
  CLFS_INFORMATION *v12; // rbx
  void *v13; // rcx
  NTSTATUS v14; // eax
  CLFS_INFORMATION *v15; // rax
  CLFS_INFORMATION *v16; // rbx
  const CLFS_LSN *v18; // r14
  CLFS_CONTAINER_ID v19; // ebx
  int v20; // r8d
  CLFS_LSN plsn; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v22[2]; // [rsp+48h] [rbp-B8h] BYREF
  ULONG pcbInfoBuffer; // [rsp+50h] [rbp-B0h] BYREF
  CLFS_LSN pvRestartBuffer; // [rsp+58h] [rbp-A8h] BYREF
  CLFS_LSN plsnNext; // [rsp+60h] [rbp-A0h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+F0h] [rbp-10h] BYREF
  ULONG *v28; // [rsp+110h] [rbp+10h]
  int v29; // [rsp+118h] [rbp+18h]
  int v30; // [rsp+11Ch] [rbp+1Ch]

  v3 = 0;
  *(_QWORD *)v22 = 0LL;
  pvRestartBuffer.ullOffset = 0LL;
  plsn.ullOffset = CLFS_LSN_INVALID_EXT;
  v6 = 120LL;
  plsnNext = (CLFS_LSN)CLFS_LSN_NULL_EXT[0];
  pcbInfoBuffer = 120;
  memset(&pinfoBuffer, 0, sizeof(pinfoBuffer));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  NextElement = (const CLFS_LSN *)CmListGetNextElement(a1 + 16, v22, 0LL);
  if ( NextElement )
  {
    do
    {
      v18 = NextElement + 13;
      if ( !ClfsLsnInvalid(NextElement + 13) )
      {
        v19 = ClfsLsnContainer((const CLFS_LSN *)(a1 + 120));
        if ( ClfsLsnContainer(v18) == v19 )
        {
          ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
          KeLeaveCriticalRegion();
          return 0LL;
        }
      }
      if ( ClfsLsnInvalid(&plsn) || ClfsLsnLess(v18, &plsn) )
        plsn = *v18;
      NextElement = (const CLFS_LSN *)CmListGetNextElement(a1 + 16, v22, 0LL);
    }
    while ( NextElement );
    v6 = (unsigned int)(v20 + 120);
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( ClfsLsnInvalid(&plsn) )
  {
    LogFileInformation = ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), &pinfoBuffer, &pcbInfoBuffer);
    LastLsn = plsn;
    v3 = LogFileInformation;
    if ( LogFileInformation >= 0 )
      LastLsn = pinfoBuffer.LastLsn;
    plsn = LastLsn;
  }
  v22[0] = v6;
  Pool2 = (CLFS_INFORMATION *)ExAllocatePool2(256LL, v6, 538987843LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), Pool2, v22);
    ExFreePoolWithTag(v12, 0);
  }
  if ( v3 >= 0 )
  {
    v13 = *(void **)(a1 + 96);
    pvRestartBuffer = plsn;
    v14 = ClfsWriteRestartArea(
            v13,
            &pvRestartBuffer,
            8u,
            (PCLFS_LSN)((unsigned __int64)&plsn & -(__int64)(a3 != 0)),
            0,
            &pcbInfoBuffer,
            &plsnNext);
    v3 = v14;
    if ( a3 )
    {
      if ( v14 >= 0 )
        *(CLFS_LSN *)(a1 + 120) = plsn;
    }
  }
  v22[0] = v6;
  v15 = (CLFS_INFORMATION *)ExAllocatePool2(256LL, v6, 538987843LL);
  v16 = v15;
  if ( v15 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), v15, v22);
    ExFreePoolWithTag(v16, 0);
  }
  if ( (unsigned int)dword_140C04390 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C04390, 1LL) )
    {
      v30 = 0;
      v28 = v22;
      v22[0] = v3;
      v29 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04390,
        (unsigned __int8 *)word_140037C12,
        0LL,
        0LL,
        3u,
        &v27);
    }
  }
  return (unsigned int)v3;
}
