/*
 * XREFs of AlpcpCreateSection @ 0x14076C5B8
 * Callers:
 *     NtAlpcCreatePortSection @ 0x14076C420 (NtAlpcCreatePortSection.c)
 *     AlpcpMapLegacyPortView @ 0x1407B9BF0 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     AlpcAddHandleTableEntry @ 0x14071EC2C (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x14071ED98 (AlpcpEndInitialization.c)
 *     AlpcpInsertResourcePort @ 0x14071EDDC (AlpcpInsertResourcePort.c)
 *     AlpcpReferenceBlob @ 0x140738D10 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x140739E30 (AlpcpAllocateBlob.c)
 *     MmCreateSection @ 0x14076C810 (MmCreateSection.c)
 */

__int64 __fastcall AlpcpCreateSection(char *Object, unsigned __int8 a2, char a3, void *a4, PVOID a5, ULONG_PTR *a6)
{
  int v6; // ebp
  char *Blob; // rax
  ULONG_PTR v11; // rbx
  NTSTATUS v12; // edi
  volatile signed __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v18; // [rsp+48h] [rbp-20h] BYREF

  v6 = a2;
  if ( !a5 || a4 && a2 )
    return 3221225485LL;
  if ( (*((_DWORD *)Object + 64) & 0x1000000) != 0 )
    return 3221227270LL;
  Blob = AlpcpAllocateBlob((__int64)AlpcSectionType, 72LL, 1);
  v11 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x48uLL);
  *(_QWORD *)(v11 + 32) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(v11 + 8) = ~((unsigned int)AlpcpRegionGranularity - 1LL) & ((unsigned __int64)a5
                                                                        + (unsigned int)(AlpcpRegionGranularity - 1));
  *(_QWORD *)(v11 + 64) = v11 + 56;
  *(_QWORD *)(v11 + 56) = v11 + 56;
  if ( a4 )
  {
    a5 = 0LL;
    v12 = ObReferenceObjectByHandle(a4, 6u, MmSectionObjectType, KeGetCurrentThread()->PreviousMode, &a5, 0LL);
    *(_QWORD *)v11 = a5;
  }
  else
  {
    v17 = *(_QWORD *)(v11 + 8);
    *(_DWORD *)(v11 + 48) = *(_DWORD *)(v11 + 48) ^ (*(_DWORD *)(v11 + 48) ^ (2 * v6)) & 2 | 1;
    v12 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, __int64 *, int, int, _QWORD, _QWORD))MmCreateSection)(
            v11,
            983071LL,
            0LL,
            &v17,
            4,
            0x8000000,
            0LL,
            0LL);
  }
  if ( v12 < 0 )
  {
LABEL_23:
    AlpcpDereferenceBlobEx(v11, 1);
    return (unsigned int)v12;
  }
  v13 = (volatile signed __int64 *)(Object + 352);
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 352), 0LL);
  if ( (*((_DWORD *)Object + 104) & 0x20) != 0 )
  {
    if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    v12 = -1073741769;
    goto LABEL_23;
  }
  ExAcquirePushLockExclusiveEx(v11 - 16, 0LL);
  *(_BYTE *)(v11 - 32) |= 4u;
  AlpcpReferenceBlob(v11);
  if ( a3 )
  {
    v14 = *((_QWORD *)Object + 2) + 40LL;
    v18 = v11;
    *(_QWORD *)(v11 + 16) = v14;
    v15 = AlpcAddHandleTableEntry(v14, &v18);
    *(_QWORD *)(v11 + 24) = v15;
    if ( v15 == -1 )
    {
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 352));
      *(_QWORD *)(v11 + 16) = 0LL;
      AlpcpEndInitialization(v11);
      AlpcpDereferenceBlobEx(v11, 2);
      return 3221225626LL;
    }
  }
  ObfReferenceObject(Object);
  *(_QWORD *)(v11 + 40) = Object;
  AlpcpInsertResourcePort((__int64)Object, v11);
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 352));
  AlpcpEndInitialization(v11);
  *a6 = v11;
  return 0LL;
}
