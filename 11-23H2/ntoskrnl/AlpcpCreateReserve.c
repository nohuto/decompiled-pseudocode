/*
 * XREFs of AlpcpCreateReserve @ 0x1407D0144
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x1407D0050 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     AlpcpAllocateMessage @ 0x140716AA4 (AlpcpAllocateMessage.c)
 *     AlpcpUnlockMessage @ 0x14071C0B8 (AlpcpUnlockMessage.c)
 *     AlpcpChargePagedPoolQuota @ 0x14071CD4C (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14071DDC0 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     AlpcAddHandleTableEntry @ 0x14071EC2C (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x14071ED98 (AlpcpEndInitialization.c)
 *     AlpcpInsertResourcePort @ 0x14071EDDC (AlpcpInsertResourcePort.c)
 *     AlpcpReferenceBlob @ 0x140738D10 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x140739E30 (AlpcpAllocateBlob.c)
 *     AlpcpCaptureMessageData @ 0x14073AC10 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpCreateReserve(signed __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  char *Blob; // rax
  ULONG_PTR v7; // rdi
  struct _KPROCESS *Process; // r14
  int v9; // ebx
  ULONG_PTR v10; // rbx
  int v11; // eax
  int v12; // esi
  volatile signed __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  ULONG_PTR v17; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  Blob = AlpcpAllocateBlob((__int64)AlpcReserveType, 48LL, 1);
  v7 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  *(_OWORD *)Blob = 0LL;
  *((_OWORD *)Blob + 1) = 0LL;
  *((_OWORD *)Blob + 2) = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = AlpcpChargePagedPoolQuota((__int64)Process, 0x318uLL);
  if ( v9 >= 0 )
  {
    v9 = AlpcpAllocateMessage(&v17, a2);
    if ( v9 >= 0 )
    {
      ObfReferenceObjectWithTag(Process, 0x63706C41u);
      v10 = v17;
      *(_QWORD *)(v17 + 48) = Process;
      *(_QWORD *)(v7 + 24) = v10;
      *(_QWORD *)(v7 + 32) = a2;
      *(_QWORD *)(v10 + 96) = v7;
      v11 = AlpcpCaptureMessageData(*(_QWORD *)(v7 + 24), a2, 0LL);
      *(_DWORD *)(v7 + 40) = 1;
      v12 = v11;
      AlpcpReferenceBlob(v7);
      AlpcpUnlockMessage(v10);
      if ( v12 < 0 )
      {
LABEL_12:
        AlpcpDereferenceBlobEx(v7, 1);
        return (unsigned int)v12;
      }
      v13 = Object + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
      if ( (Object[52] & 0x20) != 0 )
      {
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        v12 = -1073741769;
        goto LABEL_12;
      }
      AlpcpReferenceBlob(v7);
      ExAcquirePushLockExclusiveEx(v7 - 16, 0LL);
      *(_BYTE *)(v7 - 32) |= 4u;
      v14 = Object[2] + 40;
      v18 = v7;
      *(_QWORD *)(v7 + 8) = v14;
      v15 = AlpcAddHandleTableEntry(Object[2] + 40, &v18);
      *(_QWORD *)(v7 + 16) = v15;
      if ( v15 != -1 )
      {
        *(_QWORD *)v7 = Object;
        ObfReferenceObject(Object);
        AlpcpInsertResourcePort((__int64)Object, v7);
        if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *a3 = *(_QWORD *)(v7 + 16);
        AlpcpEndInitialization(v7);
        v12 = 0;
        goto LABEL_12;
      }
      if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      *(_QWORD *)(v7 + 8) = 0LL;
      AlpcpEndInitialization(v7);
      AlpcpDereferenceBlobEx(v7, 2);
      return 3221225626LL;
    }
    AlpcpReleasePagedPoolQuota(Process, 0x318uLL);
  }
  AlpcpDereferenceBlobEx(v7, 1);
  return (unsigned int)v9;
}
