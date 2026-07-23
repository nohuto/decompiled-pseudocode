/*
 * XREFs of ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1405C6014
 * Callers:
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x1405C6824 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     RtlDecompressBufferEx @ 0x1402F5980 (RtlDecompressBufferEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1403453C4 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x140464536 (-ST_PAGE_RECORD_GET@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1405BD39C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     SmFixSingleBitCorruption @ 0x1405CA0D4 (SmFixSingleBitCorruption.c)
 *     SmHpChunkUnprotect @ 0x1405CA6E4 (SmHpChunkUnprotect.c)
 *     SmPrepareForFatalPageError @ 0x1405CD894 (SmPrepareForFatalPageError.c)
 *     MmStoreLogCorruptionFixed @ 0x14065D194 (MmStoreLogCorruptionFixed.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmHandleDecompressionFailure(
        __int64 a1,
        char *a2,
        UCHAR *a3,
        ULONG_PTR a4,
        __int64 a5)
{
  __int64 v5; // r13
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v12; // r14
  char *v13; // rdx
  int v14; // ecx
  char v15; // al
  unsigned int v16; // ebx
  _DWORD *v17; // r15
  signed __int64 *v18; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v20; // rcx
  struct _KTHREAD *v21; // rax
  bool v22; // zf
  void *v23; // r14
  char fixed; // al
  void *WorkSpace; // rax
  PUCHAR BaseAddress; // r13
  __int64 v27; // rdx
  struct _KTHREAD *v28; // rax
  ULONG_PTR v29; // rcx
  __int128 v31; // [rsp+40h] [rbp-38h] BYREF
  __int128 v32; // [rsp+50h] [rbp-28h]
  __int64 v33; // [rsp+60h] [rbp-18h]
  ULONG FinalUncompressedSize; // [rsp+C0h] [rbp+48h] BYREF
  int v35; // [rsp+C8h] [rbp+50h]
  PUCHAR UncompressedBuffer; // [rsp+D0h] [rbp+58h]
  char *v37; // [rsp+D8h] [rbp+60h]

  UncompressedBuffer = a3;
  v5 = a5;
  v8 = *(_DWORD *)a4 >> *(_DWORD *)(a1 + 812);
  v9 = (unsigned int)(16 * (*(_DWORD *)a4 & *(_DWORD *)(a1 + 808)));
  v32 = 0LL;
  FinalUncompressedSize = 0;
  v35 = v8;
  v37 = &a2[-v9];
  DWORD2(v32) = -1;
  v33 = 1LL;
  v10 = *(_QWORD *)(a5 + 56);
  v31 = 0LL;
  v12 = 0LL;
  if ( (int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              (char **)a1,
              *(_DWORD *)(v10 + 16),
              (__int64)&v31) >= 0 )
  {
    if ( DWORD2(v32) == -1 || !DWORD2(v32) )
      v13 = (char *)&v31 + 8;
    else
      v13 = (char *)(v31 + 16LL * (unsigned int)(DWORD2(v32) - 1));
    v12 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET((_DWORD *)a1, *((_QWORD *)v13 + 1));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultCleanup(
    a1,
    (__int64)&v31,
    0);
  if ( !v12 )
    goto LABEL_15;
  if ( *(_DWORD *)a4 != *v12 )
    goto LABEL_14;
  v14 = 4096;
  if ( (v12[1] & 0xFFF) != 0 )
    v14 = v12[1] & 0xFFF;
  if ( *(unsigned __int16 *)(a4 + 4) != v14 )
LABEL_14:
    KeBugCheckEx(0x1C7u, 3uLL, a4, (ULONG_PTR)v12, 0LL);
  v15 = SmHpChunkUnprotect(a1 + 192, v12, 6LL);
  v16 = v15 & 1;
  if ( (v15 & 1) != 0 )
  {
LABEL_15:
    v17 = (_DWORD *)(v5 + 64);
    v18 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
    if ( v5 == -64 )
    {
      CurrentThread = KeGetCurrentThread();
      v20 = *(_QWORD *)(a1 + 800) + 6024LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx(v20, 0LL);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18);
      KeAbPostRelease((ULONG_PTR)v18);
      v21 = KeGetCurrentThread();
      v22 = v21->SpecialApcDisable++ == -1;
      if ( v22 && ($C71981A45BEB2B45F82C232A7085991E *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
        KiCheckForKernelApcDelivery();
    }
    v23 = *(void **)(v5 + 48);
    memmove(v23, a2, *(unsigned __int16 *)(a4 + 4));
    fixed = SmFixSingleBitCorruption((unsigned __int8 *)v23, *(unsigned __int16 *)(a4 + 4));
    v16 = fixed & 1;
    if ( (fixed & 1) != 0 )
    {
      WorkSpace = *(void **)(v5 + 16);
      BaseAddress = UncompressedBuffer;
      if ( RtlDecompressBufferEx(
             *(_WORD *)(a1 + 992),
             UncompressedBuffer,
             0x1000u,
             (PUCHAR)v23,
             *(unsigned __int16 *)(a4 + 4),
             &FinalUncompressedSize,
             WorkSpace) >= 0
        && FinalUncompressedSize == 4096 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a1 + 1928), 1u);
        v27 = *(unsigned __int16 *)(a4 + 4);
        _InterlockedAdd(&dword_140C6B408, 1u);
        MmStoreLogCorruptionFixed(a2, v27, (unsigned int)dword_140C6B408);
        v16 |= 2u;
      }
    }
    else
    {
      BaseAddress = UncompressedBuffer;
    }
    v28 = KeGetCurrentThread();
    v29 = *(_QWORD *)(a1 + 800) + 6024LL;
    --v28->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v29, 0LL);
    *v17 = 2;
    if ( v16 < 2 )
      SmPrepareForFatalPageError(
        (int)v37,
        *(_DWORD *)(a1 + 784),
        *(unsigned __int16 *)(a4 + 4),
        v35,
        *(unsigned __int16 *)(a1 + 992),
        *(_DWORD *)(a4 + 8),
        (int)a2,
        BaseAddress);
  }
  else
  {
    SmPrepareForFatalPageError(
      (int)v37,
      *(_DWORD *)(a1 + 784),
      *(unsigned __int16 *)(a4 + 4),
      v35,
      *(unsigned __int16 *)(a1 + 992),
      *(_DWORD *)(a4 + 8),
      (int)a2,
      UncompressedBuffer);
    SmHpChunkUnprotect(a1 + 192, v12, v16 + 2);
  }
  return v16 >> 1;
}
