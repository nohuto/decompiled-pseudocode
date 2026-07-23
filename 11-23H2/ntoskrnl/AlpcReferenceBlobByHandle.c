/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x14071DDF8
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A8FC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14071CA48 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x14071EA40 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpLookupMessage @ 0x140738AA0 (AlpcpLookupMessage.c)
 *     NtAlpcCreateSectionView @ 0x1407B9DB0 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeletePortSection @ 0x1407C5300 (NtAlpcDeletePortSection.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408A50E0 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcRevokeSecurityContext @ 0x140978EF0 (NtAlpcRevokeSecurityContext.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     AlpcpReferenceBlob @ 0x140738D10 (AlpcpReferenceBlob.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(_QWORD *a1, int a2, _DWORD *a3)
{
  signed __int64 *v6; // rbx
  unsigned __int64 v7; // rcx
  ULONG_PTR v8; // rdi
  signed __int32 v10[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a1 )
    return 0LL;
  v6 = a1 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
  v7 = (unsigned int)(a2 - 16);
  if ( v7 >= a1[2]
    || (v8 = *(_QWORD *)(*a1 + 8 * v7)) == 0
    || *(unsigned __int8 *)(v8 - 31) != *a3
    || !AlpcpReferenceBlob(v8) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 0LL;
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  if ( (*(_BYTE *)(v8 - 32) & 4) != 0 )
  {
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v8 - 16) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(v8 - 16);
  }
  return v8;
}
