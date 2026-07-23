/*
 * XREFs of sub_140845380 @ 0x140845380
 * Callers:
 *     sub_1408452CC @ 0x1408452CC (sub_1408452CC.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140845380(_DWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  unsigned int v10; // r10d
  __int64 v11; // rbx
  struct _ERESOURCE *v12; // r13
  __int64 *v13; // rbx
  void *v14; // rsi
  __int64 v15; // rbp
  __int64 v17; // rax
  __int64 Pool2; // rax
  __int64 v19; // rax
  void *v20; // rcx
  void *v21; // rcx

  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = (unsigned int)(1529154084 * *a1) >> 28;
  --*((_WORD *)CurrentThread + 242);
  v11 = v10;
  v12 = &stru_140CF66C0 + (v10 & 3);
  ExAcquireResourceSharedLite(v12, 1u);
  v13 = *(__int64 **)(qword_140D3CA78 + 8 * v11);
  if ( !v13 )
  {
LABEL_14:
    v9 = -1073741729;
    goto LABEL_10;
  }
  while ( *a1 != *((_DWORD *)v13 + 2) || a1[1] != *((_DWORD *)v13 + 3) )
  {
    v13 = (__int64 *)*v13;
    if ( !v13 )
      goto LABEL_14;
  }
  v14 = 0LL;
  *(_OWORD *)a2 = *(_OWORD *)(v13 + 7);
  *(_OWORD *)a3 = *(_OWORD *)(v13 + 9);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  if ( !v13[8]
    || (v17 = ExAllocatePool2(256LL, *((unsigned __int16 *)v13 + 29), 1799447891LL), (*(_QWORD *)(a2 + 8) = v17) != 0LL) )
  {
    if ( v13[10] )
    {
      Pool2 = ExAllocatePool2(256LL, *((unsigned __int16 *)v13 + 37), 1799447891LL);
      *(_QWORD *)(a3 + 8) = Pool2;
      if ( !Pool2 )
        v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073741670;
  }
  v15 = v13[6];
  if ( v9 < 0 )
    goto LABEL_22;
  if ( a4 )
  {
    if ( v15 )
    {
      v19 = ExAllocatePool2(256LL, 4LL * *(unsigned __int8 *)(**(_QWORD **)(v15 + 152) + 1LL) + 8, 1767073107LL);
      v14 = (void *)v19;
      if ( !v19 )
      {
        v9 = -1073741670;
LABEL_22:
        v20 = *(void **)(a2 + 8);
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        v21 = *(void **)(a3 + 8);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        goto LABEL_10;
      }
    }
  }
  memmove(*(void **)(a2 + 8), (const void *)v13[8], *((unsigned __int16 *)v13 + 29));
  memmove(*(void **)(a3 + 8), (const void *)v13[10], *((unsigned __int16 *)v13 + 37));
  if ( v14 )
  {
    memmove(v14, **(const void ***)(v15 + 152), 4LL * *(unsigned __int8 *)(**(_QWORD **)(v15 + 152) + 1LL) + 8);
    *a4 = v14;
  }
LABEL_10:
  ExReleaseResourceLite(v12);
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
