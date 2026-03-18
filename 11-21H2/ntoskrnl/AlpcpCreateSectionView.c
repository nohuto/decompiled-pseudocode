/*
 * XREFs of AlpcpCreateSectionView @ 0x14066C5B0
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x14066C1DC (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x14066C3C0 (NtAlpcCreateSectionView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     AlpcpCreateRegion @ 0x14066C6AC (AlpcpCreateRegion.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x1407A66CC (AlpcpCreateView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407B0F40 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        signed __int64 *Object,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  int Region; // ebx
  int View; // esi

  *a5 = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  Region = AlpcpCreateRegion(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2);
  if ( Region < 0 )
    return (unsigned int)Region;
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
  AlpcpLockForCachedReferenceBlob(0LL);
  View = AlpcpCreateView(0LL, Object);
  AlpcpUnlockBlob(0LL);
  if ( _InterlockedCompareExchange64(Object + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 44));
  AlpcpDereferenceBlobEx(0LL);
  if ( View < 0 )
    return (unsigned int)View;
  *a5 = 0LL;
  return 0LL;
}
