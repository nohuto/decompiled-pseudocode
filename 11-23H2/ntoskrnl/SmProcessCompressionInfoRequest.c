/*
 * XREFs of SmProcessCompressionInfoRequest @ 0x1408417C4
 * Callers:
 *     SmQueryStoreInformation @ 0x14084134C (SmQueryStoreInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x140344D10 (SmpGetProcessPartition.c)
 *     SmKmStoreReferenceEx @ 0x1403453E8 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140345424 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14039BDD8 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x14076022C (PsReferencePartitionByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCompressionInfoRequest(void *Src, size_t Size, _DWORD *a3, char a4)
{
  size_t v5; // r14
  __int64 v7; // rcx
  __int64 ProcessPartition; // rsi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  unsigned int i; // edi
  int v15; // ebx
  int StoreStats; // ebx
  struct _EX_RUNDOWN_REF *v18; // rax
  unsigned int *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // [rsp+38h] [rbp-690h] BYREF
  __int128 Srca; // [rsp+40h] [rbp-688h] BYREF
  __int128 v25; // [rsp+50h] [rbp-678h]
  __int128 v26; // [rsp+60h] [rbp-668h]
  unsigned __int64 v27; // [rsp+70h] [rbp-658h]
  _DWORD *v28; // [rsp+78h] [rbp-650h]
  _DWORD v29[384]; // [rsp+80h] [rbp-648h] BYREF

  v28 = a3;
  v5 = (unsigned int)Size;
  memset(v29, 0, sizeof(v29));
  v23 = 0LL;
  Srca = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( (((_DWORD)v5 - 40) & 0xFFFFFFF7) != 0 )
    goto LABEL_30;
  if ( a4 )
  {
    if ( v5 - 1 > 0xFFE )
    {
      ProbeForWrite(Src, (unsigned int)v5, 8u);
    }
    else
    {
      if ( ((unsigned __int8)Src & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
        v7 = (__int64)Src;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + v5 - 1) = *(_BYTE *)(v7 + v5 - 1);
    }
  }
  memmove(&Srca, Src, v5);
  if ( (unsigned int)(unsigned __int8)Srca - 3 > 1 )
    goto LABEL_28;
  if ( (_DWORD)v5 != 48 && (unsigned __int8)Srca == 4 || (unsigned __int8)Srca == 3 && (_DWORD)v5 != 40 )
  {
LABEL_30:
    v15 = -1073741306;
    goto LABEL_21;
  }
  if ( (Srca & 0xFFFFFF00) != 0 )
  {
LABEL_28:
    v15 = -1073741811;
    goto LABEL_21;
  }
  if ( *((_QWORD *)&v26 + 1) )
  {
    v15 = PsReferencePartitionByHandle(*((ULONG_PTR *)&v26 + 1), 1, a4, 0x52516D53u, &v23);
    if ( v15 < 0 )
      goto LABEL_21;
    ProcessPartition = *(_QWORD *)(v23 + 24);
    if ( !ProcessPartition )
      goto LABEL_37;
  }
  else
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(ProcessPartition + 1992);
  ExAcquirePushLockExclusiveEx(ProcessPartition + 1992, 0LL);
  v11 = *(_QWORD *)(ProcessPartition + 2008);
  if ( !v11 )
  {
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(ProcessPartition + 1992));
    KeAbPostRelease(ProcessPartition + 1992);
    KeLeaveCriticalRegion();
LABEL_37:
    v15 = -1073741399;
    goto LABEL_21;
  }
  DWORD1(Srca) = *(_DWORD *)(v11 + 1088);
  *((_QWORD *)&Srca + 1) = *(_QWORD *)(v11 + 1816) << 12;
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(ProcessPartition + 1992));
  KeAbPostRelease(ProcessPartition + 1992);
  KeLeaveCriticalRegion();
  v21 = 0LL;
  v22 = 0LL;
  v25 = 0uLL;
  for ( i = 0; i < 0x400; ++i )
  {
    v12 = SmKmStoreReferenceEx(ProcessPartition, i, v13);
    v27 = v12;
    if ( v12 )
    {
      StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(v12);
      v18 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(ProcessPartition, *(_DWORD *)(v27 + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v18 + 1);
      if ( StoreStats >= 0 )
      {
        v13 = v29[3];
        v19 = &v29[11];
        v20 = 8LL;
        do
        {
          v21 += v29[3] * (unsigned __int64)*v19;
          *((_QWORD *)&v25 + 1) = v21;
          v19 += 2;
          --v20;
        }
        while ( v20 );
        v22 += (unsigned __int64)v29[8] << 12;
        *(_QWORD *)&v25 = v22;
        *(_QWORD *)&v26 = ((unsigned __int64)v29[9] << 12) + v26;
      }
    }
  }
  v15 = 0;
  memmove(Src, &Srca, v5);
  *v28 = v5;
LABEL_21:
  if ( v23 )
    PsDereferencePartition(v23);
  return (unsigned int)v15;
}
