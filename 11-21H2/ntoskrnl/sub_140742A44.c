/*
 * XREFs of sub_140742A44 @ 0x140742A44
 * Callers:
 *     sub_14069FF64 @ 0x14069FF64 (sub_14069FF64.c)
 *     sub_140717EE4 @ 0x140717EE4 (sub_140717EE4.c)
 *     sub_140742300 @ 0x140742300 (sub_140742300.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

__int64 __fastcall sub_140742A44(__int64 a1, __int64 a2, char a3)
{
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  const CLFS_LSN *v7; // rax
  NTSTATUS LogFileInformation; // eax
  CLFS_LSN LastLsn; // rcx
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v11; // rbx
  void *v12; // rcx
  NTSTATUS v13; // eax
  CLFS_INFORMATION *v14; // rax
  CLFS_INFORMATION *v15; // rbx
  const CLFS_LSN *v17; // r14
  CLFS_CONTAINER_ID v18; // ebx
  CLFS_LSN plsn; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  ULONG pcbInfoBuffer; // [rsp+50h] [rbp-B0h] BYREF
  CLFS_LSN pvRestartBuffer; // [rsp+58h] [rbp-A8h] BYREF
  CLFS_LSN plsnNext; // [rsp+60h] [rbp-A0h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+F0h] [rbp-10h] BYREF
  ULONG *v26; // [rsp+110h] [rbp+10h]
  int v27; // [rsp+118h] [rbp+18h]
  int v28; // [rsp+11Ch] [rbp+1Ch]

  v3 = 0;
  *(_QWORD *)v20 = 0LL;
  pvRestartBuffer.ullOffset = 0LL;
  plsn.ullOffset = 0xFFFFFFFF00000000uLL;
  plsnNext.ullOffset = 0LL;
  pcbInfoBuffer = 120;
  memset(&pinfoBuffer, 0, sizeof(pinfoBuffer));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C49100);
  v7 = (const CLFS_LSN *)sub_140AB4218(a1 + 16, v20, 0LL);
  if ( v7 )
  {
    while ( 1 )
    {
      v17 = v7 + 13;
      if ( !ClfsLsnInvalid(v7 + 13) )
      {
        v18 = ClfsLsnContainer((const CLFS_LSN *)(a1 + 120));
        if ( ClfsLsnContainer(v17) == v18 )
          break;
      }
      if ( ClfsLsnInvalid(&plsn) || ClfsLsnLess(v17, &plsn) )
        plsn = *v17;
      v7 = (const CLFS_LSN *)sub_140AB4218(a1 + 16, v20, 0LL);
      if ( !v7 )
        goto LABEL_2;
    }
    ExReleaseFastMutexUnsafe(&stru_140C49100);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
LABEL_2:
    ExReleaseFastMutexUnsafe(&stru_140C49100);
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
    v20[0] = 120;
    PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), PoolWithTag, v20);
      ExFreePoolWithTag(v11, 0);
    }
    if ( v3 >= 0 )
    {
      v12 = *(void **)(a1 + 96);
      pvRestartBuffer = plsn;
      v13 = ClfsWriteRestartArea(
              v12,
              &pvRestartBuffer,
              8u,
              (PCLFS_LSN)((unsigned __int64)&plsn & -(__int64)(a3 != 0)),
              0,
              &pcbInfoBuffer,
              &plsnNext);
      v3 = v13;
      if ( a3 )
      {
        if ( v13 >= 0 )
          *(CLFS_LSN *)(a1 + 120) = plsn;
      }
    }
    v20[0] = 120;
    v14 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
    v15 = v14;
    if ( v14 )
    {
      ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), v14, v20);
      ExFreePoolWithTag(v15, 0);
    }
    if ( (unsigned int)dword_140C03868 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C03868, 1LL) )
      {
        v28 = 0;
        v26 = v20;
        v20[0] = v3;
        v27 = 4;
        sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)&dword_140029F04, 0LL, 0LL, 3u, &v25);
      }
    }
    return (unsigned int)v3;
  }
}
