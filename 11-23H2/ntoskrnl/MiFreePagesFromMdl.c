/*
 * XREFs of MiFreePagesFromMdl @ 0x1402EBE10
 * Callers:
 *     MmFreePagesFromMdl @ 0x1402EC240 (MmFreePagesFromMdl.c)
 *     EtwpFreeTraceBuffer @ 0x14031F2D8 (EtwpFreeTraceBuffer.c)
 *     EtwpAllocateTraceBuffer @ 0x1403716DC (EtwpAllocateTraceBuffer.c)
 *     BgpFwFreeMemory @ 0x140386280 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14038780C (BgpFwAllocateMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403910A4 (HalpAllocateCommonBufferDmaThin.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403AC5D4 (PpmHeteroInitializeHgsSupport.c)
 *     MmFreePagesFromMdlEx @ 0x1403B6B70 (MmFreePagesFromMdlEx.c)
 *     HalpDmaAllocateMapRegisters @ 0x14045C39E (HalpDmaAllocateMapRegisters.c)
 *     HalFreeCommonBufferVector @ 0x14050F550 (HalFreeCommonBufferVector.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050F9C0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaFreeChildAdapter @ 0x1405116C0 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x1405127D0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140512920 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferDmaThin @ 0x140513820 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferDmarThin @ 0x140513F40 (HalFreeCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405140A8 (HalpAllocateCommonBufferDmarThin.c)
 *     HvlpWithdrawPages @ 0x140542B30 (HvlpWithdrawPages.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1405C6850 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C98FC (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     DifMmFreePagesFromMdlWrapper @ 0x1405E7770 (DifMmFreePagesFromMdlWrapper.c)
 *     EtwpAllocatePartitionMemory @ 0x140601834 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1406018F4 (EtwpFreePartitionMemory.c)
 *     MiReturnMdlExcess @ 0x140623C78 (MiReturnMdlExcess.c)
 *     MiFreeAwePagesFromMdl @ 0x14064A260 (MiFreeAwePagesFromMdl.c)
 *     MiFreePhysicalPageChain @ 0x14064A6C0 (MiFreePhysicalPageChain.c)
 *     MiFreeSecureKernelPage @ 0x140656ED4 (MiFreeSecureKernelPage.c)
 *     MmFreeNonChargedSecurePages @ 0x140658208 (MmFreeNonChargedSecurePages.c)
 *     MmFreeSecureKernelPages @ 0x1406583FC (MmFreeSecureKernelPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A425D0 (NtFreeUserPhysicalPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A445CC (MiAllocatePartitionPhysicalPages.c)
 *     KiComputeNumaCosts @ 0x140B75D24 (KiComputeNumaCosts.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140219488 (MiSetPfnIdentity.c)
 *     MiFreeMdlPageRun @ 0x1402C8C70 (MiFreeMdlPageRun.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     MiZeroAndReleasePages @ 0x1402D32C0 (MiZeroAndReleasePages.c)
 *     MiInitializeLargePfnList @ 0x1402E9228 (MiInitializeLargePfnList.c)
 *     MiIsPfnEnclave @ 0x1402EC220 (MiIsPfnEnclave.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiRetardMdl @ 0x14061CF10 (MiRetardMdl.c)
 *     MiLogMdlRangeEvent @ 0x1406239F0 (MiLogMdlRangeEvent.c)
 */

