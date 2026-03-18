/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14037FDA0
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14037FC84 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x1405FA770 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1402210C0 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140238A40 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlCompressBuffer @ 0x140244760 (RtlCompressBuffer.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14037E8DC (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmHpChunkFree @ 0x14037EC9C (SmHpChunkFree.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1403800F0 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1403812B0 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkAlloc @ 0x1403815D4 (SmHpChunkAlloc.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x1403817C4 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SmCrAuthEncrypt @ 0x1405FD8C0 (SmCrAuthEncrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v5; // eax
  unsigned int v8; // edx
  int Space; // edi
  __int64 v10; // rsi
  int v11; // ecx
  unsigned __int8 *v12; // r14
  void *v13; // r15
  ULONG v14; // edx
  int v15; // r13d
  unsigned int v16; // r12d
  size_t v17; // r8
  unsigned __int8 *v18; // rcx
  UCHAR *v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  ULONG v22; // ecx
  int *v23; // rdi
  int v24; // eax
  __int64 v25; // rax
  ULONG_PTR v27; // rsi
  struct _KTHREAD *CurrentThread; // r14
  unsigned int SessionId; // ecx
  __int64 p_Process; // rdi
  unsigned int v31; // edx
  int v32; // r8d
  struct _KTHREAD *v33; // rcx
  bool v34; // zf
  int v35; // eax
  UCHAR *v36; // rdi
  unsigned int v37; // ecx
  int v38; // ecx
  ULONG v39; // r9d
  __int64 v40; // r9
  __int64 v41; // rcx
  int v42; // eax
  ULONG FinalCompressedSize; // [rsp+40h] [rbp-39h] BYREF
  int v44; // [rsp+44h] [rbp-35h] BYREF
  unsigned __int8 v45[8]; // [rsp+48h] [rbp-31h] BYREF
  _DWORD *v46; // [rsp+50h] [rbp-29h]
  unsigned int *v47; // [rsp+58h] [rbp-21h]
  int *v48; // [rsp+60h] [rbp-19h]
  __int64 v49; // [rsp+68h] [rbp-11h]
  __int64 v50; // [rsp+70h] [rbp-9h] BYREF
  int v51; // [rsp+78h] [rbp-1h]

  v48 = (int *)a2;
  v50 = 0LL;
  v51 = 0;
  v5 = *(_DWORD *)(a1 + 776);
  v8 = *(_DWORD *)a2 & 7;
  v49 = a3;
  v47 = a4;
  *(_QWORD *)v45 = 0LL;
  v44 = 0;
  if ( ((unsigned __int8)v5 == 0 ? 7 : 0) < v8 )
    v8 = (unsigned __int8)v5 == 0 ? 7 : 0;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v8, *a4, (unsigned int)v45, (__int64)&v44);
  if ( Space >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v10 + 6021) & 4) != 0 )
    {
      v27 = v10 + 6024;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v27);
      CurrentThread = KeGetCurrentThread();
      if ( v27 - qword_140C50630 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      _disable();
      p_Process = (__int64)&CurrentThread[1].Process;
      v31 = 0;
      while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v27 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(p_Process + 18)
           || (*(_DWORD *)p_Process & 1) != 0
           || *(_DWORD *)(p_Process + 8) != SessionId )
      {
        ++v31;
        p_Process += 96LL;
        if ( v31 >= 6 )
          goto LABEL_34;
      }
      *(_BYTE *)(p_Process + 18) = 0;
      if ( !p_Process )
      {
LABEL_34:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v27, SessionId, 0LL);
        _enable();
        goto LABEL_41;
      }
      if ( *(__int64 *)p_Process < 0 )
      {
        *(_BYTE *)p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process);
        _disable();
      }
      v32 = *(_DWORD *)(p_Process + 88);
      *(_DWORD *)(p_Process + 88) = 0;
      *(_BYTE *)(p_Process + 17) = 0;
      *(_QWORD *)p_Process = 0LL;
      CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
      _enable();
      if ( v32 )
        KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v27, v32);
