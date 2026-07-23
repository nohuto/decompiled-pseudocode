/*
 * XREFs of AlpcpCreateSecurityContext @ 0x14071CBC8
 * Callers:
 *     NtAlpcCreateSecurityContext @ 0x14071C780 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14071CA48 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcCreateSecurityContext @ 0x140978AC0 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     IoThreadToProcess @ 0x14028A210 (IoThreadToProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpChargePagedPoolQuota @ 0x14071CD4C (AlpcpChargePagedPoolQuota.c)
 *     SeCreateClientSecurity @ 0x14071D550 (SeCreateClientSecurity.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14071DDC0 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     AlpcAddHandleTableEntry @ 0x14071EC2C (AlpcAddHandleTableEntry.c)
 *     AlpcpEndInitialization @ 0x14071ED98 (AlpcpEndInitialization.c)
 *     AlpcpInsertResourcePort @ 0x14071EDDC (AlpcpInsertResourcePort.c)
 *     AlpcpReferenceBlob @ 0x140738D10 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x140739E30 (AlpcpAllocateBlob.c)
 */

__int64 __fastcall AlpcpCreateSecurityContext(
        volatile signed __int64 *Object,
        PETHREAD ClientThread,
        char a3,
        struct _SECURITY_QUALITY_OF_SERVICE *a4,
        ULONG_PTR *a5)
{
  PEPROCESS v9; // rdi
  void *Blob; // rax
  ULONG_PTR v11; // rbx
  NTSTATUS ClientSecurity; // ebp
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  ULONG_PTR v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v9 = IoThreadToProcess(ClientThread);
  Blob = (void *)AlpcpAllocateBlob(AlpcSecurityType, 112LL);
  v11 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x70uLL);
  *(_QWORD *)(v11 + 8) = -1LL;
  ClientSecurity = AlpcpChargePagedPoolQuota(v9, 160LL);
  if ( ClientSecurity >= 0 )
  {
    ClientSecurity = SeCreateClientSecurity(ClientThread, a4, 0, (PSECURITY_CLIENT_CONTEXT)(v11 + 32));
    if ( ClientSecurity < 0 )
    {
      AlpcpReleasePagedPoolQuota(v9, 160LL);
    }
    else
    {
      ObfReferenceObjectWithTag(v9, 0x63706C41u);
      *(_QWORD *)(v11 + 16) = v9;
      if ( !a3 )
      {
LABEL_5:
        *a5 = v11;
        return 0LL;
      }
      v14 = Object + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
      if ( (Object[52] & 0x20) == 0 )
      {
        ExAcquirePushLockExclusiveEx(v11 - 16, 0LL);
        *(_BYTE *)(v11 - 32) |= 4u;
        AlpcpReferenceBlob(v11);
        v15 = *((_QWORD *)Object + 2) + 40LL;
        v17[0] = v11;
        *(_QWORD *)v11 = v15;
        v16 = AlpcAddHandleTableEntry(v15, v17);
        *(_QWORD *)(v11 + 8) = v16;
        if ( v16 != -1 )
        {
          ObfReferenceObject((PVOID)Object);
          *(_QWORD *)(v11 + 24) = Object;
          AlpcpInsertResourcePort(Object, v11);
          if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)Object + 44);
          KeAbPostRelease((ULONG_PTR)(Object + 44));
          AlpcpEndInitialization(v11);
          goto LABEL_5;
        }
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *(_QWORD *)v11 = 0LL;
        AlpcpEndInitialization(v11);
        AlpcpDereferenceBlobEx(v11);
        return 3221225626LL;
      }
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      ClientSecurity = -1073741670;
    }
  }
  AlpcpDereferenceBlobEx(v11);
  return (unsigned int)ClientSecurity;
}