void *__fastcall MiFreePagesFromMdl(ULONG_PTR BugCheckParameter2, int a2)
{
  int v2; // r12d
  ULONG_PTR v3; // r13
  void *v4; // r10
  void *v5; // rsi
  int v6; // r11d
  __int64 v7; // rdi
  ULONG_PTR *v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  int v11; // ebx
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v13; // r12
  __int64 v14; // r13
  void *v15; // r8
  int v16; // ecx
  char *v17; // r9
  unsigned __int64 v18; // rdx
  int v19; // edi
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  ULONG_PTR *v22; // r14
  void *result; // rax
  int v24; // r8d
  int v25; // eax
  ULONG_PTR v26; // rcx
  __int64 v27; // r12
  unsigned __int64 v28; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rdx
  int v36; // [rsp+30h] [rbp-E8h]
  int v37; // [rsp+34h] [rbp-E4h]
  void *v38; // [rsp+38h] [rbp-E0h]
  __int64 v39; // [rsp+40h] [rbp-D8h]
  void *v40; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v42; // [rsp+58h] [rbp-C0h]
  ULONG_PTR *v43; // [rsp+60h] [rbp-B8h]
  _QWORD v44[12]; // [rsp+70h] [rbp-A8h] BYREF

  v2 = a2;
  v37 = a2;
  v3 = BugCheckParameter2;
  memset(v44, 0, sizeof(v44));
  v38 = 0LL;
  MiInitializeLargePfnList(v44);
  v5 = 0LL;
  v6 = 1;
  v36 = 1;
  if ( _bittest16((const signed __int16 *)(v3 + 10), 9u) )
  {
    v2 &= ~1u;
    v37 = v2;
    MiRetardMdl(v3);
    v6 = 1;
    v4 = 0LL;
  }
  if ( (*(_BYTE *)(v3 + 10) & 1) != 0 )
  {
    MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
    v6 = 1;
    v4 = 0LL;
  }
  if ( (*(_WORD *)(v3 + 10) & 0x801) != 0 )
    KeBugCheckEx(0x1Au, 0x1238uLL, v3, *(__int16 *)(v3 + 10), 0LL);
  v7 = 0LL;
  v8 = (ULONG_PTR *)(v3 + 48);
  v39 = 0LL;
  v9 = (((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v3 + 40) + 4095) >> 12;
  v42 = v9;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    MiLogMdlRangeEvent(v3 + 48, 633LL, v9, 1LL);
    v6 = 1;
    v4 = 0LL;
  }
  v10 = 0LL;
  v11 = 1;
  if ( !v9 )
  {
LABEL_27:
    v22 = &v8[-v10];
    goto LABEL_28;
  }
  do
  {
    BugCheckParameter4 = *v8;
    v43 = v8;
    v13 = 48 * *v8;
    v14 = v13 - 0x220000000000LL;
    if ( (*(_QWORD *)(v13 - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
      KeBugCheckEx(0x1Au, 0x1236uLL, BugCheckParameter2, (ULONG_PTR)v8, BugCheckParameter4);
    v15 = *(void **)(qword_140C673C8
                   + 8 * ((*(_QWORD *)(48 * BugCheckParameter4 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
    v16 = dword_140C65A88;
    v40 = v15;
    if ( dword_140C65A84 > (unsigned int)dword_140C65A88
      || (v17 = (char *)qword_140C65AC8 + 16 * dword_140C65A84, BugCheckParameter4 < *(_QWORD *)v17)
      || dword_140C65A84 != dword_140C65A88 && BugCheckParameter4 >= *((_QWORD *)v17 + 2) )
    {
      v24 = 0;
      if ( dword_140C65A88 < 0 )
LABEL_78:
        KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter4, 0LL, 0LL);
      while ( 1 )
      {
        v25 = (v24 + v16) >> 1;
        v17 = (char *)qword_140C65AC8 + 16 * v25;
        if ( BugCheckParameter4 < *(_QWORD *)v17 )
        {
          if ( !v25 )
            KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter4, (ULONG_PTR)v17, 0LL);
          v16 = v25 - 1;
        }
        else
        {
          if ( v25 == dword_140C65A88 || BugCheckParameter4 < *((_QWORD *)v17 + 2) )
          {
            v15 = *(void **)(qword_140C673C8
                           + 8 * ((*(_QWORD *)(48 * BugCheckParameter4 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
            dword_140C65A84 = v25;
            break;
          }
          v24 = v25 + 1;
        }
        if ( v16 < v24 )
          goto LABEL_78;
      }
    }
    v18 = *(_QWORD *)(v14 + 40);
    v19 = *((_DWORD *)v17 + 2);
    if ( ((v18 >> 60) & 7) == 3 )
    {
      v28 = (unsigned __int8)MiLockPageInline(v14);
      MiSetPfnIdentity(v14, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v28 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
          v33 = (v32 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v28);
      _InterlockedDecrement64(&qword_140C65BA8);
      v18 = *(_QWORD *)(v14 + 40);
      v9 = v42;
      v15 = v40;
      v4 = v38;
      v6 = v36;
    }
    if ( !v10 )
    {
      v10 = 1LL;
      v36 = *(unsigned __int8 *)(v14 + 34) >> 6;
      v38 = v15;
      v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(4 * MiIsPfnEnclave(v14))) & 4;
LABEL_41:
      LODWORD(v5) = v19;
      goto LABEL_25;
    }
    v11 &= ~2u;
    if ( v4 != v15 )
      v11 |= 2u;
    if ( (v11 & 2) != 0 )
      goto LABEL_43;
    v20 = (_QWORD *)qword_140C69888;
    if ( qword_140C69888 )
    {
      if ( ((v18 >> 60) & 7) == 1 )
      {
        v34 = 0xAAAAAAAAAAAAAAABuLL * (v13 >> 4);
        if ( qword_140C69888 )
        {
          do
          {
            v35 = v20[3];
            if ( v34 >= v35 )
            {
              if ( v34 - v35 < v20[4] )
                goto LABEL_43;
              v20 = (_QWORD *)v20[1];
            }
            else
            {
              v20 = (_QWORD *)*v20;
            }
          }
          while ( v20 );
        }
      }
    }
    if ( *(unsigned __int8 *)(v14 + 34) >> 6 != v6 || v19 != (_DWORD)v5 )
    {
LABEL_43:
      if ( (v11 & 1) != 0 )
      {
LABEL_44:
        v26 = v8[-v10];
LABEL_45:
        MiFreeMdlPageRun(v26, v10, v37, (__int64)v44);
        v27 = v10 + v39;
        v39 += v10;
        if ( (v11 & 2) != 0 )
        {
          MiZeroAndReleasePages((__int64)v44, v37);
          if ( v38 == &MiSystemPartition && (v11 & 4) == 0 )
            _InterlockedExchangeAdd64(&qword_140C699B0, -v27);
          v4 = v40;
          v39 = 0LL;
          v38 = v40;
        }
        else
        {
          v4 = v38;
        }
        v10 = 1LL;
        v6 = *(unsigned __int8 *)(v14 + 34) >> 6;
        v36 = v6;
        goto LABEL_41;
      }
LABEL_71:
      v26 = *(v8 - 1);
      goto LABEL_45;
    }
    v21 = *(v8 - 1);
    if ( *v8 == v21 + 1 )
    {
      if ( v10 == 1 || (v11 & 1) != 0 )
      {
        v11 |= 1u;
        ++v10;
        goto LABEL_25;
      }
      goto LABEL_71;
    }
    if ( *v8 != v21 - 1 )
      goto LABEL_43;
    if ( v10 != 1 && (v11 & 1) != 0 )
      goto LABEL_44;
    v11 &= ~1u;
    ++v10;
LABEL_25:
    v7 = v39;
    --v9;
    ++v8;
    v42 = v9;
  }
  while ( v9 );
  v3 = BugCheckParameter2;
  v5 = v4;
  v2 = v37;
  if ( (v11 & 1) != 0 )
    goto LABEL_27;
  v22 = v43;
LABEL_28:
  MiFreeMdlPageRun(*v22, v10, v2, (__int64)v44);
  MiZeroAndReleasePages((__int64)v44, v2);
  result = &MiSystemPartition;
  if ( v5 == &MiSystemPartition && (v11 & 4) == 0 )
    result = (void *)_InterlockedExchangeAdd64(&qword_140C699B0, -(__int64)(v7 + v10));
  *(_WORD *)(v3 + 10) &= ~2u;
  return result;
}