LABEL_41:
      v33 = KeGetCurrentThread();
      v34 = v33->SpecialApcDisable++ == -1;
      if ( v34 && ($CEA84C04E3712D858E5667A507841A2A *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
        KiCheckForKernelApcDelivery();
    }
    v11 = *(_DWORD *)a2;
    v12 = (unsigned __int8 *)(*(_QWORD *)v45 + *(unsigned int *)(a1 + 824));
    v13 = *(void **)(a2 + 8);
    v46 = *(_DWORD **)v45;
    if ( v11 >= 0 )
    {
      v35 = *(_DWORD *)(a1 + 776);
      if ( (v35 & 0x400) != 0 )
      {
        v14 = 4096;
      }
      else
      {
        if ( (v35 & 0x8000) != 0 )
        {
          memmove((void *)(*(_QWORD *)(a1 + 1784) + 4096LL), v13, 0x1000uLL);
          v11 = *(_DWORD *)a2;
          v13 = (void *)(*(_QWORD *)(a1 + 1784) + 4096LL);
        }
        v14 = 0;
      }
    }
    else
    {
      v14 = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 40LL);
    }
    v15 = v44;
    v16 = *(_DWORD *)(a1 + 816) - (v44 & *(_DWORD *)(a1 + 808));
    FinalCompressedSize = v14;
    if ( v11 < 0 )
    {
      v17 = v14;
      v18 = v12;
      v19 = (UCHAR *)v13;
      goto LABEL_9;
    }
    if ( v16 >= *(_DWORD *)(a1 + 820) )
      v36 = v12;
    else
      v36 = *(UCHAR **)(a1 + 1784);
    if ( !v14 )
    {
      if ( RtlCompressBuffer(
             *(_WORD *)(a1 + 992),
             (PUCHAR)v13,
             0x1000u,
             v36,
             0x1000u,
             0x1000u,
             &FinalCompressedSize,
             *(PVOID *)(a1 + 896)) >= 0 )
      {
        v14 = FinalCompressedSize;
      }
      else
      {
        v14 = 4096;
        FinalCompressedSize = 4096;
      }
    }
    if ( v36 != v12 )
    {
      v37 = (v14 + *(_DWORD *)(a1 + 824) + 15) >> 4;
      *v47 = v37;
      if ( v37 > v16 )
      {
        Space = -1073741267;
LABEL_62:
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
        return (unsigned int)Space;
      }
    }
    if ( v14 > 0xFF0 )
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x200) != 0 )
      {
        Space = -1073740762;
        goto LABEL_62;
      }
      v14 = 4096;
      v36 = (UCHAR *)v13;
      FinalCompressedSize = 4096;
    }
    if ( v36 == v12 )
      goto LABEL_10;
    v17 = v14;
    v18 = v12;
    v19 = v36;
LABEL_9:
    memmove(v18, v19, v17);
LABEL_10:
    if ( !*(_QWORD *)(a1 + 760) )
    {
      Space = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(a1);
      if ( Space < 0 )
        goto LABEL_62;
    }
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
    v20 = SmHpChunkAlloc(a1 + 192);
    v21 = v20;
    if ( !v20 )
      return (unsigned int)-1073741670;
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v20);
    *(_QWORD *)(v21 + 4) = 0LL;
    *(_DWORD *)v21 = v15;
    v22 = FinalCompressedSize;
    if ( FinalCompressedSize < 0x1000 )
    {
      *(_DWORD *)(v21 + 4) ^= ((unsigned __int16)FinalCompressedSize ^ (unsigned __int16)*(_DWORD *)(v21 + 4)) & 0xFFF;
      v22 = FinalCompressedSize;
    }
    v23 = v48;
    if ( *v48 >= 0 )
    {
      *(_QWORD *)v45 = 0LL;
      MetroHash64::Hash(v12, v22, v45, 0LL);
      v24 = *(_DWORD *)v45;
    }
    else
    {
      v24 = *(_DWORD *)(v49 + 96);
    }
    *(_DWORD *)(v21 + 8) = v24;
    v25 = *(_QWORD *)(a1 + 1016);
    if ( *(_DWORD *)(v25 + 24) )
    {
      v38 = *(_DWORD *)(v25 + 8);
      v39 = FinalCompressedSize;
      ++*(_QWORD *)(a1 + 1024);
      *(_DWORD *)(v21 + 12) = *(_DWORD *)(a1 + 1024);
      v40 = -v38 & (v38 + v39 - 1);
      *(_WORD *)(v21 + 6) = *(_WORD *)(a1 + 1028);
      LODWORD(v50) = FinalCompressedSize;
      HIDWORD(v50) = *(_DWORD *)(v21 + 12);
      v41 = *(_QWORD *)(a1 + 1016);
      v51 = *(unsigned __int16 *)(v21 + 6);
      if ( (int)SmCrAuthEncrypt(v41, v12, v12, v40, &v50) < 0 )
      {
        Space = -1073741174;
        goto LABEL_73;
      }
    }
    else if ( *(_BYTE *)(a1 + 776) )
    {
      v42 = RtlComputeCrc32(0, (char *)v12, FinalCompressedSize);
      *v46 = v42;
    }
    Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(a1, v23, v21);
    if ( Space >= 0 )
      return 0;
LABEL_73:
    SmHpChunkFree((_DWORD *)(a1 + 192), v21);
  }
  return (unsigned int)Space;
}
